/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateRecommenderRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateRecommenderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecommender"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the recommender.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRecommenderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination domain dataset group for
     * the recommender.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    CreateRecommenderRequest& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recipe that the recommender will use.
     * For a recommender, a recipe is a Domain dataset group use case. Only Domain
     * dataset group use cases can be used to create a recommender. For information
     * about use cases see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/domain-use-cases.html">Choosing
     * recommender use cases</a>. </p>
     */
    inline const Aws::String& GetRecipeArn() const { return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    template<typename RecipeArnT = Aws::String>
    void SetRecipeArn(RecipeArnT&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::forward<RecipeArnT>(value); }
    template<typename RecipeArnT = Aws::String>
    CreateRecommenderRequest& WithRecipeArn(RecipeArnT&& value) { SetRecipeArn(std::forward<RecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
    inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
    template<typename RecommenderConfigT = RecommenderConfig>
    void SetRecommenderConfig(RecommenderConfigT&& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = std::forward<RecommenderConfigT>(value); }
    template<typename RecommenderConfigT = RecommenderConfig>
    CreateRecommenderRequest& WithRecommenderConfig(RecommenderConfigT&& value) { SetRecommenderConfig(std::forward<RecommenderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/tagging-resources.html">tags</a>
     * to apply to the recommender.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRecommenderRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRecommenderRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    RecommenderConfig m_recommenderConfig;
    bool m_recommenderConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
