/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/sagemaker/model/AppStatus.h>
#include <aws/sagemaker/model/FeatureStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
  class DescribeAppResult
  {
  public:
    AWS_SAGEMAKER_API DescribeAppResult() = default;
    AWS_SAGEMAKER_API DescribeAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    DescribeAppResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app.</p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline DescribeAppResult& WithAppType(AppType value) { SetAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const { return m_appName; }
    template<typename AppNameT = Aws::String>
    void SetAppName(AppNameT&& value) { m_appNameHasBeenSet = true; m_appName = std::forward<AppNameT>(value); }
    template<typename AppNameT = Aws::String>
    DescribeAppResult& WithAppName(AppNameT&& value) { SetAppName(std::forward<AppNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DescribeAppResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile name.</p>
     */
    inline const Aws::String& GetUserProfileName() const { return m_userProfileName; }
    template<typename UserProfileNameT = Aws::String>
    void SetUserProfileName(UserProfileNameT&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::forward<UserProfileNameT>(value); }
    template<typename UserProfileNameT = Aws::String>
    DescribeAppResult& WithUserProfileName(UserProfileNameT&& value) { SetUserProfileName(std::forward<UserProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    DescribeAppResult& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline AppStatus GetStatus() const { return m_status; }
    inline void SetStatus(AppStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAppResult& WithStatus(AppStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effective status of Trusted Identity Propagation (TIP) for this
     * application. When enabled, user identities from IAM Identity Center are being
     * propagated through the application to TIP enabled Amazon Web Services services.
     * When disabled, standard IAM role-based access is used. </p>
     */
    inline FeatureStatus GetEffectiveTrustedIdentityPropagationStatus() const { return m_effectiveTrustedIdentityPropagationStatus; }
    inline void SetEffectiveTrustedIdentityPropagationStatus(FeatureStatus value) { m_effectiveTrustedIdentityPropagationStatusHasBeenSet = true; m_effectiveTrustedIdentityPropagationStatus = value; }
    inline DescribeAppResult& WithEffectiveTrustedIdentityPropagationStatus(FeatureStatus value) { SetEffectiveTrustedIdentityPropagationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the application is launched in recovery mode. </p>
     */
    inline bool GetRecoveryMode() const { return m_recoveryMode; }
    inline void SetRecoveryMode(bool value) { m_recoveryModeHasBeenSet = true; m_recoveryMode = value; }
    inline DescribeAppResult& WithRecoveryMode(bool value) { SetRecoveryMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last health check.</p>
     */
    inline const Aws::Utils::DateTime& GetLastHealthCheckTimestamp() const { return m_lastHealthCheckTimestamp; }
    template<typename LastHealthCheckTimestampT = Aws::Utils::DateTime>
    void SetLastHealthCheckTimestamp(LastHealthCheckTimestampT&& value) { m_lastHealthCheckTimestampHasBeenSet = true; m_lastHealthCheckTimestamp = std::forward<LastHealthCheckTimestampT>(value); }
    template<typename LastHealthCheckTimestampT = Aws::Utils::DateTime>
    DescribeAppResult& WithLastHealthCheckTimestamp(LastHealthCheckTimestampT&& value) { SetLastHealthCheckTimestamp(std::forward<LastHealthCheckTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last user's activity.
     * <code>LastUserActivityTimestamp</code> is also updated when SageMaker AI
     * performs health checks without user activity. As a result, this value is set to
     * the same value as <code>LastHealthCheckTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUserActivityTimestamp() const { return m_lastUserActivityTimestamp; }
    template<typename LastUserActivityTimestampT = Aws::Utils::DateTime>
    void SetLastUserActivityTimestamp(LastUserActivityTimestampT&& value) { m_lastUserActivityTimestampHasBeenSet = true; m_lastUserActivityTimestamp = std::forward<LastUserActivityTimestampT>(value); }
    template<typename LastUserActivityTimestampT = Aws::Utils::DateTime>
    DescribeAppResult& WithLastUserActivityTimestamp(LastUserActivityTimestampT&& value) { SetLastUserActivityTimestamp(std::forward<LastUserActivityTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the application.</p>  <p>After an application has
     * been shut down for 24 hours, SageMaker AI deletes all metadata for the
     * application. To be considered an update and retain application metadata,
     * applications must be restarted within 24 hours after the previous application
     * has been shut down. After this time window, creation of an application is
     * considered a new application rather than an update of the previous
     * application.</p> 
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeAppResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeAppResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker AI
     * image created on the instance.</p>
     */
    inline const ResourceSpec& GetResourceSpec() const { return m_resourceSpec; }
    template<typename ResourceSpecT = ResourceSpec>
    void SetResourceSpec(ResourceSpecT&& value) { m_resourceSpecHasBeenSet = true; m_resourceSpec = std::forward<ResourceSpecT>(value); }
    template<typename ResourceSpecT = ResourceSpec>
    DescribeAppResult& WithResourceSpec(ResourceSpecT&& value) { SetResourceSpec(std::forward<ResourceSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration that runs before the default lifecycle
     * configuration</p>
     */
    inline const Aws::String& GetBuiltInLifecycleConfigArn() const { return m_builtInLifecycleConfigArn; }
    template<typename BuiltInLifecycleConfigArnT = Aws::String>
    void SetBuiltInLifecycleConfigArn(BuiltInLifecycleConfigArnT&& value) { m_builtInLifecycleConfigArnHasBeenSet = true; m_builtInLifecycleConfigArn = std::forward<BuiltInLifecycleConfigArnT>(value); }
    template<typename BuiltInLifecycleConfigArnT = Aws::String>
    DescribeAppResult& WithBuiltInLifecycleConfigArn(BuiltInLifecycleConfigArnT&& value) { SetBuiltInLifecycleConfigArn(std::forward<BuiltInLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    AppType m_appType{AppType::NOT_SET};
    bool m_appTypeHasBeenSet = false;

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    AppStatus m_status{AppStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    FeatureStatus m_effectiveTrustedIdentityPropagationStatus{FeatureStatus::NOT_SET};
    bool m_effectiveTrustedIdentityPropagationStatusHasBeenSet = false;

    bool m_recoveryMode{false};
    bool m_recoveryModeHasBeenSet = false;

    Aws::Utils::DateTime m_lastHealthCheckTimestamp{};
    bool m_lastHealthCheckTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUserActivityTimestamp{};
    bool m_lastUserActivityTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    ResourceSpec m_resourceSpec;
    bool m_resourceSpecHasBeenSet = false;

    Aws::String m_builtInLifecycleConfigArn;
    bool m_builtInLifecycleConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
