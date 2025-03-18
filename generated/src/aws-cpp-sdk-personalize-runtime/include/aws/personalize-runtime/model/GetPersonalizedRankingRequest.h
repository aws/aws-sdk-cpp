/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/personalize-runtime/PersonalizeRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetPersonalizedRankingRequest : public PersonalizeRuntimeRequest
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPersonalizedRanking"; }

    AWS_PERSONALIZERUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the campaign to use for generating the
     * personalized ranking.</p>
     */
    inline const Aws::String& GetCampaignArn() const { return m_campaignArn; }
    inline bool CampaignArnHasBeenSet() const { return m_campaignArnHasBeenSet; }
    template<typename CampaignArnT = Aws::String>
    void SetCampaignArn(CampaignArnT&& value) { m_campaignArnHasBeenSet = true; m_campaignArn = std::forward<CampaignArnT>(value); }
    template<typename CampaignArnT = Aws::String>
    GetPersonalizedRankingRequest& WithCampaignArn(CampaignArnT&& value) { SetCampaignArn(std::forward<CampaignArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of items (by <code>itemId</code>) to rank. If an item was not included
     * in the training dataset, the item is appended to the end of the reranked list.
     * If you are including metadata in recommendations, the maximum is 50. Otherwise,
     * the maximum is 500.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputList() const { return m_inputList; }
    inline bool InputListHasBeenSet() const { return m_inputListHasBeenSet; }
    template<typename InputListT = Aws::Vector<Aws::String>>
    void SetInputList(InputListT&& value) { m_inputListHasBeenSet = true; m_inputList = std::forward<InputListT>(value); }
    template<typename InputListT = Aws::Vector<Aws::String>>
    GetPersonalizedRankingRequest& WithInputList(InputListT&& value) { SetInputList(std::forward<InputListT>(value)); return *this;}
    template<typename InputListT = Aws::String>
    GetPersonalizedRankingRequest& AddInputList(InputListT&& value) { m_inputListHasBeenSet = true; m_inputList.emplace_back(std::forward<InputListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user for which you want the campaign to provide a personalized
     * ranking.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    GetPersonalizedRankingRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual metadata to use when getting recommendations. Contextual
     * metadata includes any interaction information that might be relevant when
     * getting a user's recommendations, such as the user's current location or device
     * type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::Map<Aws::String, Aws::String>>
    GetPersonalizedRankingRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    template<typename ContextKeyT = Aws::String, typename ContextValueT = Aws::String>
    GetPersonalizedRankingRequest& AddContext(ContextKeyT&& key, ContextValueT&& value) {
      m_contextHasBeenSet = true; m_context.emplace(std::forward<ContextKeyT>(key), std::forward<ContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a filter you created to include items or
     * exclude items from recommendations for a given user. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/filter.html">Filtering
     * Recommendations</a>.</p>
     */
    inline const Aws::String& GetFilterArn() const { return m_filterArn; }
    inline bool FilterArnHasBeenSet() const { return m_filterArnHasBeenSet; }
    template<typename FilterArnT = Aws::String>
    void SetFilterArn(FilterArnT&& value) { m_filterArnHasBeenSet = true; m_filterArn = std::forward<FilterArnT>(value); }
    template<typename FilterArnT = Aws::String>
    GetPersonalizedRankingRequest& WithFilterArn(FilterArnT&& value) { SetFilterArn(std::forward<FilterArnT>(value)); return *this;}
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
     * Recommendations</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilterValues() const { return m_filterValues; }
    inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
    template<typename FilterValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetFilterValues(FilterValuesT&& value) { m_filterValuesHasBeenSet = true; m_filterValues = std::forward<FilterValuesT>(value); }
    template<typename FilterValuesT = Aws::Map<Aws::String, Aws::String>>
    GetPersonalizedRankingRequest& WithFilterValues(FilterValuesT&& value) { SetFilterValues(std::forward<FilterValuesT>(value)); return *this;}
    template<typename FilterValuesKeyT = Aws::String, typename FilterValuesValueT = Aws::String>
    GetPersonalizedRankingRequest& AddFilterValues(FilterValuesKeyT&& key, FilterValuesValueT&& value) {
      m_filterValuesHasBeenSet = true; m_filterValues.emplace(std::forward<FilterValuesKeyT>(key), std::forward<FilterValuesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If you enabled metadata in recommendations when you created or updated the
     * campaign, specify metadata columns from your Items dataset to include in the
     * personalized ranking. The map key is <code>ITEMS</code> and the value is a list
     * of column names from your Items dataset. The maximum number of columns you can
     * provide is 10.</p> <p> For information about enabling metadata for a campaign,
     * see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/campaigns.html#create-campaign-return-metadata">Enabling
     * metadata in recommendations for a campaign</a>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMetadataColumns() const { return m_metadataColumns; }
    inline bool MetadataColumnsHasBeenSet() const { return m_metadataColumnsHasBeenSet; }
    template<typename MetadataColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetMetadataColumns(MetadataColumnsT&& value) { m_metadataColumnsHasBeenSet = true; m_metadataColumns = std::forward<MetadataColumnsT>(value); }
    template<typename MetadataColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    GetPersonalizedRankingRequest& WithMetadataColumns(MetadataColumnsT&& value) { SetMetadataColumns(std::forward<MetadataColumnsT>(value)); return *this;}
    template<typename MetadataColumnsKeyT = Aws::String, typename MetadataColumnsValueT = Aws::Vector<Aws::String>>
    GetPersonalizedRankingRequest& AddMetadataColumns(MetadataColumnsKeyT&& key, MetadataColumnsValueT&& value) {
      m_metadataColumnsHasBeenSet = true; m_metadataColumns.emplace(std::forward<MetadataColumnsKeyT>(key), std::forward<MetadataColumnsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_campaignArn;
    bool m_campaignArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputList;
    bool m_inputListHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;

    Aws::String m_filterArn;
    bool m_filterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filterValues;
    bool m_filterValuesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_metadataColumns;
    bool m_metadataColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
