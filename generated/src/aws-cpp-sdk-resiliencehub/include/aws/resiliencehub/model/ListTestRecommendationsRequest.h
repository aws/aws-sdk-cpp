/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ListTestRecommendationsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListTestRecommendationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestRecommendations"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAssessmentArn() const { return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    template<typename AssessmentArnT = Aws::String>
    void SetAssessmentArn(AssessmentArnT&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::forward<AssessmentArnT>(value); }
    template<typename AssessmentArnT = Aws::String>
    ListTestRecommendationsRequest& WithAssessmentArn(AssessmentArnT&& value) { SetAssessmentArn(std::forward<AssessmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestRecommendationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
