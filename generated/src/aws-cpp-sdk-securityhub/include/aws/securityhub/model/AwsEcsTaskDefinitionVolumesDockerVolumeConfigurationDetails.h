/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a Docker volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to create the Docker volume automatically if it does not already
     * exist.</p>
     */
    inline bool GetAutoprovision() const{ return m_autoprovision; }
    inline bool AutoprovisionHasBeenSet() const { return m_autoprovisionHasBeenSet; }
    inline void SetAutoprovision(bool value) { m_autoprovisionHasBeenSet = true; m_autoprovision = value; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithAutoprovision(bool value) { SetAutoprovision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker volume driver to use.</p>
     */
    inline const Aws::String& GetDriver() const{ return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    inline void SetDriver(const Aws::String& value) { m_driverHasBeenSet = true; m_driver = value; }
    inline void SetDriver(Aws::String&& value) { m_driverHasBeenSet = true; m_driver = std::move(value); }
    inline void SetDriver(const char* value) { m_driverHasBeenSet = true; m_driver.assign(value); }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriver(const Aws::String& value) { SetDriver(value); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriver(Aws::String&& value) { SetDriver(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriver(const char* value) { SetDriver(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of Docker driver-specific options that are passed through.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDriverOpts() const{ return m_driverOpts; }
    inline bool DriverOptsHasBeenSet() const { return m_driverOptsHasBeenSet; }
    inline void SetDriverOpts(const Aws::Map<Aws::String, Aws::String>& value) { m_driverOptsHasBeenSet = true; m_driverOpts = value; }
    inline void SetDriverOpts(Aws::Map<Aws::String, Aws::String>&& value) { m_driverOptsHasBeenSet = true; m_driverOpts = std::move(value); }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriverOpts(const Aws::Map<Aws::String, Aws::String>& value) { SetDriverOpts(value); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriverOpts(Aws::Map<Aws::String, Aws::String>&& value) { SetDriverOpts(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(const Aws::String& key, const Aws::String& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, value); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(Aws::String&& key, const Aws::String& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::move(key), value); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(const Aws::String& key, Aws::String&& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(Aws::String&& key, Aws::String&& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(const char* key, Aws::String&& value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(Aws::String&& key, const char* value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::move(key), value); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(const char* key, const char* value) { m_driverOptsHasBeenSet = true; m_driverOpts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Custom metadata to add to the Docker volume.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetLabels(value); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetLabels(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(const Aws::String& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(Aws::String&& key, const Aws::String& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(const Aws::String& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(Aws::String&& key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(const char* key, Aws::String&& value) { m_labelsHasBeenSet = true; m_labels.emplace(key, std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(Aws::String&& key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(std::move(key), value); return *this; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(const char* key, const char* value) { m_labelsHasBeenSet = true; m_labels.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scope for the Docker volume that determines its lifecycle. Docker volumes
     * that are scoped to a task are provisioned automatically when the task starts and
     * destroyed when the task stops. Docker volumes that are shared persist after the
     * task stops. Valid values are <code>shared</code> or <code>task</code>.</p>
     */
    inline const Aws::String& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline void SetScope(const char* value) { m_scopeHasBeenSet = true; m_scope.assign(value); }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithScope(const Aws::String& value) { SetScope(value); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithScope(Aws::String&& value) { SetScope(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithScope(const char* value) { SetScope(value); return *this;}
    ///@}
  private:

    bool m_autoprovision;
    bool m_autoprovisionHasBeenSet = false;

    Aws::String m_driver;
    bool m_driverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_driverOpts;
    bool m_driverOptsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_labels;
    bool m_labelsHasBeenSet = false;

    Aws::String m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
