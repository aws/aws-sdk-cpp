/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionConfig.h>
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
  class CreateSolutionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateSolutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSolution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the solution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSolutionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the specified or
     * selected recipe. The default is <code>false</code>.</p> <p>When performing
     * AutoML, this parameter is always <code>true</code> and you should not set it to
     * <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const { return m_performHPO; }
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }
    inline CreateSolutionRequest& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>We don't recommend enabling automated machine learning. Instead,
     * match your use case to the available Amazon Personalize recipes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-predefined-recipes.html">Choosing
     * a recipe</a>.</p>  <p>Whether to perform automated machine learning
     * (AutoML). The default is <code>false</code>. For this case, you must specify
     * <code>recipeArn</code>.</p> <p>When set to <code>true</code>, Amazon Personalize
     * analyzes your training data and selects the optimal USER_PERSONALIZATION recipe
     * and hyperparameters. In this case, you must omit <code>recipeArn</code>. Amazon
     * Personalize determines the optimal recipe by running tests with different values
     * for the hyperparameters. AutoML lengthens the training process as compared to
     * selecting a specific recipe.</p>
     */
    inline bool GetPerformAutoML() const { return m_performAutoML; }
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }
    inline CreateSolutionRequest& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the solution uses automatic training to create new solution versions
     * (trained models). The default is <code>True</code> and the solution
     * automatically creates new solution versions every 7 days. You can change the
     * training frequency by specifying a <code>schedulingExpression</code> in the
     * <code>AutoTrainingConfig</code> as part of solution configuration. For more
     * information about automatic training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/solution-config-auto-training.html">Configuring
     * automatic training</a>.</p> <p> Automatic solution version creation starts
     * within one hour after the solution is ACTIVE. If you manually create a solution
     * version within the hour, the solution skips the first automatic training. </p>
     * <p> After training starts, you can get the solution version's Amazon Resource
     * Name (ARN) with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_ListSolutionVersions.html">ListSolutionVersions</a>
     * API operation. To get its status, use the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolutionVersion.html">DescribeSolutionVersion</a>.
     * </p>
     */
    inline bool GetPerformAutoTraining() const { return m_performAutoTraining; }
    inline bool PerformAutoTrainingHasBeenSet() const { return m_performAutoTrainingHasBeenSet; }
    inline void SetPerformAutoTraining(bool value) { m_performAutoTrainingHasBeenSet = true; m_performAutoTraining = value; }
    inline CreateSolutionRequest& WithPerformAutoTraining(bool value) { SetPerformAutoTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recipe to use for model training. This
     * is required when <code>performAutoML</code> is false. For information about
     * different Amazon Personalize recipes and their ARNs, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/working-with-predefined-recipes.html">Choosing
     * a recipe</a>. </p>
     */
    inline const Aws::String& GetRecipeArn() const { return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    template<typename RecipeArnT = Aws::String>
    void SetRecipeArn(RecipeArnT&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::forward<RecipeArnT>(value); }
    template<typename RecipeArnT = Aws::String>
    CreateSolutionRequest& WithRecipeArn(RecipeArnT&& value) { SetRecipeArn(std::forward<RecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    CreateSolutionRequest& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    CreateSolutionRequest& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration properties for the solution. When
     * <code>performAutoML</code> is set to true, Amazon Personalize only evaluates the
     * <code>autoMLConfig</code> section of the solution configuration.</p> 
     * <p>Amazon Personalize doesn't support configuring the <code>hpoObjective</code>
     * at this time.</p> 
     */
    inline const SolutionConfig& GetSolutionConfig() const { return m_solutionConfig; }
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }
    template<typename SolutionConfigT = SolutionConfig>
    void SetSolutionConfig(SolutionConfigT&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::forward<SolutionConfigT>(value); }
    template<typename SolutionConfigT = SolutionConfig>
    CreateSolutionRequest& WithSolutionConfig(SolutionConfigT&& value) { SetSolutionConfig(std::forward<SolutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSolutionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSolutionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_performHPO{false};
    bool m_performHPOHasBeenSet = false;

    bool m_performAutoML{false};
    bool m_performAutoMLHasBeenSet = false;

    bool m_performAutoTraining{false};
    bool m_performAutoTrainingHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    SolutionConfig m_solutionConfig;
    bool m_solutionConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
