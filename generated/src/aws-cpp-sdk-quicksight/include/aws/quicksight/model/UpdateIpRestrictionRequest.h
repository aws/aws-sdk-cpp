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
    AWS_QUICKSIGHT_API UpdateIpRestrictionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIpRestriction"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateIpRestrictionRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that describes the updated IP rules with CIDR ranges and
     * descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIpRestrictionRuleMap() const { return m_ipRestrictionRuleMap; }
    inline bool IpRestrictionRuleMapHasBeenSet() const { return m_ipRestrictionRuleMapHasBeenSet; }
    template<typename IpRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    void SetIpRestrictionRuleMap(IpRestrictionRuleMapT&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap = std::forward<IpRestrictionRuleMapT>(value); }
    template<typename IpRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    UpdateIpRestrictionRequest& WithIpRestrictionRuleMap(IpRestrictionRuleMapT&& value) { SetIpRestrictionRuleMap(std::forward<IpRestrictionRuleMapT>(value)); return *this;}
    template<typename IpRestrictionRuleMapKeyT = Aws::String, typename IpRestrictionRuleMapValueT = Aws::String>
    UpdateIpRestrictionRequest& AddIpRestrictionRuleMap(IpRestrictionRuleMapKeyT&& key, IpRestrictionRuleMapValueT&& value) {
      m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::forward<IpRestrictionRuleMapKeyT>(key), std::forward<IpRestrictionRuleMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of VPC IDs and their corresponding rules. When you configure this
     * parameter, traffic from all VPC endpoints that are present in the specified VPC
     * is allowed.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcIdRestrictionRuleMap() const { return m_vpcIdRestrictionRuleMap; }
    inline bool VpcIdRestrictionRuleMapHasBeenSet() const { return m_vpcIdRestrictionRuleMapHasBeenSet; }
    template<typename VpcIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    void SetVpcIdRestrictionRuleMap(VpcIdRestrictionRuleMapT&& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap = std::forward<VpcIdRestrictionRuleMapT>(value); }
    template<typename VpcIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    UpdateIpRestrictionRequest& WithVpcIdRestrictionRuleMap(VpcIdRestrictionRuleMapT&& value) { SetVpcIdRestrictionRuleMap(std::forward<VpcIdRestrictionRuleMapT>(value)); return *this;}
    template<typename VpcIdRestrictionRuleMapKeyT = Aws::String, typename VpcIdRestrictionRuleMapValueT = Aws::String>
    UpdateIpRestrictionRequest& AddVpcIdRestrictionRuleMap(VpcIdRestrictionRuleMapKeyT&& key, VpcIdRestrictionRuleMapValueT&& value) {
      m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(std::forward<VpcIdRestrictionRuleMapKeyT>(key), std::forward<VpcIdRestrictionRuleMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of allowed VPC endpoint IDs and their corresponding rule
     * descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcEndpointIdRestrictionRuleMap() const { return m_vpcEndpointIdRestrictionRuleMap; }
    inline bool VpcEndpointIdRestrictionRuleMapHasBeenSet() const { return m_vpcEndpointIdRestrictionRuleMapHasBeenSet; }
    template<typename VpcEndpointIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    void SetVpcEndpointIdRestrictionRuleMap(VpcEndpointIdRestrictionRuleMapT&& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap = std::forward<VpcEndpointIdRestrictionRuleMapT>(value); }
    template<typename VpcEndpointIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    UpdateIpRestrictionRequest& WithVpcEndpointIdRestrictionRuleMap(VpcEndpointIdRestrictionRuleMapT&& value) { SetVpcEndpointIdRestrictionRuleMap(std::forward<VpcEndpointIdRestrictionRuleMapT>(value)); return *this;}
    template<typename VpcEndpointIdRestrictionRuleMapKeyT = Aws::String, typename VpcEndpointIdRestrictionRuleMapValueT = Aws::String>
    UpdateIpRestrictionRequest& AddVpcEndpointIdRestrictionRuleMap(VpcEndpointIdRestrictionRuleMapKeyT&& key, VpcEndpointIdRestrictionRuleMapValueT&& value) {
      m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(std::forward<VpcEndpointIdRestrictionRuleMapKeyT>(key), std::forward<VpcEndpointIdRestrictionRuleMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateIpRestrictionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_ipRestrictionRuleMap;
    bool m_ipRestrictionRuleMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_vpcIdRestrictionRuleMap;
    bool m_vpcIdRestrictionRuleMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_vpcEndpointIdRestrictionRuleMap;
    bool m_vpcEndpointIdRestrictionRuleMapHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
