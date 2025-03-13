/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/HostRole.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Describes the properties of the Dedicated Host. </p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Host">AWS API
   * Reference</a></p>
   */
  class Host
  {
  public:
    AWS_SSMSAP_API Host() = default;
    AWS_SSMSAP_API Host(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Host& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Dedicated Host.</p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    Host& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the Dedicated Host. </p>
     */
    inline const Aws::String& GetHostIp() const { return m_hostIp; }
    inline bool HostIpHasBeenSet() const { return m_hostIpHasBeenSet; }
    template<typename HostIpT = Aws::String>
    void SetHostIp(HostIpT&& value) { m_hostIpHasBeenSet = true; m_hostIp = std::forward<HostIpT>(value); }
    template<typename HostIpT = Aws::String>
    Host& WithHostIp(HostIpT&& value) { SetHostIp(std::forward<HostIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetEC2InstanceId() const { return m_eC2InstanceId; }
    inline bool EC2InstanceIdHasBeenSet() const { return m_eC2InstanceIdHasBeenSet; }
    template<typename EC2InstanceIdT = Aws::String>
    void SetEC2InstanceId(EC2InstanceIdT&& value) { m_eC2InstanceIdHasBeenSet = true; m_eC2InstanceId = std::forward<EC2InstanceIdT>(value); }
    template<typename EC2InstanceIdT = Aws::String>
    Host& WithEC2InstanceId(EC2InstanceIdT&& value) { SetEC2InstanceId(std::forward<EC2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID of the instance on the Dedicated Host.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    Host& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the Dedicated Host.</p>
     */
    inline HostRole GetHostRole() const { return m_hostRole; }
    inline bool HostRoleHasBeenSet() const { return m_hostRoleHasBeenSet; }
    inline void SetHostRole(HostRole value) { m_hostRoleHasBeenSet = true; m_hostRole = value; }
    inline Host& WithHostRole(HostRole value) { SetHostRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the operating system.</p>
     */
    inline const Aws::String& GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    template<typename OsVersionT = Aws::String>
    void SetOsVersion(OsVersionT&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::forward<OsVersionT>(value); }
    template<typename OsVersionT = Aws::String>
    Host& WithOsVersion(OsVersionT&& value) { SetOsVersion(std::forward<OsVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_hostIp;
    bool m_hostIpHasBeenSet = false;

    Aws::String m_eC2InstanceId;
    bool m_eC2InstanceIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    HostRole m_hostRole{HostRole::NOT_SET};
    bool m_hostRoleHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
