/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails.h>
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
   * <p>&gt;Linux-specific modifications that are applied to the container, such as
   * Linux kernel capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>& GetDevices() const { return m_devices; }
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }
    template<typename DevicesT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>>
    void SetDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices = std::forward<DevicesT>(value); }
    template<typename DevicesT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithDevices(DevicesT&& value) { SetDevices(std::forward<DevicesT>(value)); return *this;}
    template<typename DevicesT = AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AddDevices(DevicesT&& value) { m_devicesHasBeenSet = true; m_devices.emplace_back(std::forward<DevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to run an <code>init</code> process inside the container that
     * forwards signals and reaps processes. </p>
     */
    inline bool GetInitProcessEnabled() const { return m_initProcessEnabled; }
    inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of swap memory (in MiB) that a container can use.</p>
     */
    inline int GetMaxSwap() const { return m_maxSwap; }
    inline bool MaxSwapHasBeenSet() const { return m_maxSwapHasBeenSet; }
    inline void SetMaxSwap(int value) { m_maxSwapHasBeenSet = true; m_maxSwap = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithMaxSwap(int value) { SetMaxSwap(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the size (in MiB) of the <b>/dev/shm</b> volume.</p>
     */
    inline int GetSharedMemorySize() const { return m_sharedMemorySize; }
    inline bool SharedMemorySizeHasBeenSet() const { return m_sharedMemorySizeHasBeenSet; }
    inline void SetSharedMemorySize(int value) { m_sharedMemorySizeHasBeenSet = true; m_sharedMemorySize = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithSharedMemorySize(int value) { SetSharedMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the container's memory swappiness behavior. Determines how
     * aggressively pages are swapped. The higher the value, the more aggressive the
     * swappiness. The default is 60.</p>
     */
    inline int GetSwappiness() const { return m_swappiness; }
    inline bool SwappinessHasBeenSet() const { return m_swappinessHasBeenSet; }
    inline void SetSwappiness(int value) { m_swappinessHasBeenSet = true; m_swappiness = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithSwappiness(int value) { SetSwappiness(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>& GetTmpfs() const { return m_tmpfs; }
    inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }
    template<typename TmpfsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>>
    void SetTmpfs(TmpfsT&& value) { m_tmpfsHasBeenSet = true; m_tmpfs = std::forward<TmpfsT>(value); }
    template<typename TmpfsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithTmpfs(TmpfsT&& value) { SetTmpfs(std::forward<TmpfsT>(value)); return *this;}
    template<typename TmpfsT = AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AddTmpfs(TmpfsT&& value) { m_tmpfsHasBeenSet = true; m_tmpfs.emplace_back(std::forward<TmpfsT>(value)); return *this; }
    ///@}
  private:

    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails> m_devices;
    bool m_devicesHasBeenSet = false;

    bool m_initProcessEnabled{false};
    bool m_initProcessEnabledHasBeenSet = false;

    int m_maxSwap{0};
    bool m_maxSwapHasBeenSet = false;

    int m_sharedMemorySize{0};
    bool m_sharedMemorySizeHasBeenSet = false;

    int m_swappiness{0};
    bool m_swappinessHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails> m_tmpfs;
    bool m_tmpfsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
