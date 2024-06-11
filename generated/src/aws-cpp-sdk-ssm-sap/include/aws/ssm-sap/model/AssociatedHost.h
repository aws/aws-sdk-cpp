/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/IpAddressMember.h>
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
   * <p>Describes the properties of the associated host.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/AssociatedHost">AWS
   * API Reference</a></p>
   */
  class AssociatedHost
  {
  public:
    AWS_SSMSAP_API AssociatedHost();
    AWS_SSMSAP_API AssociatedHost(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API AssociatedHost& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the host.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline AssociatedHost& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline AssociatedHost& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline AssociatedHost& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }
    inline bool Ec2InstanceIdHasBeenSet() const { return m_ec2InstanceIdHasBeenSet; }
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = value; }
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId = std::move(value); }
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceIdHasBeenSet = true; m_ec2InstanceId.assign(value); }
    inline AssociatedHost& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}
    inline AssociatedHost& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}
    inline AssociatedHost& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the associated host.</p>
     */
    inline const Aws::Vector<IpAddressMember>& GetIpAddresses() const{ return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    inline void SetIpAddresses(const Aws::Vector<IpAddressMember>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }
    inline void SetIpAddresses(Aws::Vector<IpAddressMember>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }
    inline AssociatedHost& WithIpAddresses(const Aws::Vector<IpAddressMember>& value) { SetIpAddresses(value); return *this;}
    inline AssociatedHost& WithIpAddresses(Aws::Vector<IpAddressMember>&& value) { SetIpAddresses(std::move(value)); return *this;}
    inline AssociatedHost& AddIpAddresses(const IpAddressMember& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }
    inline AssociatedHost& AddIpAddresses(IpAddressMember&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the operating system.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }
    inline AssociatedHost& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}
    inline AssociatedHost& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}
    inline AssociatedHost& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_ec2InstanceId;
    bool m_ec2InstanceIdHasBeenSet = false;

    Aws::Vector<IpAddressMember> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
