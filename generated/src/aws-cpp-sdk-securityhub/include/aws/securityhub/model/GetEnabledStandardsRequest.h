﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetEnabledStandardsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetEnabledStandardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEnabledStandards"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of the standards subscription ARNs for the standards to
     * retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStandardsSubscriptionArns() const { return m_standardsSubscriptionArns; }
    inline bool StandardsSubscriptionArnsHasBeenSet() const { return m_standardsSubscriptionArnsHasBeenSet; }
    template<typename StandardsSubscriptionArnsT = Aws::Vector<Aws::String>>
    void SetStandardsSubscriptionArns(StandardsSubscriptionArnsT&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns = std::forward<StandardsSubscriptionArnsT>(value); }
    template<typename StandardsSubscriptionArnsT = Aws::Vector<Aws::String>>
    GetEnabledStandardsRequest& WithStandardsSubscriptionArns(StandardsSubscriptionArnsT&& value) { SetStandardsSubscriptionArns(std::forward<StandardsSubscriptionArnsT>(value)); return *this;}
    template<typename StandardsSubscriptionArnsT = Aws::String>
    GetEnabledStandardsRequest& AddStandardsSubscriptionArns(StandardsSubscriptionArnsT&& value) { m_standardsSubscriptionArnsHasBeenSet = true; m_standardsSubscriptionArns.emplace_back(std::forward<StandardsSubscriptionArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetEnabledStandards</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEnabledStandardsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetEnabledStandardsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_standardsSubscriptionArns;
    bool m_standardsSubscriptionArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
