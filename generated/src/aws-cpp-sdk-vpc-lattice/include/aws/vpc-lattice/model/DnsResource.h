/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/ResourceConfigurationIpAddressType.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>The DNS name of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DnsResource">AWS
   * API Reference</a></p>
   */
  class DnsResource
  {
  public:
    AWS_VPCLATTICE_API DnsResource();
    AWS_VPCLATTICE_API DnsResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API DnsResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name of the resource.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DnsResource& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DnsResource& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DnsResource& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IP address.</p>
     */
    inline const ResourceConfigurationIpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const ResourceConfigurationIpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(ResourceConfigurationIpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline DnsResource& WithIpAddressType(const ResourceConfigurationIpAddressType& value) { SetIpAddressType(value); return *this;}
    inline DnsResource& WithIpAddressType(ResourceConfigurationIpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ResourceConfigurationIpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
