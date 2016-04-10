
/***********************************************************************

                           h��NoiseCamera

************************************************************************/

#pragma once

	class _declspec(dllexport) ICamera 
	{
	public:
		friend  class IRenderer;

		ICamera();

		void				Destroy();

		void				SetLookAt(VECTOR3 vLookat);//Ҫ������ת��

		void				SetLookAt(float x, float y, float z);//Ҫ������ת��

		VECTOR3	GetLookAt();

		void				SetPosition(VECTOR3 vPos);

		void				SetPosition(float x, float y, float z);

		VECTOR3	GetPosition();

		void				Move(VECTOR3 vRelativePos);//pos and lookat

		void				Move(float relativeX, float relativeY, float relativeZ);

		void				SetViewFrustumPlane(float iNearPlaneZ, float iFarPlaneZ);

		void				SetViewAngle(float iViewAngleY, float iAspectRatio);

		void				SetRotation(float RX_Pitch, float RY_Yaw, float RZ_Roll);//Ҫ����Lookat

		void				SetRotationY_Yaw(float AngleX);//��setRotation��

		void				SetRotationX_Pitch(float AngleY);

		void				SetRotationZ_Roll(float AngleZ);

		float				GetRotationY_Yaw();

		float				GetRotationX_Pitch();

		float				GetRotationZ_Roll();

		void				RotateY_Yaw(float angleY);

		void				RotateX_Pitch(float angleX);

		void				RotateZ_Roll(float angleZ);

		void				fps_MoveForward(float fSignedDistance, BOOL enableYAxisMovement = FALSE);

		void				fps_MoveRight(float fSignedDistance, BOOL enableYAxisMovement = FALSE);

		void				fps_MoveUp(float fSignedDistance);

	private:

		void		mFunction_UpdateProjMatrix();
		void		mFunction_UpdateViewMatrix();
		void		mFunction_UpdateRotation();
		void		mFunction_UpdateDirection();
		float		mViewAngleY;
		float		mAspectRatio;
		float		mNearPlane;
		float		mFarPlane;

		VECTOR3		mPosition;
		VECTOR3		mLookat;
		VECTOR3		mDirection;

		MATRIX4x4*		m_pMatrixView;
		MATRIX4x4*		m_pMatrixProjection;

		float			mRotateX_Pitch;
		float			mRotateY_Yaw;
		float			mRotateZ_Roll;

	};

};

