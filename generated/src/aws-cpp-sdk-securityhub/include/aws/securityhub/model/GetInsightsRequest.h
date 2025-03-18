/**
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
  class GetInsightsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetInsightsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsights"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARNs of the insights to describe. If you don't provide any insight ARNs,
     * then <code>GetInsights</code> returns all of your custom insights. It does not
     * return any managed insights.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsightArns() const { return m_insightArns; }
    inline bool InsightArnsHasBeenSet() const { return m_insightArnsHasBeenSet; }
    template<typename InsightArnsT = Aws::Vector<Aws::String>>
    void SetInsightArns(InsightArnsT&& value) { m_insightArnsHasBeenSet = true; m_insightArns = std::forward<InsightArnsT>(value); }
    template<typename InsightArnsT = Aws::Vector<Aws::String>>
    GetInsightsRequest& WithInsightArns(InsightArnsT&& value) { SetInsightArns(std::forward<InsightArnsT>(value)); return *this;}
    template<typename InsightArnsT = Aws::String>
    GetInsightsRequest& AddInsightArns(InsightArnsT&& value) { m_insightArnsHasBeenSet = true; m_insightArns.emplace_back(std::forward<InsightArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that is required for pagination. On your first call to the
     * <code>GetInsights</code> operation, set the value of this parameter to
     * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
     * listing data, set the value of this parameter to the value returned from the
     * previous response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInsightsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetInsightsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_insightArns;
    bool m_insightArnsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
