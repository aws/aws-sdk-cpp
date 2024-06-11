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
#include <aws/personalize/model/TrainingType.h>
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


    ///@{
    /**
     * <p>The name of the solution version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SolutionVersion& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SolutionVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SolutionVersion& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }
    inline SolutionVersion& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline SolutionVersion& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline SolutionVersion& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }
    inline SolutionVersion& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}
    inline SolutionVersion& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}
    inline SolutionVersion& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }
    inline SolutionVersion& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, Amazon Personalize searches for the most optimal recipe according
     * to the solution configuration. When false (the default), Amazon Personalize uses
     * <code>recipeArn</code>.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }
    inline SolutionVersion& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }
    inline SolutionVersion& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}
    inline SolutionVersion& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}
    inline SolutionVersion& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline SolutionVersion& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline SolutionVersion& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline SolutionVersion& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline SolutionVersion& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline SolutionVersion& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline SolutionVersion& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline const SolutionConfig& GetSolutionConfig() const{ return m_solutionConfig; }
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }
    inline void SetSolutionConfig(const SolutionConfig& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = value; }
    inline void SetSolutionConfig(SolutionConfig&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::move(value); }
    inline SolutionVersion& WithSolutionConfig(const SolutionConfig& value) { SetSolutionConfig(value); return *this;}
    inline SolutionVersion& WithSolutionConfig(SolutionConfig&& value) { SetSolutionConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time used to train the model. You are billed for the time it takes to
     * train a model. This field is visible only after Amazon Personalize successfully
     * trains a model.</p>
     */
    inline double GetTrainingHours() const{ return m_trainingHours; }
    inline bool TrainingHoursHasBeenSet() const { return m_trainingHoursHasBeenSet; }
    inline void SetTrainingHours(double value) { m_trainingHoursHasBeenSet = true; m_trainingHours = value; }
    inline SolutionVersion& WithTrainingHours(double value) { SetTrainingHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of training to be performed when creating the solution version. A
     * <code>FULL</code> training considers all of the data in your dataset group. An
     * <code>UPDATE</code> processes only the data that has changed since the latest
     * training. Only solution versions created with the User-Personalization recipe
     * can use <code>UPDATE</code>. </p>
     */
    inline const TrainingMode& GetTrainingMode() const{ return m_trainingMode; }
    inline bool TrainingModeHasBeenSet() const { return m_trainingModeHasBeenSet; }
    inline void SetTrainingMode(const TrainingMode& value) { m_trainingModeHasBeenSet = true; m_trainingMode = value; }
    inline void SetTrainingMode(TrainingMode&& value) { m_trainingModeHasBeenSet = true; m_trainingMode = std::move(value); }
    inline SolutionVersion& WithTrainingMode(const TrainingMode& value) { SetTrainingMode(value); return *this;}
    inline SolutionVersion& WithTrainingMode(TrainingMode&& value) { SetTrainingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline const TunedHPOParams& GetTunedHPOParams() const{ return m_tunedHPOParams; }
    inline bool TunedHPOParamsHasBeenSet() const { return m_tunedHPOParamsHasBeenSet; }
    inline void SetTunedHPOParams(const TunedHPOParams& value) { m_tunedHPOParamsHasBeenSet = true; m_tunedHPOParams = value; }
    inline void SetTunedHPOParams(TunedHPOParams&& value) { m_tunedHPOParamsHasBeenSet = true; m_tunedHPOParams = std::move(value); }
    inline SolutionVersion& WithTunedHPOParams(const TunedHPOParams& value) { SetTunedHPOParams(value); return *this;}
    inline SolutionVersion& WithTunedHPOParams(TunedHPOParams&& value) { SetTunedHPOParams(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SolutionVersion& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SolutionVersion& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SolutionVersion& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline SolutionVersion& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline SolutionVersion& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline SolutionVersion& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline SolutionVersion& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline SolutionVersion& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline SolutionVersion& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline SolutionVersion& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the solution version was created automatically or manually.</p>
     */
    inline const TrainingType& GetTrainingType() const{ return m_trainingType; }
    inline bool TrainingTypeHasBeenSet() const { return m_trainingTypeHasBeenSet; }
    inline void SetTrainingType(const TrainingType& value) { m_trainingTypeHasBeenSet = true; m_trainingType = value; }
    inline void SetTrainingType(TrainingType&& value) { m_trainingTypeHasBeenSet = true; m_trainingType = std::move(value); }
    inline SolutionVersion& WithTrainingType(const TrainingType& value) { SetTrainingType(value); return *this;}
    inline SolutionVersion& WithTrainingType(TrainingType&& value) { SetTrainingType(std::move(value)); return *this;}
    ///@}
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

    TrainingType m_trainingType;
    bool m_trainingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
