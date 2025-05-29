/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrackingServerSize.h>
#include <aws/sagemaker/model/TrackingServerStatus.h>
#include <aws/sagemaker/model/TrackingServerMaintenanceStatus.h>
#include <aws/sagemaker/model/IsTrackingServerActive.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeMlflowTrackingServerResult
  {
  public:
    AWS_SAGEMAKER_API DescribeMlflowTrackingServerResult() = default;
    AWS_SAGEMAKER_API DescribeMlflowTrackingServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeMlflowTrackingServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the described tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const { return m_trackingServerArn; }
    template<typename TrackingServerArnT = Aws::String>
    void SetTrackingServerArn(TrackingServerArnT&& value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn = std::forward<TrackingServerArnT>(value); }
    template<typename TrackingServerArnT = Aws::String>
    DescribeMlflowTrackingServerResult& WithTrackingServerArn(TrackingServerArnT&& value) { SetTrackingServerArn(std::forward<TrackingServerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the described tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerName() const { return m_trackingServerName; }
    template<typename TrackingServerNameT = Aws::String>
    void SetTrackingServerName(TrackingServerNameT&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::forward<TrackingServerNameT>(value); }
    template<typename TrackingServerNameT = Aws::String>
    DescribeMlflowTrackingServerResult& WithTrackingServerName(TrackingServerNameT&& value) { SetTrackingServerName(std::forward<TrackingServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the general purpose bucket used as the MLflow Tracking Server
     * artifact store.</p>
     */
    inline const Aws::String& GetArtifactStoreUri() const { return m_artifactStoreUri; }
    template<typename ArtifactStoreUriT = Aws::String>
    void SetArtifactStoreUri(ArtifactStoreUriT&& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = std::forward<ArtifactStoreUriT>(value); }
    template<typename ArtifactStoreUriT = Aws::String>
    DescribeMlflowTrackingServerResult& WithArtifactStoreUri(ArtifactStoreUriT&& value) { SetArtifactStoreUri(std::forward<ArtifactStoreUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the described tracking server.</p>
     */
    inline TrackingServerSize GetTrackingServerSize() const { return m_trackingServerSize; }
    inline void SetTrackingServerSize(TrackingServerSize value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = value; }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerSize(TrackingServerSize value) { SetTrackingServerSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MLflow version used for the described tracking server.</p>
     */
    inline const Aws::String& GetMlflowVersion() const { return m_mlflowVersion; }
    template<typename MlflowVersionT = Aws::String>
    void SetMlflowVersion(MlflowVersionT&& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = std::forward<MlflowVersionT>(value); }
    template<typename MlflowVersionT = Aws::String>
    DescribeMlflowTrackingServerResult& WithMlflowVersion(MlflowVersionT&& value) { SetMlflowVersion(std::forward<MlflowVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role in your account that the
     * described MLflow Tracking Server uses to access the artifact store in Amazon
     * S3.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeMlflowTrackingServerResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current creation status of the described MLflow Tracking Server.</p>
     */
    inline TrackingServerStatus GetTrackingServerStatus() const { return m_trackingServerStatus; }
    inline void SetTrackingServerStatus(TrackingServerStatus value) { m_trackingServerStatusHasBeenSet = true; m_trackingServerStatus = value; }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerStatus(TrackingServerStatus value) { SetTrackingServerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current maintenance status of the described MLflow Tracking Server. </p>
     */
    inline TrackingServerMaintenanceStatus GetTrackingServerMaintenanceStatus() const { return m_trackingServerMaintenanceStatus; }
    inline void SetTrackingServerMaintenanceStatus(TrackingServerMaintenanceStatus value) { m_trackingServerMaintenanceStatusHasBeenSet = true; m_trackingServerMaintenanceStatus = value; }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerMaintenanceStatus(TrackingServerMaintenanceStatus value) { SetTrackingServerMaintenanceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the described MLflow Tracking Server is currently active.</p>
     */
    inline IsTrackingServerActive GetIsActive() const { return m_isActive; }
    inline void SetIsActive(IsTrackingServerActive value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline DescribeMlflowTrackingServerResult& WithIsActive(IsTrackingServerActive value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to connect to the MLflow user interface for the described tracking
     * server.</p>
     */
    inline const Aws::String& GetTrackingServerUrl() const { return m_trackingServerUrl; }
    template<typename TrackingServerUrlT = Aws::String>
    void SetTrackingServerUrl(TrackingServerUrlT&& value) { m_trackingServerUrlHasBeenSet = true; m_trackingServerUrl = std::forward<TrackingServerUrlT>(value); }
    template<typename TrackingServerUrlT = Aws::String>
    DescribeMlflowTrackingServerResult& WithTrackingServerUrl(TrackingServerUrlT&& value) { SetTrackingServerUrl(std::forward<TrackingServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week when weekly maintenance occurs on the described
     * tracking server.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value); }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    DescribeMlflowTrackingServerResult& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether automatic registration of new MLflow models to the SageMaker Model
     * Registry is enabled.</p>
     */
    inline bool GetAutomaticModelRegistration() const { return m_automaticModelRegistration; }
    inline void SetAutomaticModelRegistration(bool value) { m_automaticModelRegistrationHasBeenSet = true; m_automaticModelRegistration = value; }
    inline DescribeMlflowTrackingServerResult& WithAutomaticModelRegistration(bool value) { SetAutomaticModelRegistration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the described MLflow Tracking Server was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeMlflowTrackingServerResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribeMlflowTrackingServerResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the described MLflow Tracking Server was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeMlflowTrackingServerResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribeMlflowTrackingServerResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMlflowTrackingServerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;
    bool m_trackingServerArnHasBeenSet = false;

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::String m_artifactStoreUri;
    bool m_artifactStoreUriHasBeenSet = false;

    TrackingServerSize m_trackingServerSize{TrackingServerSize::NOT_SET};
    bool m_trackingServerSizeHasBeenSet = false;

    Aws::String m_mlflowVersion;
    bool m_mlflowVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    TrackingServerStatus m_trackingServerStatus{TrackingServerStatus::NOT_SET};
    bool m_trackingServerStatusHasBeenSet = false;

    TrackingServerMaintenanceStatus m_trackingServerMaintenanceStatus{TrackingServerMaintenanceStatus::NOT_SET};
    bool m_trackingServerMaintenanceStatusHasBeenSet = false;

    IsTrackingServerActive m_isActive{IsTrackingServerActive::NOT_SET};
    bool m_isActiveHasBeenSet = false;

    Aws::String m_trackingServerUrl;
    bool m_trackingServerUrlHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;

    bool m_automaticModelRegistration{false};
    bool m_automaticModelRegistrationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
