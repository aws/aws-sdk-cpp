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
    AWS_RESILIENCEHUB_API ListAppsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;

    AWS_RESILIENCEHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    ListAppsRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of Resource Groups group that is integrated with
     * an AppRegistry application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAwsApplicationArn() const { return m_awsApplicationArn; }
    inline bool AwsApplicationArnHasBeenSet() const { return m_awsApplicationArnHasBeenSet; }
    template<typename AwsApplicationArnT = Aws::String>
    void SetAwsApplicationArn(AwsApplicationArnT&& value) { m_awsApplicationArnHasBeenSet = true; m_awsApplicationArn = std::forward<AwsApplicationArnT>(value); }
    template<typename AwsApplicationArnT = Aws::String>
    ListAppsRequest& WithAwsApplicationArn(AwsApplicationArnT&& value) { SetAwsApplicationArn(std::forward<AwsApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lower limit of the range that is used to filter applications based on their
     * last assessment times.</p>
     */
    inline const Aws::Utils::DateTime& GetFromLastAssessmentTime() const { return m_fromLastAssessmentTime; }
    inline bool FromLastAssessmentTimeHasBeenSet() const { return m_fromLastAssessmentTimeHasBeenSet; }
    template<typename FromLastAssessmentTimeT = Aws::Utils::DateTime>
    void SetFromLastAssessmentTime(FromLastAssessmentTimeT&& value) { m_fromLastAssessmentTimeHasBeenSet = true; m_fromLastAssessmentTime = std::forward<FromLastAssessmentTimeT>(value); }
    template<typename FromLastAssessmentTimeT = Aws::Utils::DateTime>
    ListAppsRequest& WithFromLastAssessmentTime(FromLastAssessmentTimeT&& value) { SetFromLastAssessmentTime(std::forward<FromLastAssessmentTimeT>(value)); return *this;}
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
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the one of the listed applications.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListAppsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ListAppsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application list is sorted based on the values of
     * <code>lastAppComplianceEvaluationTime</code> field. By default, application list
     * is sorted in ascending order. To sort the application list in descending order,
     * set this field to <code>True</code>.</p>
     */
    inline bool GetReverseOrder() const { return m_reverseOrder; }
    inline bool ReverseOrderHasBeenSet() const { return m_reverseOrderHasBeenSet; }
    inline void SetReverseOrder(bool value) { m_reverseOrderHasBeenSet = true; m_reverseOrder = value; }
    inline ListAppsRequest& WithReverseOrder(bool value) { SetReverseOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Upper limit of the range that is used to filter the applications based on
     * their last assessment times.</p>
     */
    inline const Aws::Utils::DateTime& GetToLastAssessmentTime() const { return m_toLastAssessmentTime; }
    inline bool ToLastAssessmentTimeHasBeenSet() const { return m_toLastAssessmentTimeHasBeenSet; }
    template<typename ToLastAssessmentTimeT = Aws::Utils::DateTime>
    void SetToLastAssessmentTime(ToLastAssessmentTimeT&& value) { m_toLastAssessmentTimeHasBeenSet = true; m_toLastAssessmentTime = std::forward<ToLastAssessmentTimeT>(value); }
    template<typename ToLastAssessmentTimeT = Aws::Utils::DateTime>
    ListAppsRequest& WithToLastAssessmentTime(ToLastAssessmentTimeT&& value) { SetToLastAssessmentTime(std::forward<ToLastAssessmentTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_awsApplicationArn;
    bool m_awsApplicationArnHasBeenSet = false;

    Aws::Utils::DateTime m_fromLastAssessmentTime{};
    bool m_fromLastAssessmentTimeHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_reverseOrder{false};
    bool m_reverseOrderHasBeenSet = false;

    Aws::Utils::DateTime m_toLastAssessmentTime{};
    bool m_toLastAssessmentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
