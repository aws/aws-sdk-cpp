/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/ResourceManagedStatus.h>
#include <aws/network-firewall/model/ResourceManagedType.h>
#include <aws/network-firewall/model/RuleGroupType.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class ListRuleGroupsRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API ListRuleGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRuleGroups"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRuleGroupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects that you want Network Firewall to return for
     * this request. If more objects are available, in the response, Network Firewall
     * provides a <code>NextToken</code> value that you can use in a subsequent call to
     * get the next batch of objects.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRuleGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the request. The default setting of <code>ACCOUNT</code> or a
     * setting of <code>NULL</code> returns all of the rule groups in your account. A
     * setting of <code>MANAGED</code> returns all available managed rule groups.</p>
     */
    inline ResourceManagedStatus GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(ResourceManagedStatus value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline ListRuleGroupsRequest& WithScope(ResourceManagedStatus value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the general category of the Amazon Web Services managed rule
     * group.</p>
     */
    inline ResourceManagedType GetManagedType() const { return m_managedType; }
    inline bool ManagedTypeHasBeenSet() const { return m_managedTypeHasBeenSet; }
    inline void SetManagedType(ResourceManagedType value) { m_managedTypeHasBeenSet = true; m_managedType = value; }
    inline ListRuleGroupsRequest& WithManagedType(ResourceManagedType value) { SetManagedType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule group is stateless or stateful. If the rule group
     * is stateless, it contains stateless rules. If it is stateful, it contains
     * stateful rules.</p>
     */
    inline RuleGroupType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RuleGroupType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListRuleGroupsRequest& WithType(RuleGroupType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ResourceManagedStatus m_scope{ResourceManagedStatus::NOT_SET};
    bool m_scopeHasBeenSet = false;

    ResourceManagedType m_managedType{ResourceManagedType::NOT_SET};
    bool m_managedTypeHasBeenSet = false;

    RuleGroupType m_type{RuleGroupType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
