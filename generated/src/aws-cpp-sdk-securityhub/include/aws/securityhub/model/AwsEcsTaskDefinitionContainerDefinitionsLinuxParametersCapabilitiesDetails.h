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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::Vector<Aws::String>& GetAdd() const{ return m_add; }

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
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }

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
    inline void SetAdd(const Aws::Vector<Aws::String>& value) { m_addHasBeenSet = true; m_add = value; }

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
    inline void SetAdd(Aws::Vector<Aws::String>&& value) { m_addHasBeenSet = true; m_add = std::move(value); }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& WithAdd(const Aws::Vector<Aws::String>& value) { SetAdd(value); return *this;}

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& WithAdd(Aws::Vector<Aws::String>&& value) { SetAdd(std::move(value)); return *this;}

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddAdd(const Aws::String& value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddAdd(Aws::String&& value) { m_addHasBeenSet = true; m_add.push_back(std::move(value)); return *this; }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddAdd(const char* value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }


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
    inline const Aws::Vector<Aws::String>& GetDrop() const{ return m_drop; }

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
    inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }

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
    inline void SetDrop(const Aws::Vector<Aws::String>& value) { m_dropHasBeenSet = true; m_drop = value; }

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
    inline void SetDrop(Aws::Vector<Aws::String>&& value) { m_dropHasBeenSet = true; m_drop = std::move(value); }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& WithDrop(const Aws::Vector<Aws::String>& value) { SetDrop(value); return *this;}

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& WithDrop(Aws::Vector<Aws::String>&& value) { SetDrop(std::move(value)); return *this;}

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddDrop(const Aws::String& value) { m_dropHasBeenSet = true; m_drop.push_back(value); return *this; }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddDrop(Aws::String&& value) { m_dropHasBeenSet = true; m_drop.push_back(std::move(value)); return *this; }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersCapabilitiesDetails& AddDrop(const char* value) { m_dropHasBeenSet = true; m_drop.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<Aws::String> m_drop;
    bool m_dropHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
