/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsRoute53HostedZoneObjectDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsRoute53QueryLoggingConfigDetails.h>
#include <aws/securityhub/model/AwsRoute53HostedZoneVpcDetails.h>
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
   * <p> Provides details about a specified Amazon Route 53 hosted zone, including
   * the four name servers assigned to the hosted zone. A hosted zone represents a
   * collection of records that can be managed together, belonging to a single parent
   * domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRoute53HostedZoneDetails">AWS
   * API Reference</a></p>
   */
  class AwsRoute53HostedZoneDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRoute53HostedZoneDetails() = default;
    AWS_SECURITYHUB_API AwsRoute53HostedZoneDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53HostedZoneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline const AwsRoute53HostedZoneObjectDetails& GetHostedZone() const { return m_hostedZone; }
    inline bool HostedZoneHasBeenSet() const { return m_hostedZoneHasBeenSet; }
    template<typename HostedZoneT = AwsRoute53HostedZoneObjectDetails>
    void SetHostedZone(HostedZoneT&& value) { m_hostedZoneHasBeenSet = true; m_hostedZone = std::forward<HostedZoneT>(value); }
    template<typename HostedZoneT = AwsRoute53HostedZoneObjectDetails>
    AwsRoute53HostedZoneDetails& WithHostedZone(HostedZoneT&& value) { SetHostedZone(std::forward<HostedZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline const Aws::Vector<AwsRoute53HostedZoneVpcDetails>& GetVpcs() const { return m_vpcs; }
    inline bool VpcsHasBeenSet() const { return m_vpcsHasBeenSet; }
    template<typename VpcsT = Aws::Vector<AwsRoute53HostedZoneVpcDetails>>
    void SetVpcs(VpcsT&& value) { m_vpcsHasBeenSet = true; m_vpcs = std::forward<VpcsT>(value); }
    template<typename VpcsT = Aws::Vector<AwsRoute53HostedZoneVpcDetails>>
    AwsRoute53HostedZoneDetails& WithVpcs(VpcsT&& value) { SetVpcs(std::forward<VpcsT>(value)); return *this;}
    template<typename VpcsT = AwsRoute53HostedZoneVpcDetails>
    AwsRoute53HostedZoneDetails& AddVpcs(VpcsT&& value) { m_vpcsHasBeenSet = true; m_vpcs.emplace_back(std::forward<VpcsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNameServers() const { return m_nameServers; }
    inline bool NameServersHasBeenSet() const { return m_nameServersHasBeenSet; }
    template<typename NameServersT = Aws::Vector<Aws::String>>
    void SetNameServers(NameServersT&& value) { m_nameServersHasBeenSet = true; m_nameServers = std::forward<NameServersT>(value); }
    template<typename NameServersT = Aws::Vector<Aws::String>>
    AwsRoute53HostedZoneDetails& WithNameServers(NameServersT&& value) { SetNameServers(std::forward<NameServersT>(value)); return *this;}
    template<typename NameServersT = Aws::String>
    AwsRoute53HostedZoneDetails& AddNameServers(NameServersT&& value) { m_nameServersHasBeenSet = true; m_nameServers.emplace_back(std::forward<NameServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline const AwsRoute53QueryLoggingConfigDetails& GetQueryLoggingConfig() const { return m_queryLoggingConfig; }
    inline bool QueryLoggingConfigHasBeenSet() const { return m_queryLoggingConfigHasBeenSet; }
    template<typename QueryLoggingConfigT = AwsRoute53QueryLoggingConfigDetails>
    void SetQueryLoggingConfig(QueryLoggingConfigT&& value) { m_queryLoggingConfigHasBeenSet = true; m_queryLoggingConfig = std::forward<QueryLoggingConfigT>(value); }
    template<typename QueryLoggingConfigT = AwsRoute53QueryLoggingConfigDetails>
    AwsRoute53HostedZoneDetails& WithQueryLoggingConfig(QueryLoggingConfigT&& value) { SetQueryLoggingConfig(std::forward<QueryLoggingConfigT>(value)); return *this;}
    ///@}
  private:

    AwsRoute53HostedZoneObjectDetails m_hostedZone;
    bool m_hostedZoneHasBeenSet = false;

    Aws::Vector<AwsRoute53HostedZoneVpcDetails> m_vpcs;
    bool m_vpcsHasBeenSet = false;

    Aws::Vector<Aws::String> m_nameServers;
    bool m_nameServersHasBeenSet = false;

    AwsRoute53QueryLoggingConfigDetails m_queryLoggingConfig;
    bool m_queryLoggingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
