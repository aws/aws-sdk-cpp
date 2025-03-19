/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The Linux capabilities for the container that are added to or dropped from
   * the default configuration provided by Docker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Linux capabilities for the container that are added to the default
     * configuration provided by Docker. Valid values are as follows:</p> <p>Valid
     * values: <code>"ALL"</code> | <code>"AUDIT_CONTROL"</code> |<code>
     * "AUDIT_WRITE"</code> | <code>"BLOCK_SUSPEND"</code> | <code>"CHOWN"</code> |
     * <code>"DAC_OVERRIDE"</code> | <code>"DAC_READ_SEARCH"</code> |
     * <code>"FOWNER"</code> | <code>"FSETID"</code> | <code>"IPC_LOCK"</code> |
     * <code>"IPC_OWNER"</code> | <code>"KILL"</code> | <code>"LEASE"</code> |
     * <code>"LINUX_IMMUTABLE"</code> | <code>"MAC_ADMIN"</code> |<code>
     * "MAC_OVERRIDE"</code> | <code>"MKNOD"</code> | <code>"NET_ADMIN"</code> |
     * <code>"NET_BIND_SERVICE"</code> | <code>"NET_BROADCAST"</code> |
     * <code>"NET_RAW"</code> | <code>"SETFCAP"</code> | <code>"SETGID"</code> |
     * <code>"SETPCAP"</code> | <code>"SETUID"</code> | <code>"SYS_ADMIN"</code> |
     * <code>"SYS_BOOT"</code> | <code>"SYS_CHROOT"</code> | <code>"SYS_MODULE"</code>
     * | <code>"SYS_NICE"</code> | <code>"SYS_PACCT"</code> | <code>"SYS_PTRACE"</code>
     * | <code>"SYS_RAWIO"</code> | <code>"SYS_RESOURCE"</code> |
     * <code>"SYS_TIME"</code> | <code>"SYS_TTY_CONFIG"</code> | <code>"SYSLOG"</code>
     * | <code>"WAKE_ALARM"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAdd() const { return m_add; }
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
    template<typename AddT = Aws::Vector<Aws::String>>
    void SetAdd(AddT&& value) { m_addHasBeenSet = true; m_add = std::forward<AddT>(value); }
    template<typename AddT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& WithAdd(AddT&& value) { SetAdd(std::forward<AddT>(value)); return *this;}
    template<typename AddT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddAdd(AddT&& value) { m_addHasBeenSet = true; m_add.emplace_back(std::forward<AddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Linux capabilities for the container that are dropped from the default
     * configuration provided by Docker.</p> <p>Valid values: <code>"ALL"</code> |
     * <code>"AUDIT_CONTROL"</code> |<code> "AUDIT_WRITE"</code> |
     * <code>"BLOCK_SUSPEND"</code> | <code>"CHOWN"</code> |
     * <code>"DAC_OVERRIDE"</code> | <code>"DAC_READ_SEARCH"</code> |
     * <code>"FOWNER"</code> | <code>"FSETID"</code> | <code>"IPC_LOCK"</code> |
     * <code>"IPC_OWNER"</code> | <code>"KILL"</code> | <code>"LEASE"</code> |
     * <code>"LINUX_IMMUTABLE"</code> | <code>"MAC_ADMIN"</code> |<code>
     * "MAC_OVERRIDE"</code> | <code>"MKNOD"</code> | <code>"NET_ADMIN"</code> |
     * <code>"NET_BIND_SERVICE"</code> | <code>"NET_BROADCAST"</code> |
     * <code>"NET_RAW"</code> | <code>"SETFCAP"</code> | <code>"SETGID"</code> |
     * <code>"SETPCAP"</code> | <code>"SETUID"</code> | <code>"SYS_ADMIN"</code> |
     * <code>"SYS_BOOT"</code> | <code>"SYS_CHROOT"</code> | <code>"SYS_MODULE"</code>
     * | <code>"SYS_NICE"</code> | <code>"SYS_PACCT"</code> | <code>"SYS_PTRACE"</code>
     * | <code>"SYS_RAWIO"</code> | <code>"SYS_RESOURCE"</code> |
     * <code>"SYS_TIME"</code> | <code>"SYS_TTY_CONFIG"</code> | <code>"SYSLOG"</code>
     * | <code>"WAKE_ALARM"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDrop() const { return m_drop; }
    inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }
    template<typename DropT = Aws::Vector<Aws::String>>
    void SetDrop(DropT&& value) { m_dropHasBeenSet = true; m_drop = std::forward<DropT>(value); }
    template<typename DropT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& WithDrop(DropT&& value) { SetDrop(std::forward<DropT>(value)); return *this;}
    template<typename DropT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddDrop(DropT&& value) { m_dropHasBeenSet = true; m_drop.emplace_back(std::forward<DropT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<Aws::String> m_drop;
    bool m_dropHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
