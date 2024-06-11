/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/PersonalizeRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   */
  class GetActionRecommendationsRequest : public PersonalizeRuntimeRequest
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetActionRecommendations"; }

    AWS_PERSONALIZERUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting action
     * recommendations. This campaign must deploy a solution version trained with a
     * PERSONALIZED_ACTIONS recipe.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }
    inline GetActionRecommendationsRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}
    inline GetActionRecommendationsRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}
    inline GetActionRecommendationsRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID of the user to provide action recommendations for.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline GetActionRecommendationsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetActionRecommendationsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetActionRecommendationsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to return. The default is 5. The maximum is 100.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline GetActionRecommendationsRequest& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the filter to apply to the returned recommendations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p> <p>When using this parameter, be sure the filter
     * resource is <code>ACTIVE</code>.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    inline void SetFilterArn(const Aws::String& value) { m_filterArnHasBeenSet = true; m_filterArn = value; }
    inline void SetFilterArn(Aws::String&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::move(value); }
    inline void SetFilterArn(const char* value) { m_filterArnHasBeenSet = true; m_filterArn.assign(value); }
    inline GetActionRecommendationsRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}
    inline GetActionRecommendationsRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}
    inline GetActionRecommendationsRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include actions, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude actions, you can
     * omit the <code>filter-values</code>. In this case, Amazon Personalize doesn't
     * use that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * recommendations and user segments</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilterValues() const{ return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    inline void SetFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }
    inline void SetFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::move(value); }
    inline GetActionRecommendationsRequest& WithFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { SetFilterValues(value); return *this;}
    inline GetActionRecommendationsRequest& WithFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { SetFilterValues(std::move(value)); return *this;}
    inline GetActionRecommendationsRequest& AddFilterValues(const Aws::String& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }
    inline GetActionRecommendationsRequest& AddFilterValues(Aws::String&& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }
    inline GetActionRecommendationsRequest& AddFilterValues(const Aws::String& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }
    inline GetActionRecommendationsRequest& AddFilterValues(Aws::String&& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), std::move(value)); return *this; }
    inline GetActionRecommendationsRequest& AddFilterValues(const char* key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }
    inline GetActionRecommendationsRequest& AddFilterValues(Aws::String&& key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }
    inline GetActionRecommendationsRequest& AddFilterValues(const char* key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    int m_numResults;
    bool m_numResultsHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
