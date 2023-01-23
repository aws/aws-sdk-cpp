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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline void SetCapabilities(const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline void SetCapabilities(AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithCapabilities(const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithCapabilities(AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails&& value) { SetCapabilities(std::move(value)); return *this;}


    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>& GetDevices() const{ return m_devices; }

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline bool DevicesHasBeenSet() const { return m_devicesHasBeenSet; }

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline void SetDevices(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>& value) { m_devicesHasBeenSet = true; m_devices = value; }

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline void SetDevices(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>&& value) { m_devicesHasBeenSet = true; m_devices = std::move(value); }

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithDevices(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>& value) { SetDevices(value); return *this;}

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithDevices(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AddDevices(const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& value) { m_devicesHasBeenSet = true; m_devices.push_back(value); return *this; }

    /**
     * <p>The host devices to expose to the container.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AddDevices(AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails&& value) { m_devicesHasBeenSet = true; m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether to run an <code>init</code> process inside the container that
     * forwards signals and reaps processes. </p>
     */
    inline bool GetInitProcessEnabled() const{ return m_initProcessEnabled; }

    /**
     * <p>Whether to run an <code>init</code> process inside the container that
     * forwards signals and reaps processes. </p>
     */
    inline bool InitProcessEnabledHasBeenSet() const { return m_initProcessEnabledHasBeenSet; }

    /**
     * <p>Whether to run an <code>init</code> process inside the container that
     * forwards signals and reaps processes. </p>
     */
    inline void SetInitProcessEnabled(bool value) { m_initProcessEnabledHasBeenSet = true; m_initProcessEnabled = value; }

    /**
     * <p>Whether to run an <code>init</code> process inside the container that
     * forwards signals and reaps processes. </p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithInitProcessEnabled(bool value) { SetInitProcessEnabled(value); return *this;}


    /**
     * <p>The total amount of swap memory (in MiB) that a container can use.</p>
     */
    inline int GetMaxSwap() const{ return m_maxSwap; }

    /**
     * <p>The total amount of swap memory (in MiB) that a container can use.</p>
     */
    inline bool MaxSwapHasBeenSet() const { return m_maxSwapHasBeenSet; }

    /**
     * <p>The total amount of swap memory (in MiB) that a container can use.</p>
     */
    inline void SetMaxSwap(int value) { m_maxSwapHasBeenSet = true; m_maxSwap = value; }

    /**
     * <p>The total amount of swap memory (in MiB) that a container can use.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithMaxSwap(int value) { SetMaxSwap(value); return *this;}


    /**
     * <p>The value for the size (in MiB) of the <b>/dev/shm</b> volume.</p>
     */
    inline int GetSharedMemorySize() const{ return m_sharedMemorySize; }

    /**
     * <p>The value for the size (in MiB) of the <b>/dev/shm</b> volume.</p>
     */
    inline bool SharedMemorySizeHasBeenSet() const { return m_sharedMemorySizeHasBeenSet; }

    /**
     * <p>The value for the size (in MiB) of the <b>/dev/shm</b> volume.</p>
     */
    inline void SetSharedMemorySize(int value) { m_sharedMemorySizeHasBeenSet = true; m_sharedMemorySize = value; }

    /**
     * <p>The value for the size (in MiB) of the <b>/dev/shm</b> volume.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithSharedMemorySize(int value) { SetSharedMemorySize(value); return *this;}


    /**
     * <p>Configures the container's memory swappiness behavior. Determines how
     * aggressively pages are swapped. The higher the value, the more aggressive the
     * swappiness. The default is 60.</p>
     */
    inline int GetSwappiness() const{ return m_swappiness; }

    /**
     * <p>Configures the container's memory swappiness behavior. Determines how
     * aggressively pages are swapped. The higher the value, the more aggressive the
     * swappiness. The default is 60.</p>
     */
    inline bool SwappinessHasBeenSet() const { return m_swappinessHasBeenSet; }

    /**
     * <p>Configures the container's memory swappiness behavior. Determines how
     * aggressively pages are swapped. The higher the value, the more aggressive the
     * swappiness. The default is 60.</p>
     */
    inline void SetSwappiness(int value) { m_swappinessHasBeenSet = true; m_swappiness = value; }

    /**
     * <p>Configures the container's memory swappiness behavior. Determines how
     * aggressively pages are swapped. The higher the value, the more aggressive the
     * swappiness. The default is 60.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithSwappiness(int value) { SetSwappiness(value); return *this;}


    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>& GetTmpfs() const{ return m_tmpfs; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline bool TmpfsHasBeenSet() const { return m_tmpfsHasBeenSet; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline void SetTmpfs(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>& value) { m_tmpfsHasBeenSet = true; m_tmpfs = value; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline void SetTmpfs(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>&& value) { m_tmpfsHasBeenSet = true; m_tmpfs = std::move(value); }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithTmpfs(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>& value) { SetTmpfs(value); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& WithTmpfs(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails>&& value) { SetTmpfs(std::move(value)); return *this;}

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AddTmpfs(const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(value); return *this; }

    /**
     * <p>The container path, mount options, and size (in MiB) of the tmpfs mount.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& AddTmpfs(AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails&& value) { m_tmpfsHasBeenSet = true; m_tmpfs.push_back(std::move(value)); return *this; }

  private:

    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails> m_devices;
    bool m_devicesHasBeenSet = false;

    bool m_initProcessEnabled;
    bool m_initProcessEnabledHasBeenSet = false;

    int m_maxSwap;
    bool m_maxSwapHasBeenSet = false;

    int m_sharedMemorySize;
    bool m_sharedMemorySizeHasBeenSet = false;

    int m_swappiness;
    bool m_swappinessHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails> m_tmpfs;
    bool m_tmpfsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
