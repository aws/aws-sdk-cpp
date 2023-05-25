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
    AWS_PERSONALIZE_API CreateSolutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSolution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the solution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the solution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the solution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the solution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the solution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the solution.</p>
     */
    inline CreateSolutionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the solution.</p>
     */
    inline CreateSolutionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the solution.</p>
     */
    inline CreateSolutionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the specified or
     * selected recipe. The default is <code>false</code>.</p> <p>When performing
     * AutoML, this parameter is always <code>true</code> and you should not set it to
     * <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the specified or
     * selected recipe. The default is <code>false</code>.</p> <p>When performing
     * AutoML, this parameter is always <code>true</code> and you should not set it to
     * <code>false</code>.</p>
     */
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the specified or
     * selected recipe. The default is <code>false</code>.</p> <p>When performing
     * AutoML, this parameter is always <code>true</code> and you should not set it to
     * <code>false</code>.</p>
     */
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the specified or
     * selected recipe. The default is <code>false</code>.</p> <p>When performing
     * AutoML, this parameter is always <code>true</code> and you should not set it to
     * <code>false</code>.</p>
     */
    inline CreateSolutionRequest& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}


    /**
     * <p>Whether to perform automated machine learning (AutoML). The default is
     * <code>false</code>. For this case, you must specify <code>recipeArn</code>.</p>
     * <p>When set to <code>true</code>, Amazon Personalize analyzes your training data
     * and selects the optimal USER_PERSONALIZATION recipe and hyperparameters. In this
     * case, you must omit <code>recipeArn</code>. Amazon Personalize determines the
     * optimal recipe by running tests with different values for the hyperparameters.
     * AutoML lengthens the training process as compared to selecting a specific
     * recipe.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }

    /**
     * <p>Whether to perform automated machine learning (AutoML). The default is
     * <code>false</code>. For this case, you must specify <code>recipeArn</code>.</p>
     * <p>When set to <code>true</code>, Amazon Personalize analyzes your training data
     * and selects the optimal USER_PERSONALIZATION recipe and hyperparameters. In this
     * case, you must omit <code>recipeArn</code>. Amazon Personalize determines the
     * optimal recipe by running tests with different values for the hyperparameters.
     * AutoML lengthens the training process as compared to selecting a specific
     * recipe.</p>
     */
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }

    /**
     * <p>Whether to perform automated machine learning (AutoML). The default is
     * <code>false</code>. For this case, you must specify <code>recipeArn</code>.</p>
     * <p>When set to <code>true</code>, Amazon Personalize analyzes your training data
     * and selects the optimal USER_PERSONALIZATION recipe and hyperparameters. In this
     * case, you must omit <code>recipeArn</code>. Amazon Personalize determines the
     * optimal recipe by running tests with different values for the hyperparameters.
     * AutoML lengthens the training process as compared to selecting a specific
     * recipe.</p>
     */
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }

    /**
     * <p>Whether to perform automated machine learning (AutoML). The default is
     * <code>false</code>. For this case, you must specify <code>recipeArn</code>.</p>
     * <p>When set to <code>true</code>, Amazon Personalize analyzes your training data
     * and selects the optimal USER_PERSONALIZATION recipe and hyperparameters. In this
     * case, you must omit <code>recipeArn</code>. Amazon Personalize determines the
     * optimal recipe by running tests with different values for the hyperparameters.
     * AutoML lengthens the training process as compared to selecting a specific
     * recipe.</p>
     */
    inline CreateSolutionRequest& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}


    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline CreateSolutionRequest& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline CreateSolutionRequest& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the recipe to use for model training. Only specified when
     * <code>performAutoML</code> is false.</p>
     */
    inline CreateSolutionRequest& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline CreateSolutionRequest& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline CreateSolutionRequest& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline CreateSolutionRequest& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline CreateSolutionRequest& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline CreateSolutionRequest& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>When your have multiple event types (using an <code>EVENT_TYPE</code> schema
     * field), this parameter specifies which event type (for example, 'click' or
     * 'like') is used for training the model.</p> <p>If you do not provide an
     * <code>eventType</code>, Amazon Personalize will use all interactions for
     * training with equal weight regardless of type.</p>
     */
    inline CreateSolutionRequest& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>The configuration to use with the solution. When <code>performAutoML</code>
     * is set to true, Amazon Personalize only evaluates the <code>autoMLConfig</code>
     * section of the solution configuration.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline const SolutionConfig& GetSolutionConfig() const{ return m_solutionConfig; }

    /**
     * <p>The configuration to use with the solution. When <code>performAutoML</code>
     * is set to true, Amazon Personalize only evaluates the <code>autoMLConfig</code>
     * section of the solution configuration.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }

    /**
     * <p>The configuration to use with the solution. When <code>performAutoML</code>
     * is set to true, Amazon Personalize only evaluates the <code>autoMLConfig</code>
     * section of the solution configuration.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline void SetSolutionConfig(const SolutionConfig& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = value; }

    /**
     * <p>The configuration to use with the solution. When <code>performAutoML</code>
     * is set to true, Amazon Personalize only evaluates the <code>autoMLConfig</code>
     * section of the solution configuration.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline void SetSolutionConfig(SolutionConfig&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::move(value); }

    /**
     * <p>The configuration to use with the solution. When <code>performAutoML</code>
     * is set to true, Amazon Personalize only evaluates the <code>autoMLConfig</code>
     * section of the solution configuration.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline CreateSolutionRequest& WithSolutionConfig(const SolutionConfig& value) { SetSolutionConfig(value); return *this;}

    /**
     * <p>The configuration to use with the solution. When <code>performAutoML</code>
     * is set to true, Amazon Personalize only evaluates the <code>autoMLConfig</code>
     * section of the solution configuration.</p>  <p>Amazon Personalize doesn't
     * support configuring the <code>hpoObjective</code> at this time.</p> 
     */
    inline CreateSolutionRequest& WithSolutionConfig(SolutionConfig&& value) { SetSolutionConfig(std::move(value)); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline CreateSolutionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline CreateSolutionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline CreateSolutionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the solution.</p>
     */
    inline CreateSolutionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_performHPO;
    bool m_performHPOHasBeenSet = false;

    bool m_performAutoML;
    bool m_performAutoMLHasBeenSet = false;

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
