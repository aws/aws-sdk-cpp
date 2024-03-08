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
    AWS_SECURITYHUB_API AwsRoute53HostedZoneDetails();
    AWS_SECURITYHUB_API AwsRoute53HostedZoneDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRoute53HostedZoneDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline const AwsRoute53HostedZoneObjectDetails& GetHostedZone() const{ return m_hostedZone; }

    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline bool HostedZoneHasBeenSet() const { return m_hostedZoneHasBeenSet; }

    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline void SetHostedZone(const AwsRoute53HostedZoneObjectDetails& value) { m_hostedZoneHasBeenSet = true; m_hostedZone = value; }

    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline void SetHostedZone(AwsRoute53HostedZoneObjectDetails&& value) { m_hostedZoneHasBeenSet = true; m_hostedZone = std::move(value); }

    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithHostedZone(const AwsRoute53HostedZoneObjectDetails& value) { SetHostedZone(value); return *this;}

    /**
     * <p> An object that contains information about the specified hosted zone.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithHostedZone(AwsRoute53HostedZoneObjectDetails&& value) { SetHostedZone(std::move(value)); return *this;}


    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline const Aws::Vector<AwsRoute53HostedZoneVpcDetails>& GetVpcs() const{ return m_vpcs; }

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline bool VpcsHasBeenSet() const { return m_vpcsHasBeenSet; }

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline void SetVpcs(const Aws::Vector<AwsRoute53HostedZoneVpcDetails>& value) { m_vpcsHasBeenSet = true; m_vpcs = value; }

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline void SetVpcs(Aws::Vector<AwsRoute53HostedZoneVpcDetails>&& value) { m_vpcsHasBeenSet = true; m_vpcs = std::move(value); }

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithVpcs(const Aws::Vector<AwsRoute53HostedZoneVpcDetails>& value) { SetVpcs(value); return *this;}

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithVpcs(Aws::Vector<AwsRoute53HostedZoneVpcDetails>&& value) { SetVpcs(std::move(value)); return *this;}

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline AwsRoute53HostedZoneDetails& AddVpcs(const AwsRoute53HostedZoneVpcDetails& value) { m_vpcsHasBeenSet = true; m_vpcs.push_back(value); return *this; }

    /**
     * <p> An object that contains information about the Amazon Virtual Private Clouds
     * (Amazon VPCs) that are associated with the specified hosted zone.</p>
     */
    inline AwsRoute53HostedZoneDetails& AddVpcs(AwsRoute53HostedZoneVpcDetails&& value) { m_vpcsHasBeenSet = true; m_vpcs.push_back(std::move(value)); return *this; }


    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNameServers() const{ return m_nameServers; }

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline bool NameServersHasBeenSet() const { return m_nameServersHasBeenSet; }

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline void SetNameServers(const Aws::Vector<Aws::String>& value) { m_nameServersHasBeenSet = true; m_nameServers = value; }

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline void SetNameServers(Aws::Vector<Aws::String>&& value) { m_nameServersHasBeenSet = true; m_nameServers = std::move(value); }

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithNameServers(const Aws::Vector<Aws::String>& value) { SetNameServers(value); return *this;}

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithNameServers(Aws::Vector<Aws::String>&& value) { SetNameServers(std::move(value)); return *this;}

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline AwsRoute53HostedZoneDetails& AddNameServers(const Aws::String& value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline AwsRoute53HostedZoneDetails& AddNameServers(Aws::String&& value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(std::move(value)); return *this; }

    /**
     * <p> An object that contains a list of the authoritative name servers for a
     * hosted zone or for a reusable delegation set.</p>
     */
    inline AwsRoute53HostedZoneDetails& AddNameServers(const char* value) { m_nameServersHasBeenSet = true; m_nameServers.push_back(value); return *this; }


    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline const AwsRoute53QueryLoggingConfigDetails& GetQueryLoggingConfig() const{ return m_queryLoggingConfig; }

    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline bool QueryLoggingConfigHasBeenSet() const { return m_queryLoggingConfigHasBeenSet; }

    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline void SetQueryLoggingConfig(const AwsRoute53QueryLoggingConfigDetails& value) { m_queryLoggingConfigHasBeenSet = true; m_queryLoggingConfig = value; }

    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline void SetQueryLoggingConfig(AwsRoute53QueryLoggingConfigDetails&& value) { m_queryLoggingConfigHasBeenSet = true; m_queryLoggingConfig = std::move(value); }

    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithQueryLoggingConfig(const AwsRoute53QueryLoggingConfigDetails& value) { SetQueryLoggingConfig(value); return *this;}

    /**
     * <p> An array that contains one <code>QueryLoggingConfig</code> element for each
     * DNS query logging configuration that is associated with the current Amazon Web
     * Services account.</p>
     */
    inline AwsRoute53HostedZoneDetails& WithQueryLoggingConfig(AwsRoute53QueryLoggingConfigDetails&& value) { SetQueryLoggingConfig(std::move(value)); return *this;}

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
