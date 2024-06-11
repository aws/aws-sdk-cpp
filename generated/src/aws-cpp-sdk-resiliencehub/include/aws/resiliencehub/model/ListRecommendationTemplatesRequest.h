/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RecommendationTemplateStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ListRecommendationTemplatesRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendationTemplates"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;

    AWS_RESILIENCEHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }
    inline ListRecommendationTemplatesRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}
    inline ListRecommendationTemplatesRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}
    inline ListRecommendationTemplatesRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecommendationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListRecommendationTemplatesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListRecommendationTemplatesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListRecommendationTemplatesRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRecommendationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const{ return m_recommendationTemplateArn; }
    inline bool RecommendationTemplateArnHasBeenSet() const { return m_recommendationTemplateArnHasBeenSet; }
    inline void SetRecommendationTemplateArn(const Aws::String& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = value; }
    inline void SetRecommendationTemplateArn(Aws::String&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::move(value); }
    inline void SetRecommendationTemplateArn(const char* value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn.assign(value); }
    inline ListRecommendationTemplatesRequest& WithRecommendationTemplateArn(const Aws::String& value) { SetRecommendationTemplateArn(value); return *this;}
    inline ListRecommendationTemplatesRequest& WithRecommendationTemplateArn(Aws::String&& value) { SetRecommendationTemplateArn(std::move(value)); return *this;}
    inline ListRecommendationTemplatesRequest& WithRecommendationTemplateArn(const char* value) { SetRecommendationTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline ListRecommendationTemplatesRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline const Aws::Vector<RecommendationTemplateStatus>& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::Vector<RecommendationTemplateStatus>& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::Vector<RecommendationTemplateStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListRecommendationTemplatesRequest& WithStatus(const Aws::Vector<RecommendationTemplateStatus>& value) { SetStatus(value); return *this;}
    inline ListRecommendationTemplatesRequest& WithStatus(Aws::Vector<RecommendationTemplateStatus>&& value) { SetStatus(std::move(value)); return *this;}
    inline ListRecommendationTemplatesRequest& AddStatus(const RecommendationTemplateStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    inline ListRecommendationTemplatesRequest& AddStatus(RecommendationTemplateStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_recommendationTemplateArn;
    bool m_recommendationTemplateArnHasBeenSet = false;

    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet = false;

    Aws::Vector<RecommendationTemplateStatus> m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
