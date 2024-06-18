/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrackingServerSize.h>
#include <aws/sagemaker/model/TrackingServerStatus.h>
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
    AWS_SAGEMAKER_API DescribeMlflowTrackingServerResult();
    AWS_SAGEMAKER_API DescribeMlflowTrackingServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeMlflowTrackingServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the described tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const{ return m_trackingServerArn; }
    inline void SetTrackingServerArn(const Aws::String& value) { m_trackingServerArn = value; }
    inline void SetTrackingServerArn(Aws::String&& value) { m_trackingServerArn = std::move(value); }
    inline void SetTrackingServerArn(const char* value) { m_trackingServerArn.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerArn(const Aws::String& value) { SetTrackingServerArn(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerArn(Aws::String&& value) { SetTrackingServerArn(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerArn(const char* value) { SetTrackingServerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the described tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerName() const{ return m_trackingServerName; }
    inline void SetTrackingServerName(const Aws::String& value) { m_trackingServerName = value; }
    inline void SetTrackingServerName(Aws::String&& value) { m_trackingServerName = std::move(value); }
    inline void SetTrackingServerName(const char* value) { m_trackingServerName.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerName(const Aws::String& value) { SetTrackingServerName(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerName(Aws::String&& value) { SetTrackingServerName(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerName(const char* value) { SetTrackingServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the general purpose bucket used as the MLflow Tracking Server
     * artifact store.</p>
     */
    inline const Aws::String& GetArtifactStoreUri() const{ return m_artifactStoreUri; }
    inline void SetArtifactStoreUri(const Aws::String& value) { m_artifactStoreUri = value; }
    inline void SetArtifactStoreUri(Aws::String&& value) { m_artifactStoreUri = std::move(value); }
    inline void SetArtifactStoreUri(const char* value) { m_artifactStoreUri.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithArtifactStoreUri(const Aws::String& value) { SetArtifactStoreUri(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithArtifactStoreUri(Aws::String&& value) { SetArtifactStoreUri(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithArtifactStoreUri(const char* value) { SetArtifactStoreUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the described tracking server.</p>
     */
    inline const TrackingServerSize& GetTrackingServerSize() const{ return m_trackingServerSize; }
    inline void SetTrackingServerSize(const TrackingServerSize& value) { m_trackingServerSize = value; }
    inline void SetTrackingServerSize(TrackingServerSize&& value) { m_trackingServerSize = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerSize(const TrackingServerSize& value) { SetTrackingServerSize(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerSize(TrackingServerSize&& value) { SetTrackingServerSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MLflow version used for the described tracking server.</p>
     */
    inline const Aws::String& GetMlflowVersion() const{ return m_mlflowVersion; }
    inline void SetMlflowVersion(const Aws::String& value) { m_mlflowVersion = value; }
    inline void SetMlflowVersion(Aws::String&& value) { m_mlflowVersion = std::move(value); }
    inline void SetMlflowVersion(const char* value) { m_mlflowVersion.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithMlflowVersion(const Aws::String& value) { SetMlflowVersion(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithMlflowVersion(Aws::String&& value) { SetMlflowVersion(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithMlflowVersion(const char* value) { SetMlflowVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role in your account that the
     * described MLflow Tracking Server uses to access the artifact store in Amazon
     * S3.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current creation status of the described MLflow Tracking Server.</p>
     */
    inline const TrackingServerStatus& GetTrackingServerStatus() const{ return m_trackingServerStatus; }
    inline void SetTrackingServerStatus(const TrackingServerStatus& value) { m_trackingServerStatus = value; }
    inline void SetTrackingServerStatus(TrackingServerStatus&& value) { m_trackingServerStatus = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerStatus(const TrackingServerStatus& value) { SetTrackingServerStatus(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerStatus(TrackingServerStatus&& value) { SetTrackingServerStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the described MLflow Tracking Server is currently active.</p>
     */
    inline const IsTrackingServerActive& GetIsActive() const{ return m_isActive; }
    inline void SetIsActive(const IsTrackingServerActive& value) { m_isActive = value; }
    inline void SetIsActive(IsTrackingServerActive&& value) { m_isActive = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithIsActive(const IsTrackingServerActive& value) { SetIsActive(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithIsActive(IsTrackingServerActive&& value) { SetIsActive(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to connect to the MLflow user interface for the described tracking
     * server.</p>
     */
    inline const Aws::String& GetTrackingServerUrl() const{ return m_trackingServerUrl; }
    inline void SetTrackingServerUrl(const Aws::String& value) { m_trackingServerUrl = value; }
    inline void SetTrackingServerUrl(Aws::String&& value) { m_trackingServerUrl = std::move(value); }
    inline void SetTrackingServerUrl(const char* value) { m_trackingServerUrl.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithTrackingServerUrl(const Aws::String& value) { SetTrackingServerUrl(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerUrl(Aws::String&& value) { SetTrackingServerUrl(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithTrackingServerUrl(const char* value) { SetTrackingServerUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week when weekly maintenance occurs on the described
     * tracking server.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStart = value; }
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStart = std::move(value); }
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStart.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether automatic registration of new MLflow models to the SageMaker Model
     * Registry is enabled.</p>
     */
    inline bool GetAutomaticModelRegistration() const{ return m_automaticModelRegistration; }
    inline void SetAutomaticModelRegistration(bool value) { m_automaticModelRegistration = value; }
    inline DescribeMlflowTrackingServerResult& WithAutomaticModelRegistration(bool value) { SetAutomaticModelRegistration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the described MLflow Tracking Server was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the described MLflow Tracking Server was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeMlflowTrackingServerResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMlflowTrackingServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMlflowTrackingServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMlflowTrackingServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;

    Aws::String m_trackingServerName;

    Aws::String m_artifactStoreUri;

    TrackingServerSize m_trackingServerSize;

    Aws::String m_mlflowVersion;

    Aws::String m_roleArn;

    TrackingServerStatus m_trackingServerStatus;

    IsTrackingServerActive m_isActive;

    Aws::String m_trackingServerUrl;

    Aws::String m_weeklyMaintenanceWindowStart;

    bool m_automaticModelRegistration;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
