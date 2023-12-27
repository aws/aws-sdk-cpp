/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class ListAppsRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ListAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;

    AWS_RESILIENCEHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline ListAppsRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline ListAppsRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline ListAppsRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>Indicates the lower limit of the range that is used to filter applications
     * based on their last assessment times.</p>
     */
    inline const Aws::Utils::DateTime& GetFromLastAssessmentTime() const{ return m_fromLastAssessmentTime; }

    /**
     * <p>Indicates the lower limit of the range that is used to filter applications
     * based on their last assessment times.</p>
     */
    inline bool FromLastAssessmentTimeHasBeenSet() const { return m_fromLastAssessmentTimeHasBeenSet; }

    /**
     * <p>Indicates the lower limit of the range that is used to filter applications
     * based on their last assessment times.</p>
     */
    inline void SetFromLastAssessmentTime(const Aws::Utils::DateTime& value) { m_fromLastAssessmentTimeHasBeenSet = true; m_fromLastAssessmentTime = value; }

    /**
     * <p>Indicates the lower limit of the range that is used to filter applications
     * based on their last assessment times.</p>
     */
    inline void SetFromLastAssessmentTime(Aws::Utils::DateTime&& value) { m_fromLastAssessmentTimeHasBeenSet = true; m_fromLastAssessmentTime = std::move(value); }

    /**
     * <p>Indicates the lower limit of the range that is used to filter applications
     * based on their last assessment times.</p>
     */
    inline ListAppsRequest& WithFromLastAssessmentTime(const Aws::Utils::DateTime& value) { SetFromLastAssessmentTime(value); return *this;}

    /**
     * <p>Indicates the lower limit of the range that is used to filter applications
     * based on their last assessment times.</p>
     */
    inline ListAppsRequest& WithFromLastAssessmentTime(Aws::Utils::DateTime&& value) { SetFromLastAssessmentTime(std::move(value)); return *this;}


    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to include in the response. If more results exist
     * than the specified <code>MaxResults</code> value, a token is included in the
     * response so that the remaining results can be retrieved.</p>
     */
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline ListAppsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline ListAppsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline ListAppsRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline ListAppsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Null, or the token from a previous call to get the next set of results.</p>
     */
    inline ListAppsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The application list is sorted based on the values of
     * <code>lastAppComplianceEvaluationTime</code> field. By default, application list
     * is sorted in ascending order. To sort the appliation list in descending order,
     * set this field to <code>True</code>.</p>
     */
    inline bool GetReverseOrder() const{ return m_reverseOrder; }

    /**
     * <p>The application list is sorted based on the values of
     * <code>lastAppComplianceEvaluationTime</code> field. By default, application list
     * is sorted in ascending order. To sort the appliation list in descending order,
     * set this field to <code>True</code>.</p>
     */
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }

    /**
     * <p>The application list is sorted based on the values of
     * <code>lastAppComplianceEvaluationTime</code> field. By default, application list
     * is sorted in ascending order. To sort the appliation list in descending order,
     * set this field to <code>True</code>.</p>
     */
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }

    /**
     * <p>The application list is sorted based on the values of
     * <code>lastAppComplianceEvaluationTime</code> field. By default, application list
     * is sorted in ascending order. To sort the appliation list in descending order,
     * set this field to <code>True</code>.</p>
     */
    inline ListAppsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}


    /**
     * <p>Indicates the upper limit of the range that is used to filter the
     * applications based on their last assessment times.</p>
     */
    inline const Aws::Utils::DateTime& GetToLastAssessmentTime() const{ return m_toLastAssessmentTime; }

    /**
     * <p>Indicates the upper limit of the range that is used to filter the
     * applications based on their last assessment times.</p>
     */
    inline bool ToLastAssessmentTimeHasBeenSet() const { return m_toLastAssessmentTimeHasBeenSet; }

    /**
     * <p>Indicates the upper limit of the range that is used to filter the
     * applications based on their last assessment times.</p>
     */
    inline void SetToLastAssessmentTime(const Aws::Utils::DateTime& value) { m_toLastAssessmentTimeHasBeenSet = true; m_toLastAssessmentTime = value; }

    /**
     * <p>Indicates the upper limit of the range that is used to filter the
     * applications based on their last assessment times.</p>
     */
    inline void SetToLastAssessmentTime(Aws::Utils::DateTime&& value) { m_toLastAssessmentTimeHasBeenSet = true; m_toLastAssessmentTime = std::move(value); }

    /**
     * <p>Indicates the upper limit of the range that is used to filter the
     * applications based on their last assessment times.</p>
     */
    inline ListAppsRequest& WithToLastAssessmentTime(const Aws::Utils::DateTime& value) { SetToLastAssessmentTime(value); return *this;}

    /**
     * <p>Indicates the upper limit of the range that is used to filter the
     * applications based on their last assessment times.</p>
     */
    inline ListAppsRequest& WithToLastAssessmentTime(Aws::Utils::DateTime&& value) { SetToLastAssessmentTime(std::move(value)); return *this;}

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Utils::DateTime m_fromLastAssessmentTime;
    bool m_fromLastAssessmentTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_reverseOrder;
    bool m_reverseOrderHasBeenSet = false;

    Aws::Utils::DateTime m_toLastAssessmentTime;
    bool m_toLastAssessmentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
