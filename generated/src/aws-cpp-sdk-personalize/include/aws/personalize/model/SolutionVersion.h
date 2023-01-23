/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionConfig.h>
#include <aws/personalize/model/TrainingMode.h>
#include <aws/personalize/model/TunedHPOParams.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{

  /**
   * <p>An object that provides information about a specific version of a <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_Solution.html">Solution</a>
   * in a Custom dataset group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionVersion">AWS
   * API Reference</a></p>
   */
  class SolutionVersion
  {
  public:
    AWS_PERSONALIZE_API SolutionVersion();
    AWS_PERSONALIZE_API SolutionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the solution version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the solution version.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the solution version.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the solution version.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the solution version.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the solution version.</p>
     */
    inline SolutionVersion& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the solution version.</p>
     */
    inline SolutionVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution version.</p>
     */
    inline SolutionVersion& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline SolutionVersion& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline SolutionVersion& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the solution version.</p>
     */
    inline SolutionVersion& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>The ARN of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline SolutionVersion& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline SolutionVersion& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline SolutionVersion& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}


    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }

    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline SolutionVersion& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}


    /**
     * <p>When true, Amazon Personalize searches for the most optimal recipe according
     * to the solution configuration. When false (the default), Amazon Personalize uses
     * <code>recipeArn</code>.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }

    /**
     * <p>When true, Amazon Personalize searches for the most optimal recipe according
     * to the solution configuration. When false (the default), Amazon Personalize uses
     * <code>recipeArn</code>.</p>
     */
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }

    /**
     * <p>When true, Amazon Personalize searches for the most optimal recipe according
     * to the solution configuration. When false (the default), Amazon Personalize uses
     * <code>recipeArn</code>.</p>
     */
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }

    /**
     * <p>When true, Amazon Personalize searches for the most optimal recipe according
     * to the solution configuration. When false (the default), Amazon Personalize uses
     * <code>recipeArn</code>.</p>
     */
    inline SolutionVersion& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}


    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline SolutionVersion& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline SolutionVersion& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline SolutionVersion& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline SolutionVersion& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline SolutionVersion& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}

    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline SolutionVersion& WithEventType(const char* value) { SetEventType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline SolutionVersion& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline SolutionVersion& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline SolutionVersion& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline const SolutionConfig& GetSolutionConfig() const{ return m_solutionConfig; }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline void SetSolutionConfig(const SolutionConfig& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = value; }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline void SetSolutionConfig(SolutionConfig&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::move(value); }

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline SolutionVersion& WithSolutionConfig(const SolutionConfig& value) { SetSolutionConfig(value); return *this;}

    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline SolutionVersion& WithSolutionConfig(SolutionConfig&& value) { SetSolutionConfig(std::move(value)); return *this;}


    /**
     * <p>The time used to train the model. You are billed for the time it takes to
     * train a model. This field is visible only after Amazon Personalize successfully
     * trains a model.</p>
     */
    inline double GetTrainingHours() const{ return m_trainingHours; }

    /**
     * <p>The time used to train the model. You are billed for the time it takes to
     * train a model. This field is visible only after Amazon Personalize successfully
     * trains a model.</p>
     */
    inline bool TrainingHoursHasBeenSet() const { return m_trainingHoursHasBeenSet; }

    /**
     * <p>The time used to train the model. You are billed for the time it takes to
     * train a model. This field is visible only after Amazon Personalize successfully
     * trains a model.</p>
     */
    inline void SetTrainingHours(double value) { m_trainingHoursHasBeenSet = true; m_trainingHours = value; }

    /**
     * <p>The time used to train the model. You are billed for the time it takes to
     * train a model. This field is visible only after Amazon Personalize successfully
     * trains a model.</p>
     */
    inline SolutionVersion& WithTrainingHours(double value) { SetTrainingHours(value); return *this;}


    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p> 
     */
    inline const TrainingMode& GetTrainingMode() const{ return m_trainingMode; }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p> 
     */
    inline bool TrainingModeHasBeenSet() const { return m_trainingModeHasBeenSet; }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p> 
     */
    inline void SetTrainingMode(const TrainingMode& value) { m_trainingModeHasBeenSet = true; m_trainingMode = value; }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p> 
     */
    inline void SetTrainingMode(TrainingMode&& value) { m_trainingModeHasBeenSet = true; m_trainingMode = std::move(value); }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p> 
     */
    inline SolutionVersion& WithTrainingMode(const TrainingMode& value) { SetTrainingMode(value); return *this;}

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p> 
     */
    inline SolutionVersion& WithTrainingMode(TrainingMode&& value) { SetTrainingMode(std::move(value)); return *this;}


    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline const TunedHPOParams& GetTunedHPOParams() const{ return m_tunedHPOParams; }

    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline bool TunedHPOParamsHasBeenSet() const { return m_tunedHPOParamsHasBeenSet; }

    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline void SetTunedHPOParams(const TunedHPOParams& value) { m_tunedHPOParamsHasBeenSet = true; m_tunedHPOParams = value; }

    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline void SetTunedHPOParams(TunedHPOParams&& value) { m_tunedHPOParamsHasBeenSet = true; m_tunedHPOParams = std::move(value); }

    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline SolutionVersion& WithTunedHPOParams(const TunedHPOParams& value) { SetTunedHPOParams(value); return *this;}

    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline SolutionVersion& WithTunedHPOParams(TunedHPOParams&& value) { SetTunedHPOParams(std::move(value)); return *this;}


    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline SolutionVersion& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline SolutionVersion& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline SolutionVersion& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline SolutionVersion& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline SolutionVersion& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline SolutionVersion& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline SolutionVersion& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline SolutionVersion& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline SolutionVersion& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline SolutionVersion& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

    bool m_performHPO;
    bool m_performHPOHasBeenSet = false;

    bool m_performAutoML;
    bool m_performAutoMLHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    SolutionConfig m_solutionConfig;
    bool m_solutionConfigHasBeenSet = false;

    double m_trainingHours;
    bool m_trainingHoursHasBeenSet = false;

    TrainingMode m_trainingMode;
    bool m_trainingModeHasBeenSet = false;

    TunedHPOParams m_tunedHPOParams;
    bool m_tunedHPOParamsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
