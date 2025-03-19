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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to create the Docker volume automatically if it does not already
     * exist.</p>
     */
    inline bool GetAutoprovision() const { return m_autoprovision; }
    inline bool AutoprovisionHasBeenSet() const { return m_autoprovisionHasBeenSet; }
    inline void SetAutoprovision(bool value) { m_autoprovisionHasBeenSet = true; m_autoprovision = value; }
    inline AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithAutoprovision(bool value) { SetAutoprovision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker volume driver to use.</p>
     */
    inline const Aws::String& GetDriver() const { return m_driver; }
    inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
    template<typename DriverT = Aws::String>
    void SetDriver(DriverT&& value) { m_driverHasBeenSet = true; m_driver = std::forward<DriverT>(value); }
    template<typename DriverT = Aws::String>
    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriver(DriverT&& value) { SetDriver(std::forward<DriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of Docker driver-specific options that are passed through.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDriverOpts() const { return m_driverOpts; }
    inline bool DriverOptsHasBeenSet() const { return m_driverOptsHasBeenSet; }
    template<typename DriverOptsT = Aws::Map<Aws::String, Aws::String>>
    void SetDriverOpts(DriverOptsT&& value) { m_driverOptsHasBeenSet = true; m_driverOpts = std::forward<DriverOptsT>(value); }
    template<typename DriverOptsT = Aws::Map<Aws::String, Aws::String>>
    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithDriverOpts(DriverOptsT&& value) { SetDriverOpts(std::forward<DriverOptsT>(value)); return *this;}
    template<typename DriverOptsKeyT = Aws::String, typename DriverOptsValueT = Aws::String>
    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddDriverOpts(DriverOptsKeyT&& key, DriverOptsValueT&& value) {
      m_driverOptsHasBeenSet = true; m_driverOpts.emplace(std::forward<DriverOptsKeyT>(key), std::forward<DriverOptsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Custom metadata to add to the Docker volume.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Map<Aws::String, Aws::String>>
    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsKeyT = Aws::String, typename LabelsValueT = Aws::String>
    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& AddLabels(LabelsKeyT&& key, LabelsValueT&& value) {
      m_labelsHasBeenSet = true; m_labels.emplace(std::forward<LabelsKeyT>(key), std::forward<LabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The scope for the Docker volume that determines its lifecycle. Docker volumes
     * that are scoped to a task are provisioned automatically when the task starts and
     * destroyed when the task stops. Docker volumes that are shared persist after the
     * task stops. Valid values are <code>shared</code> or <code>task</code>.</p>
     */
    inline const Aws::String& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Aws::String>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::String>
    AwsEcsTaskDefinitionVolumesDockerVolumeConfigurationDetails& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}
  private:

    bool m_autoprovision{false};
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
