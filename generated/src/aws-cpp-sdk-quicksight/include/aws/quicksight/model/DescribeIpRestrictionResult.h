/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeIpRestrictionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeIpRestrictionResult() = default;
    AWS_QUICKSIGHT_API DescribeIpRestrictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeIpRestrictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeIpRestrictionResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that describes the IP rules with CIDR range and description.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIpRestrictionRuleMap() const { return m_ipRestrictionRuleMap; }
    template<typename IpRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    void SetIpRestrictionRuleMap(IpRestrictionRuleMapT&& value) { m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap = std::forward<IpRestrictionRuleMapT>(value); }
    template<typename IpRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    DescribeIpRestrictionResult& WithIpRestrictionRuleMap(IpRestrictionRuleMapT&& value) { SetIpRestrictionRuleMap(std::forward<IpRestrictionRuleMapT>(value)); return *this;}
    template<typename IpRestrictionRuleMapKeyT = Aws::String, typename IpRestrictionRuleMapValueT = Aws::String>
    DescribeIpRestrictionResult& AddIpRestrictionRuleMap(IpRestrictionRuleMapKeyT&& key, IpRestrictionRuleMapValueT&& value) {
      m_ipRestrictionRuleMapHasBeenSet = true; m_ipRestrictionRuleMap.emplace(std::forward<IpRestrictionRuleMapKeyT>(key), std::forward<IpRestrictionRuleMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of allowed VPC IDs and their rule descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcIdRestrictionRuleMap() const { return m_vpcIdRestrictionRuleMap; }
    template<typename VpcIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    void SetVpcIdRestrictionRuleMap(VpcIdRestrictionRuleMapT&& value) { m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap = std::forward<VpcIdRestrictionRuleMapT>(value); }
    template<typename VpcIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    DescribeIpRestrictionResult& WithVpcIdRestrictionRuleMap(VpcIdRestrictionRuleMapT&& value) { SetVpcIdRestrictionRuleMap(std::forward<VpcIdRestrictionRuleMapT>(value)); return *this;}
    template<typename VpcIdRestrictionRuleMapKeyT = Aws::String, typename VpcIdRestrictionRuleMapValueT = Aws::String>
    DescribeIpRestrictionResult& AddVpcIdRestrictionRuleMap(VpcIdRestrictionRuleMapKeyT&& key, VpcIdRestrictionRuleMapValueT&& value) {
      m_vpcIdRestrictionRuleMapHasBeenSet = true; m_vpcIdRestrictionRuleMap.emplace(std::forward<VpcIdRestrictionRuleMapKeyT>(key), std::forward<VpcIdRestrictionRuleMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A map of allowed VPC endpoint IDs and their rule descriptions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVpcEndpointIdRestrictionRuleMap() const { return m_vpcEndpointIdRestrictionRuleMap; }
    template<typename VpcEndpointIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    void SetVpcEndpointIdRestrictionRuleMap(VpcEndpointIdRestrictionRuleMapT&& value) { m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap = std::forward<VpcEndpointIdRestrictionRuleMapT>(value); }
    template<typename VpcEndpointIdRestrictionRuleMapT = Aws::Map<Aws::String, Aws::String>>
    DescribeIpRestrictionResult& WithVpcEndpointIdRestrictionRuleMap(VpcEndpointIdRestrictionRuleMapT&& value) { SetVpcEndpointIdRestrictionRuleMap(std::forward<VpcEndpointIdRestrictionRuleMapT>(value)); return *this;}
    template<typename VpcEndpointIdRestrictionRuleMapKeyT = Aws::String, typename VpcEndpointIdRestrictionRuleMapValueT = Aws::String>
    DescribeIpRestrictionResult& AddVpcEndpointIdRestrictionRuleMap(VpcEndpointIdRestrictionRuleMapKeyT&& key, VpcEndpointIdRestrictionRuleMapValueT&& value) {
      m_vpcEndpointIdRestrictionRuleMapHasBeenSet = true; m_vpcEndpointIdRestrictionRuleMap.emplace(std::forward<VpcEndpointIdRestrictionRuleMapKeyT>(key), std::forward<VpcEndpointIdRestrictionRuleMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether IP rules are turned on.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DescribeIpRestrictionResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeIpRestrictionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request. </p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeIpRestrictionResult& WithStatus(int value) { SetStatus(value); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
