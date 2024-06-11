﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/PersonalizeRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize-runtime/model/Promotion.h>
#include <utility>

namespace Aws
{
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   */
  class GetRecommendationsRequest : public PersonalizeRuntimeRequest
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommendations"; }

    AWS_PERSONALIZERUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for getting
     * recommendations.</p>
     */
    inline const Aws::String& GetCampaignArn() const{ return m_campaignArn; }
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }
    inline void SetCampaignArn(const Aws::String& value) { m_campaignArnHasBeenSet = true; m_campaignArn = value; }
    inline void SetCampaignArn(Aws::String&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::move(value); }
    inline void SetCampaignArn(const char* value) { m_campaignArnHasBeenSet = true; m_campaignArn.assign(value); }
    inline GetRecommendationsRequest& WithCampaignArn(const Aws::String& value) { SetCampaignArn(value); return *this;}
    inline GetRecommendationsRequest& WithCampaignArn(Aws::String&& value) { SetCampaignArn(std::move(value)); return *this;}
    inline GetRecommendationsRequest& WithCampaignArn(const char* value) { SetCampaignArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The item ID to provide recommendations for.</p> <p>Required for
     * <code>RELATED_ITEMS</code> recipe type.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }
    inline GetRecommendationsRequest& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}
    inline GetRecommendationsRequest& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}
    inline GetRecommendationsRequest& WithItemId(const char* value) { SetItemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user ID to provide recommendations for.</p> <p>Required for
     * <code>USER_PERSONALIZATION</code> recipe type.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline GetRecommendationsRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetRecommendationsRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetRecommendationsRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of results to return. The default is 25. If you are including
     * metadata in recommendations, the maximum is 50. Otherwise, the maximum is
     * 500.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline bool NumResultsHasBeenSet() const { return m_numResultsHasBeenSet; }
    inline void SetNumResults(int value) { m_numResultsHasBeenSet = true; m_numResults = value; }
    inline GetRecommendationsRequest& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline GetRecommendationsRequest& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}
    inline GetRecommendationsRequest& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}
    inline GetRecommendationsRequest& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    inline GetRecommendationsRequest& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline GetRecommendationsRequest& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline GetRecommendationsRequest& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
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
    inline GetRecommendationsRequest& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}
    inline GetRecommendationsRequest& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}
    inline GetRecommendationsRequest& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values to use when filtering recommendations. For each placeholder
     * parameter in your filter expression, provide the parameter name (in matching
     * case) as a key and the filter value(s) as the corresponding value. Separate
     * multiple values for one parameter with a comma. </p> <p>For filter expressions
     * that use an <code>INCLUDE</code> element to include items, you must provide
     * values for all parameters that are defined in the expression. For filters with
     * expressions that use an <code>EXCLUDE</code> element to exclude items, you can
     * omit the <code>filter-values</code>.In this case, Amazon Personalize doesn't use
     * that portion of the expression to filter recommendations.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * recommendations and user segments</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilterValues() const{ return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    inline void SetFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { m_filterValuesHasBeenSet = true; m_filterValues = value; }
    inline void SetFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::move(value); }
    inline GetRecommendationsRequest& WithFilterValues(const Aws::Map<Aws::String, Aws::String>& value) { SetFilterValues(value); return *this;}
    inline GetRecommendationsRequest& WithFilterValues(Aws::Map<Aws::String, Aws::String>&& value) { SetFilterValues(std::move(value)); return *this;}
    inline GetRecommendationsRequest& AddFilterValues(const Aws::String& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }
    inline GetRecommendationsRequest& AddFilterValues(Aws::String&& key, const Aws::String& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }
    inline GetRecommendationsRequest& AddFilterValues(const Aws::String& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddFilterValues(Aws::String&& key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddFilterValues(const char* key, Aws::String&& value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddFilterValues(Aws::String&& key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::move(key), value); return *this; }
    inline GetRecommendationsRequest& AddFilterValues(const char* key, const char* value) { m_filterValuesHasBeenSet = true; m_filterValues.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to use to get
     * recommendations. Provide a recommender ARN if you created a Domain dataset group
     * with a recommender for a domain use case.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }
    inline bool RecommenderArnHasBeenSet() const { return m_recommenderArnHasBeenSet; }
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = value; }
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::move(value); }
    inline void SetRecommenderArn(const char* value) { m_recommenderArnHasBeenSet = true; m_recommenderArn.assign(value); }
    inline GetRecommendationsRequest& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}
    inline GetRecommendationsRequest& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}
    inline GetRecommendationsRequest& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The promotions to apply to the recommendation request. A promotion defines
     * additional business rules that apply to a configurable subset of recommended
     * items.</p>
     */
    inline const Aws::Vector<Promotion>& GetPromotions() const{ return m_promotions; }
    inline bool PromotionsHasBeenSet() const { return m_promotionsHasBeenSet; }
    inline void SetPromotions(const Aws::Vector<Promotion>& value) { m_promotionsHasBeenSet = true; m_promotions = value; }
    inline void SetPromotions(Aws::Vector<Promotion>&& value) { m_promotionsHasBeenSet = true; m_promotions = std::move(value); }
    inline GetRecommendationsRequest& WithPromotions(const Aws::Vector<Promotion>& value) { SetPromotions(value); return *this;}
    inline GetRecommendationsRequest& WithPromotions(Aws::Vector<Promotion>&& value) { SetPromotions(std::move(value)); return *this;}
    inline GetRecommendationsRequest& AddPromotions(const Promotion& value) { m_promotionsHasBeenSet = true; m_promotions.push_back(value); return *this; }
    inline GetRecommendationsRequest& AddPromotions(Promotion&& value) { m_promotionsHasBeenSet = true; m_promotions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you enabled metadata in recommendations when you created or updated the
     * campaign or recommender, specify the metadata columns from your Items dataset to
     * include in item recommendations. The map key is <code>ITEMS</code> and the value
     * is a list of column names from your Items dataset. The maximum number of columns
     * you can provide is 10.</p> <p> For information about enabling metadata for a
     * campaign, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/campaigns.html#create-campaign-return-metadata">Enabling
     * metadata in recommendations for a campaign</a>. For information about enabling
     * metadata for a recommender, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-recommenders.html#create-recommender-return-metadata">Enabling
     * metadata in recommendations for a recommender</a>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMetadataColumns() const{ return m_metadataColumns; }
    inline bool MetadataColumnsHasBeenSet() const { return m_metadataColumnsHasBeenSet; }
    inline void SetMetadataColumns(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns = value; }
    inline void SetMetadataColumns(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns = std::move(value); }
    inline GetRecommendationsRequest& WithMetadataColumns(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMetadataColumns(value); return *this;}
    inline GetRecommendationsRequest& WithMetadataColumns(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMetadataColumns(std::move(value)); return *this;}
    inline GetRecommendationsRequest& AddMetadataColumns(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(key, value); return *this; }
    inline GetRecommendationsRequest& AddMetadataColumns(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(std::move(key), value); return *this; }
    inline GetRecommendationsRequest& AddMetadataColumns(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(key, std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddMetadataColumns(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(std::move(key), std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddMetadataColumns(const char* key, Aws::Vector<Aws::String>&& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(key, std::move(value)); return *this; }
    inline GetRecommendationsRequest& AddMetadataColumns(const char* key, const Aws::Vector<Aws::String>& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    int m_numResults;
    bool m_numResultsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;

    Aws::Vector<Promotion> m_promotions;
    bool m_promotionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_metadataColumns;
    bool m_metadataColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
