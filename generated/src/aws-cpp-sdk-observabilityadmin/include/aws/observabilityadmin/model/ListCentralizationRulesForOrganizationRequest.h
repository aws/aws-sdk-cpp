/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   */
  class ListCentralizationRulesForOrganizationRequest : public ObservabilityAdminRequest
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListCentralizationRulesForOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCentralizationRulesForOrganization"; }

    AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A string to filter organization centralization rules whose names begin with
     * the specified prefix.</p>
     */
    inline const Aws::String& GetRuleNamePrefix() const { return m_ruleNamePrefix; }
    inline bool RuleNamePrefixHasBeenSet() const { return m_ruleNamePrefixHasBeenSet; }
    template<typename RuleNamePrefixT = Aws::String>
    void SetRuleNamePrefix(RuleNamePrefixT&& value) { m_ruleNamePrefixHasBeenSet = true; m_ruleNamePrefix = std::forward<RuleNamePrefixT>(value); }
    template<typename RuleNamePrefixT = Aws::String>
    ListCentralizationRulesForOrganizationRequest& WithRuleNamePrefix(RuleNamePrefixT&& value) { SetRuleNamePrefix(std::forward<RuleNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag determining whether to return organization centralization rules from
     * all regions or only the current region.</p>
     */
    inline bool GetAllRegions() const { return m_allRegions; }
    inline bool AllRegionsHasBeenSet() const { return m_allRegionsHasBeenSet; }
    inline void SetAllRegions(bool value) { m_allRegionsHasBeenSet = true; m_allRegions = value; }
    inline ListCentralizationRulesForOrganizationRequest& WithAllRegions(bool value) { SetAllRegions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of organization centralization rules to return in a single
     * call.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCentralizationRulesForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. A previous call generates this
     * token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCentralizationRulesForOrganizationRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleNamePrefix;
    bool m_ruleNamePrefixHasBeenSet = false;

    bool m_allRegions{false};
    bool m_allRegionsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
