/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/ArnResource.h>
#include <aws/vpc-lattice/model/DnsResource.h>
#include <aws/vpc-lattice/model/IpResource.h>
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
   * <p>Describes a resource configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ResourceConfigurationDefinition">AWS
   * API Reference</a></p>
   */
  class ResourceConfigurationDefinition
  {
  public:
    AWS_VPCLATTICE_API ResourceConfigurationDefinition();
    AWS_VPCLATTICE_API ResourceConfigurationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ResourceConfigurationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const ArnResource& GetArnResource() const{ return m_arnResource; }
    inline bool ArnResourceHasBeenSet() const { return m_arnResourceHasBeenSet; }
    inline void SetArnResource(const ArnResource& value) { m_arnResourceHasBeenSet = true; m_arnResource = value; }
    inline void SetArnResource(ArnResource&& value) { m_arnResourceHasBeenSet = true; m_arnResource = std::move(value); }
    inline ResourceConfigurationDefinition& WithArnResource(const ArnResource& value) { SetArnResource(value); return *this;}
    inline ResourceConfigurationDefinition& WithArnResource(ArnResource&& value) { SetArnResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the resource.</p>
     */
    inline const DnsResource& GetDnsResource() const{ return m_dnsResource; }
    inline bool DnsResourceHasBeenSet() const { return m_dnsResourceHasBeenSet; }
    inline void SetDnsResource(const DnsResource& value) { m_dnsResourceHasBeenSet = true; m_dnsResource = value; }
    inline void SetDnsResource(DnsResource&& value) { m_dnsResourceHasBeenSet = true; m_dnsResource = std::move(value); }
    inline ResourceConfigurationDefinition& WithDnsResource(const DnsResource& value) { SetDnsResource(value); return *this;}
    inline ResourceConfigurationDefinition& WithDnsResource(DnsResource&& value) { SetDnsResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP resource.</p>
     */
    inline const IpResource& GetIpResource() const{ return m_ipResource; }
    inline bool IpResourceHasBeenSet() const { return m_ipResourceHasBeenSet; }
    inline void SetIpResource(const IpResource& value) { m_ipResourceHasBeenSet = true; m_ipResource = value; }
    inline void SetIpResource(IpResource&& value) { m_ipResourceHasBeenSet = true; m_ipResource = std::move(value); }
    inline ResourceConfigurationDefinition& WithIpResource(const IpResource& value) { SetIpResource(value); return *this;}
    inline ResourceConfigurationDefinition& WithIpResource(IpResource&& value) { SetIpResource(std::move(value)); return *this;}
    ///@}
  private:

    ArnResource m_arnResource;
    bool m_arnResourceHasBeenSet = false;

    DnsResource m_dnsResource;
    bool m_dnsResourceHasBeenSet = false;

    IpResource m_ipResource;
    bool m_ipResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
