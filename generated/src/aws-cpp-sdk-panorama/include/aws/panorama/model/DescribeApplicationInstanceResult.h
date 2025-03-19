/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/ApplicationInstanceHealthStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/ApplicationInstanceStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/ReportedRuntimeContextState.h>
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
namespace Panorama
{
namespace Model
{
  class DescribeApplicationInstanceResult
  {
  public:
    AWS_PANORAMA_API DescribeApplicationInstanceResult() = default;
    AWS_PANORAMA_API DescribeApplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeApplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const { return m_applicationInstanceId; }
    template<typename ApplicationInstanceIdT = Aws::String>
    void SetApplicationInstanceId(ApplicationInstanceIdT&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::forward<ApplicationInstanceIdT>(value); }
    template<typename ApplicationInstanceIdT = Aws::String>
    DescribeApplicationInstanceResult& WithApplicationInstanceId(ApplicationInstanceIdT&& value) { SetApplicationInstanceId(std::forward<ApplicationInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline const Aws::String& GetApplicationInstanceIdToReplace() const { return m_applicationInstanceIdToReplace; }
    template<typename ApplicationInstanceIdToReplaceT = Aws::String>
    void SetApplicationInstanceIdToReplace(ApplicationInstanceIdToReplaceT&& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = std::forward<ApplicationInstanceIdToReplaceT>(value); }
    template<typename ApplicationInstanceIdToReplaceT = Aws::String>
    DescribeApplicationInstanceResult& WithApplicationInstanceIdToReplace(ApplicationInstanceIdToReplaceT&& value) { SetApplicationInstanceIdToReplace(std::forward<ApplicationInstanceIdToReplaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeApplicationInstanceResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the application instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeApplicationInstanceResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const { return m_defaultRuntimeContextDevice; }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    void SetDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::forward<DefaultRuntimeContextDeviceT>(value); }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    DescribeApplicationInstanceResult& WithDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { SetDefaultRuntimeContextDevice(std::forward<DefaultRuntimeContextDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's bane.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDeviceName() const { return m_defaultRuntimeContextDeviceName; }
    template<typename DefaultRuntimeContextDeviceNameT = Aws::String>
    void SetDefaultRuntimeContextDeviceName(DefaultRuntimeContextDeviceNameT&& value) { m_defaultRuntimeContextDeviceNameHasBeenSet = true; m_defaultRuntimeContextDeviceName = std::forward<DefaultRuntimeContextDeviceNameT>(value); }
    template<typename DefaultRuntimeContextDeviceNameT = Aws::String>
    DescribeApplicationInstanceResult& WithDefaultRuntimeContextDeviceName(DefaultRuntimeContextDeviceNameT&& value) { SetDefaultRuntimeContextDeviceName(std::forward<DefaultRuntimeContextDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeApplicationInstanceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's health status.</p>
     */
    inline ApplicationInstanceHealthStatus GetHealthStatus() const { return m_healthStatus; }
    inline void SetHealthStatus(ApplicationInstanceHealthStatus value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline DescribeApplicationInstanceResult& WithHealthStatus(ApplicationInstanceHealthStatus value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeApplicationInstanceResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeApplicationInstanceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's state.</p>
     */
    inline const Aws::Vector<ReportedRuntimeContextState>& GetRuntimeContextStates() const { return m_runtimeContextStates; }
    template<typename RuntimeContextStatesT = Aws::Vector<ReportedRuntimeContextState>>
    void SetRuntimeContextStates(RuntimeContextStatesT&& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates = std::forward<RuntimeContextStatesT>(value); }
    template<typename RuntimeContextStatesT = Aws::Vector<ReportedRuntimeContextState>>
    DescribeApplicationInstanceResult& WithRuntimeContextStates(RuntimeContextStatesT&& value) { SetRuntimeContextStates(std::forward<RuntimeContextStatesT>(value)); return *this;}
    template<typename RuntimeContextStatesT = ReportedRuntimeContextState>
    DescribeApplicationInstanceResult& AddRuntimeContextStates(RuntimeContextStatesT&& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates.emplace_back(std::forward<RuntimeContextStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The application instance's runtime role ARN.</p>
     */
    inline const Aws::String& GetRuntimeRoleArn() const { return m_runtimeRoleArn; }
    template<typename RuntimeRoleArnT = Aws::String>
    void SetRuntimeRoleArn(RuntimeRoleArnT&& value) { m_runtimeRoleArnHasBeenSet = true; m_runtimeRoleArn = std::forward<RuntimeRoleArnT>(value); }
    template<typename RuntimeRoleArnT = Aws::String>
    DescribeApplicationInstanceResult& WithRuntimeRoleArn(RuntimeRoleArnT&& value) { SetRuntimeRoleArn(std::forward<RuntimeRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's status.</p>
     */
    inline ApplicationInstanceStatus GetStatus() const { return m_status; }
    inline void SetStatus(ApplicationInstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeApplicationInstanceResult& WithStatus(ApplicationInstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's status description.</p>
     */
    inline const Aws::String& GetStatusDescription() const { return m_statusDescription; }
    template<typename StatusDescriptionT = Aws::String>
    void SetStatusDescription(StatusDescriptionT&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::forward<StatusDescriptionT>(value); }
    template<typename StatusDescriptionT = Aws::String>
    DescribeApplicationInstanceResult& WithStatusDescription(StatusDescriptionT&& value) { SetStatusDescription(std::forward<StatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeApplicationInstanceResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeApplicationInstanceResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

    Aws::String m_applicationInstanceIdToReplace;
    bool m_applicationInstanceIdToReplaceHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_defaultRuntimeContextDevice;
    bool m_defaultRuntimeContextDeviceHasBeenSet = false;

    Aws::String m_defaultRuntimeContextDeviceName;
    bool m_defaultRuntimeContextDeviceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationInstanceHealthStatus m_healthStatus{ApplicationInstanceHealthStatus::NOT_SET};
    bool m_healthStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ReportedRuntimeContextState> m_runtimeContextStates;
    bool m_runtimeContextStatesHasBeenSet = false;

    Aws::String m_runtimeRoleArn;
    bool m_runtimeRoleArnHasBeenSet = false;

    ApplicationInstanceStatus m_status{ApplicationInstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
