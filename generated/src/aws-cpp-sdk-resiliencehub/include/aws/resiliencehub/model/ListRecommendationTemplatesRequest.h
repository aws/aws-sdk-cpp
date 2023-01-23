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


    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AssessmentArnHasBeenSet() const { return m_assessmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListRecommendationTemplatesRequest& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListRecommendationTemplatesRequest& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the assessment. The format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app-assessment/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline ListRecommendationTemplatesRequest& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}


    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified <code>MaxResults</code> value, a token is included in
     * the response so that the remaining results can be retrieved.</p>
     */
    inline ListRecommendationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline ListRecommendationTemplatesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline ListRecommendationTemplatesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for one of the listed recommendation templates.</p>
     */
    inline ListRecommendationTemplatesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListRecommendationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListRecommendationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListRecommendationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const{ return m_recommendationTemplateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline bool RecommendationTemplateArnHasBeenSet() const { return m_recommendationTemplateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(const Aws::String& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(Aws::String&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline void SetRecommendationTemplateArn(const char* value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline ListRecommendationTemplatesRequest& WithRecommendationTemplateArn(const Aws::String& value) { SetRecommendationTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline ListRecommendationTemplatesRequest& WithRecommendationTemplateArn(Aws::String&& value) { SetRecommendationTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline ListRecommendationTemplatesRequest& WithRecommendationTemplateArn(const char* value) { SetRecommendationTemplateArn(value); return *this;}


    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }

    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>The default is to sort by ascending <b>startTime</b>. To sort by descending
     * <b>startTime</b>, set reverseOrder to <code>true</code>.</p>
     */
    inline ListRecommendationTemplatesRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}


    /**
     * <p>The status of the action.</p>
     */
    inline const Aws::Vector<RecommendationTemplateStatus>& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(const Aws::Vector<RecommendationTemplateStatus>& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the action.</p>
     */
    inline void SetStatus(Aws::Vector<RecommendationTemplateStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the action.</p>
     */
    inline ListRecommendationTemplatesRequest& WithStatus(const Aws::Vector<RecommendationTemplateStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline ListRecommendationTemplatesRequest& WithStatus(Aws::Vector<RecommendationTemplateStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the action.</p>
     */
    inline ListRecommendationTemplatesRequest& AddStatus(const RecommendationTemplateStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }

    /**
     * <p>The status of the action.</p>
     */
    inline ListRecommendationTemplatesRequest& AddStatus(RecommendationTemplateStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }

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
