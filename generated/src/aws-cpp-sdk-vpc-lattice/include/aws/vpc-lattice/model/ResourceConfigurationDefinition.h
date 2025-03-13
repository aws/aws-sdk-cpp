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
    AWS_VPCLATTICE_API ResourceConfigurationDefinition() = default;
    AWS_VPCLATTICE_API ResourceConfigurationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ResourceConfigurationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const ArnResource& GetArnResource() const { return m_arnResource; }
    inline bool ArnResourceHasBeenSet() const { return m_arnResourceHasBeenSet; }
    template<typename ArnResourceT = ArnResource>
    void SetArnResource(ArnResourceT&& value) { m_arnResourceHasBeenSet = true; m_arnResource = std::forward<ArnResourceT>(value); }
    template<typename ArnResourceT = ArnResource>
    ResourceConfigurationDefinition& WithArnResource(ArnResourceT&& value) { SetArnResource(std::forward<ArnResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the resource.</p>
     */
    inline const DnsResource& GetDnsResource() const { return m_dnsResource; }
    inline bool DnsResourceHasBeenSet() const { return m_dnsResourceHasBeenSet; }
    template<typename DnsResourceT = DnsResource>
    void SetDnsResource(DnsResourceT&& value) { m_dnsResourceHasBeenSet = true; m_dnsResource = std::forward<DnsResourceT>(value); }
    template<typename DnsResourceT = DnsResource>
    ResourceConfigurationDefinition& WithDnsResource(DnsResourceT&& value) { SetDnsResource(std::forward<DnsResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP resource.</p>
     */
    inline const IpResource& GetIpResource() const { return m_ipResource; }
    inline bool IpResourceHasBeenSet() const { return m_ipResourceHasBeenSet; }
    template<typename IpResourceT = IpResource>
    void SetIpResource(IpResourceT&& value) { m_ipResourceHasBeenSet = true; m_ipResource = std::forward<IpResourceT>(value); }
    template<typename IpResourceT = IpResource>
    ResourceConfigurationDefinition& WithIpResource(IpResourceT&& value) { SetIpResource(std::forward<IpResourceT>(value)); return *this;}
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
