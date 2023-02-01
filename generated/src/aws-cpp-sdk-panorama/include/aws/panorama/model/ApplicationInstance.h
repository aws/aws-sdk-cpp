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
    AWS_PANORAMA_API ApplicationInstance();
    AWS_PANORAMA_API ApplicationInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ApplicationInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = value; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::move(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId.assign(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline ApplicationInstance& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline ApplicationInstance& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline ApplicationInstance& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}


    /**
     * <p>The application instance's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The application instance's ARN.</p>
     */
    inline ApplicationInstance& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The application instance's ARN.</p>
     */
    inline ApplicationInstance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The application instance's ARN.</p>
     */
    inline ApplicationInstance& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the application instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>When the application instance was created.</p>
     */
    inline ApplicationInstance& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the application instance was created.</p>
     */
    inline ApplicationInstance& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const{ return m_defaultRuntimeContextDevice; }

    /**
     * <p>The device's ID.</p>
     */
    inline bool DefaultRuntimeContextDeviceHasBeenSet() const { return m_defaultRuntimeContextDeviceHasBeenSet; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const Aws::String& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = value; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(Aws::String&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::move(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const char* value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice.assign(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline ApplicationInstance& WithDefaultRuntimeContextDevice(const Aws::String& value) { SetDefaultRuntimeContextDevice(value); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline ApplicationInstance& WithDefaultRuntimeContextDevice(Aws::String&& value) { SetDefaultRuntimeContextDevice(std::move(value)); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline ApplicationInstance& WithDefaultRuntimeContextDevice(const char* value) { SetDefaultRuntimeContextDevice(value); return *this;}


    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDeviceName() const{ return m_defaultRuntimeContextDeviceName; }

    /**
     * <p>The device's name.</p>
     */
    inline bool DefaultRuntimeContextDeviceNameHasBeenSet() const { return m_defaultRuntimeContextDeviceNameHasBeenSet; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetDefaultRuntimeContextDeviceName(const Aws::String& value) { m_defaultRuntimeContextDeviceNameHasBeenSet = true; m_defaultRuntimeContextDeviceName = value; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetDefaultRuntimeContextDeviceName(Aws::String&& value) { m_defaultRuntimeContextDeviceNameHasBeenSet = true; m_defaultRuntimeContextDeviceName = std::move(value); }

    /**
     * <p>The device's name.</p>
     */
    inline void SetDefaultRuntimeContextDeviceName(const char* value) { m_defaultRuntimeContextDeviceNameHasBeenSet = true; m_defaultRuntimeContextDeviceName.assign(value); }

    /**
     * <p>The device's name.</p>
     */
    inline ApplicationInstance& WithDefaultRuntimeContextDeviceName(const Aws::String& value) { SetDefaultRuntimeContextDeviceName(value); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline ApplicationInstance& WithDefaultRuntimeContextDeviceName(Aws::String&& value) { SetDefaultRuntimeContextDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline ApplicationInstance& WithDefaultRuntimeContextDeviceName(const char* value) { SetDefaultRuntimeContextDeviceName(value); return *this;}


    /**
     * <p>The application instance's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The application instance's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The application instance's description.</p>
     */
    inline ApplicationInstance& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The application instance's description.</p>
     */
    inline ApplicationInstance& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The application instance's description.</p>
     */
    inline ApplicationInstance& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The application instance's health status.</p>
     */
    inline const ApplicationInstanceHealthStatus& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>The application instance's health status.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>The application instance's health status.</p>
     */
    inline void SetHealthStatus(const ApplicationInstanceHealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>The application instance's health status.</p>
     */
    inline void SetHealthStatus(ApplicationInstanceHealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>The application instance's health status.</p>
     */
    inline ApplicationInstance& WithHealthStatus(const ApplicationInstanceHealthStatus& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>The application instance's health status.</p>
     */
    inline ApplicationInstance& WithHealthStatus(ApplicationInstanceHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}


    /**
     * <p>The application instance's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The application instance's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The application instance's name.</p>
     */
    inline ApplicationInstance& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The application instance's name.</p>
     */
    inline ApplicationInstance& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The application instance's name.</p>
     */
    inline ApplicationInstance& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The application's state.</p>
     */
    inline const Aws::Vector<ReportedRuntimeContextState>& GetRuntimeContextStates() const{ return m_runtimeContextStates; }

    /**
     * <p>The application's state.</p>
     */
    inline bool RuntimeContextStatesHasBeenSet() const { return m_runtimeContextStatesHasBeenSet; }

    /**
     * <p>The application's state.</p>
     */
    inline void SetRuntimeContextStates(const Aws::Vector<ReportedRuntimeContextState>& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates = value; }

    /**
     * <p>The application's state.</p>
     */
    inline void SetRuntimeContextStates(Aws::Vector<ReportedRuntimeContextState>&& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates = std::move(value); }

    /**
     * <p>The application's state.</p>
     */
    inline ApplicationInstance& WithRuntimeContextStates(const Aws::Vector<ReportedRuntimeContextState>& value) { SetRuntimeContextStates(value); return *this;}

    /**
     * <p>The application's state.</p>
     */
    inline ApplicationInstance& WithRuntimeContextStates(Aws::Vector<ReportedRuntimeContextState>&& value) { SetRuntimeContextStates(std::move(value)); return *this;}

    /**
     * <p>The application's state.</p>
     */
    inline ApplicationInstance& AddRuntimeContextStates(const ReportedRuntimeContextState& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates.push_back(value); return *this; }

    /**
     * <p>The application's state.</p>
     */
    inline ApplicationInstance& AddRuntimeContextStates(ReportedRuntimeContextState&& value) { m_runtimeContextStatesHasBeenSet = true; m_runtimeContextStates.push_back(std::move(value)); return *this; }


    /**
     * <p>The application instance's status.</p>
     */
    inline const ApplicationInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The application instance's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The application instance's status.</p>
     */
    inline void SetStatus(const ApplicationInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The application instance's status.</p>
     */
    inline void SetStatus(ApplicationInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The application instance's status.</p>
     */
    inline ApplicationInstance& WithStatus(const ApplicationInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The application instance's status.</p>
     */
    inline ApplicationInstance& WithStatus(ApplicationInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The application instance's status description.</p>
     */
    inline const Aws::String& GetStatusDescription() const{ return m_statusDescription; }

    /**
     * <p>The application instance's status description.</p>
     */
    inline bool StatusDescriptionHasBeenSet() const { return m_statusDescriptionHasBeenSet; }

    /**
     * <p>The application instance's status description.</p>
     */
    inline void SetStatusDescription(const Aws::String& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = value; }

    /**
     * <p>The application instance's status description.</p>
     */
    inline void SetStatusDescription(Aws::String&& value) { m_statusDescriptionHasBeenSet = true; m_statusDescription = std::move(value); }

    /**
     * <p>The application instance's status description.</p>
     */
    inline void SetStatusDescription(const char* value) { m_statusDescriptionHasBeenSet = true; m_statusDescription.assign(value); }

    /**
     * <p>The application instance's status description.</p>
     */
    inline ApplicationInstance& WithStatusDescription(const Aws::String& value) { SetStatusDescription(value); return *this;}

    /**
     * <p>The application instance's status description.</p>
     */
    inline ApplicationInstance& WithStatusDescription(Aws::String&& value) { SetStatusDescription(std::move(value)); return *this;}

    /**
     * <p>The application instance's status description.</p>
     */
    inline ApplicationInstance& WithStatusDescription(const char* value) { SetStatusDescription(value); return *this;}


    /**
     * <p>The application instance's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The application instance's tags.</p>
     */
    inline ApplicationInstance& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_defaultRuntimeContextDevice;
    bool m_defaultRuntimeContextDeviceHasBeenSet = false;

    Aws::String m_defaultRuntimeContextDeviceName;
    bool m_defaultRuntimeContextDeviceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationInstanceHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ReportedRuntimeContextState> m_runtimeContextStates;
    bool m_runtimeContextStatesHasBeenSet = false;

    ApplicationInstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDescription;
    bool m_statusDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
