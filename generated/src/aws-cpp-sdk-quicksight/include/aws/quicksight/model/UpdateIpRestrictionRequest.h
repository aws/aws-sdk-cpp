/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateIpRestrictionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateIpRestrictionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIpRestriction"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIpRestrictionRuleMap() const{ return m_ipRestrictionRuleMap; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline bool IpRestrictionRuleMapHasBeenSet() const { return m_ipRestrictionRuleMapHasBeenSet; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline void SetIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap = value; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline void SetIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& WithIpRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetIpRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& WithIpRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetIpRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const char* key, Aws::String&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(Aws::String&& key, const char* value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(const char* key, const char* value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcIdRestrictionRuleMap() const{ return m_vpcIdRestrictionRuleMap; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline bool VpcIdRestrictionRuleMapHasBeenSet() const { return m_vpcIdRestrictionRuleMapHasBeenSet; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline void SetVpcIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap = value; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline void SetVpcIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& WithVpcIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetVpcIdRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& WithVpcIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetVpcIdRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(const char* key, Aws::String&& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(Aws::String&& key, const char* value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(const char* key, const char* value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcEndpointIdRestrictionRuleMap() const{ return m_vpcEndpointIdRestrictionRuleMap; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline bool VpcEndpointIdRestrictionRuleMapHasBeenSet() const { return m_vpcEndpointIdRestrictionRuleMapHasBeenSet; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline void SetVpcEndpointIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap = value; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline void SetVpcEndpointIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap = std::move(value); }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& WithVpcEndpointIdRestrictionRuleMap(const Aws::Map<Aws::String, Aws::String>& value) { SetVpcEndpointIdRestrictionRuleMap(value); return *this;}

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& WithVpcEndpointIdRestrictionRuleMap(Aws::Map<Aws::String, Aws::String>&& value) { SetVpcEndpointIdRestrictionRuleMap(std::move(value)); return *this;}

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(const Aws::String& key, const Aws::String& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(key, value); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(Aws::String&& key, const Aws::String& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(const Aws::String& key, Aws::String&& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(Aws::String&& key, Aws::String&& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(const char* key, Aws::String&& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(Aws::String&& key, const char* value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(const char* key, const char* value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(key, value); return *this; }


    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline UpdateIpRestrictionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_ipRestrictionRuleMap;
    bool m_ipRestrictionRuleMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_vpcIdRestrictionRuleMap;
    bool m_vpcIdRestrictionRuleMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_vpcEndpointIdRestrictionRuleMap;
    bool m_vpcEndpointIdRestrictionRuleMapHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
