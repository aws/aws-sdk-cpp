/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   */
  class ListTelemetryRulesForOrganizationRequest : public ObservabilityAdminRequest
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListTelemetryRulesForOrganizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTelemetryRulesForOrganization"; }

    AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A string to filter organization telemetry rules whose names begin with the
     * specified prefix. </p>
     */
    inline const Aws::String& GetRuleNamePrefix() const { return m_ruleNamePrefix; }
    inline bool RuleNamePrefixHasBeenSet() const { return m_ruleNamePrefixHasBeenSet; }
    template<typename RuleNamePrefixT = Aws::String>
    void SetRuleNamePrefix(RuleNamePrefixT&& value) { m_ruleNamePrefixHasBeenSet = true; m_ruleNamePrefix = std::forward<RuleNamePrefixT>(value); }
    template<typename RuleNamePrefixT = Aws::String>
    ListTelemetryRulesForOrganizationRequest& WithRuleNamePrefix(RuleNamePrefixT&& value) { SetRuleNamePrefix(std::forward<RuleNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of account IDs to filter organization telemetry rules by their
     * source accounts. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceAccountIds() const { return m_sourceAccountIds; }
    inline bool SourceAccountIdsHasBeenSet() const { return m_sourceAccountIdsHasBeenSet; }
    template<typename SourceAccountIdsT = Aws::Vector<Aws::String>>
    void SetSourceAccountIds(SourceAccountIdsT&& value) { m_sourceAccountIdsHasBeenSet = true; m_sourceAccountIds = std::forward<SourceAccountIdsT>(value); }
    template<typename SourceAccountIdsT = Aws::Vector<Aws::String>>
    ListTelemetryRulesForOrganizationRequest& WithSourceAccountIds(SourceAccountIdsT&& value) { SetSourceAccountIds(std::forward<SourceAccountIdsT>(value)); return *this;}
    template<typename SourceAccountIdsT = Aws::String>
    ListTelemetryRulesForOrganizationRequest& AddSourceAccountIds(SourceAccountIdsT&& value) { m_sourceAccountIdsHasBeenSet = true; m_sourceAccountIds.emplace_back(std::forward<SourceAccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The list of organizational unit IDs to filter organization telemetry rules
     * by their source organizational units. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceOrganizationUnitIds() const { return m_sourceOrganizationUnitIds; }
    inline bool SourceOrganizationUnitIdsHasBeenSet() const { return m_sourceOrganizationUnitIdsHasBeenSet; }
    template<typename SourceOrganizationUnitIdsT = Aws::Vector<Aws::String>>
    void SetSourceOrganizationUnitIds(SourceOrganizationUnitIdsT&& value) { m_sourceOrganizationUnitIdsHasBeenSet = true; m_sourceOrganizationUnitIds = std::forward<SourceOrganizationUnitIdsT>(value); }
    template<typename SourceOrganizationUnitIdsT = Aws::Vector<Aws::String>>
    ListTelemetryRulesForOrganizationRequest& WithSourceOrganizationUnitIds(SourceOrganizationUnitIdsT&& value) { SetSourceOrganizationUnitIds(std::forward<SourceOrganizationUnitIdsT>(value)); return *this;}
    template<typename SourceOrganizationUnitIdsT = Aws::String>
    ListTelemetryRulesForOrganizationRequest& AddSourceOrganizationUnitIds(SourceOrganizationUnitIdsT&& value) { m_sourceOrganizationUnitIdsHasBeenSet = true; m_sourceOrganizationUnitIds.emplace_back(std::forward<SourceOrganizationUnitIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The maximum number of organization telemetry rules to return in a single
     * call. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTelemetryRulesForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token for the next set of results. A previous call generates this token.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTelemetryRulesForOrganizationRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleNamePrefix;
    bool m_ruleNamePrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceAccountIds;
    bool m_sourceAccountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceOrganizationUnitIds;
    bool m_sourceOrganizationUnitIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
