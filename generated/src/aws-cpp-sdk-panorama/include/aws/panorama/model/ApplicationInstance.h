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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{

  /**
   * <p>An application instance on a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ApplicationInstance">AWS
   * API Reference</a></p>
   */
  class ApplicationInstance
  {
  public:
    AWS_PANORAMA_API ApplicationInstance() = default;
    AWS_PANORAMA_API ApplicationInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ApplicationInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const { return m_applicationInstanceId; }
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }
    template<typename ApplicationInstanceIdT = Aws::String>
    void SetApplicationInstanceId(ApplicationInstanceIdT&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::forward<ApplicationInstanceIdT>(value); }
    template<typename ApplicationInstanceIdT = Aws::String>
    ApplicationInstance& WithApplicationInstanceId(ApplicationInstanceIdT&& value) { SetApplicationInstanceId(std::forward<ApplicationInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ApplicationInstance& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the application instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    ApplicationInstance& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const { return m_defaultRuntimeContextDevice; }
    inline bool DefaultRuntimeContextDeviceHasBeenSet() const { return m_defaultRuntimeContextDeviceHasBeenSet; }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    void SetDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::forward<DefaultRuntimeContextDeviceT>(value); }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    ApplicationInstance& WithDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { SetDefaultRuntimeContextDevice(std::forward<DefaultRuntimeContextDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDeviceName() const { return m_defaultRuntimeContextDeviceName; }
    inline bool DefaultRuntimeContextDeviceNameHasBeenSet() const { return m_defaultRuntimeContextDeviceNameHasBeenSet; }
    template<typename DefaultRuntimeContextDeviceNameT = Aws::String>
    void SetDefaultRuntimeContextDeviceName(DefaultRuntimeContextDeviceNameT&& value) { m_defaultRuntimeContextDeviceNameHasBeenSet = true; m_defaultRuntimeContextDeviceName = std::forward<DefaultRuntimeContextDeviceNameT>(value); }
    template<typename DefaultRuntimeContextDeviceNameT = Aws::String>
    ApplicationInstance& WithDefaultRuntimeContextDeviceName(DefaultRuntimeContextDeviceNameT&& value) { SetDefaultRuntimeContextDeviceName(std::forward<DefaultRuntimeContextDeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ApplicationInstance& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's health status.</p>
     */
    inline ApplicationInstanceHealthStatus GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(ApplicationInstanceHealthStatus value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline ApplicationInstance& WithHealthStatus(ApplicationInstanceHealthStatus value) { SetHealthStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ApplicationInstance& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application's state.</p>
     */
    inline const Aws::Vector<ReportedRuntimeContextState>& GetRuntimeContextStates() const { return m_runtimeContextStates; }
    inline bool RuntimeContextStatesHasBeenSet() const { return m_runtimeContextStatesHasBeenSet; }
    template<typename RuntimeContextStatesT = Aws::Vector<ReportedRuntimeContextState>>
    void SetRuntimeContextStates(RuntimeContextStatesT&& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates = std::forward<RuntimeContextStatesT>(value); }
    template<typename RuntimeContextStatesT = Aws::Vector<ReportedRuntimeContextState>>
    ApplicationInstance& WithRuntimeContextStates(RuntimeContextStatesT&& value) { SetRuntimeContextStates(std::forward<RuntimeContextStatesT>(value)); return *this;}
    template<typename RuntimeContextStatesT = ReportedRuntimeContextState>
    ApplicationInstance& AddRuntimeContextStates(RuntimeContextStatesT&& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates.emplace_back(std::forward<RuntimeContextStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The application instance's status.</p>
     */
    inline ApplicationInstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationInstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ApplicationInstance& WithStatus(ApplicationInstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's status description.</p>
     */
    inline const Aws::String& GetStatusDescription() const { return m_statusDescription; }
    inline bool StatusDescriptionHasBeenSet() const { return m_statusDescriptionHasBeenSet; }
    template<typename StatusDescriptionT = Aws::String>
    void SetStatusDescription(StatusDescriptionT&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::forward<StatusDescriptionT>(value); }
    template<typename StatusDescriptionT = Aws::String>
    ApplicationInstance& WithStatusDescription(StatusDescriptionT&& value) { SetStatusDescription(std::forward<StatusDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ApplicationInstance& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ApplicationInstance& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

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

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ReportedRuntimeContextState> m_runtimeContextStates;
    bool m_runtimeContextStatesHasBeenSet = false;

    ApplicationInstanceStatus m_status{ApplicationInstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
