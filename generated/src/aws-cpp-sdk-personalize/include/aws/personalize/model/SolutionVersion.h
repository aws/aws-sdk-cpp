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
    AWS_PERSONALIZE_API SolutionVersion() = default;
    AWS_PERSONALIZE_API SolutionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the solution version.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SolutionVersion& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const { return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    template<typename SolutionVersionArnT = Aws::String>
    void SetSolutionVersionArn(SolutionVersionArnT&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::forward<SolutionVersionArnT>(value); }
    template<typename SolutionVersionArnT = Aws::String>
    SolutionVersion& WithSolutionVersionArn(SolutionVersionArnT&& value) { SetSolutionVersionArn(std::forward<SolutionVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const { return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    template<typename SolutionArnT = Aws::String>
    void SetSolutionArn(SolutionArnT&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::forward<SolutionArnT>(value); }
    template<typename SolutionArnT = Aws::String>
    SolutionVersion& WithSolutionArn(SolutionArnT&& value) { SetSolutionArn(std::forward<SolutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const { return m_performHPO; }
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
    inline bool GetPerformAutoML() const { return m_performAutoML; }
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }
    inline SolutionVersion& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the recipe used in the solution.</p>
     */
    inline const Aws::String& GetRecipeArn() const { return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    template<typename RecipeArnT = Aws::String>
    void SetRecipeArn(RecipeArnT&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::forward<RecipeArnT>(value); }
    template<typename RecipeArnT = Aws::String>
    SolutionVersion& WithRecipeArn(RecipeArnT&& value) { SetRecipeArn(std::forward<RecipeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    SolutionVersion& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group providing the training
     * data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const { return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    template<typename DatasetGroupArnT = Aws::String>
    void SetDatasetGroupArn(DatasetGroupArnT&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::forward<DatasetGroupArnT>(value); }
    template<typename DatasetGroupArnT = Aws::String>
    SolutionVersion& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline const SolutionConfig& GetSolutionConfig() const { return m_solutionConfig; }
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }
    template<typename SolutionConfigT = SolutionConfig>
    void SetSolutionConfig(SolutionConfigT&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::forward<SolutionConfigT>(value); }
    template<typename SolutionConfigT = SolutionConfig>
    SolutionVersion& WithSolutionConfig(SolutionConfigT&& value) { SetSolutionConfig(std::forward<SolutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time used to train the model. You are billed for the time it takes to
     * train a model. This field is visible only after Amazon Personalize successfully
     * trains a model.</p>
     */
    inline double GetTrainingHours() const { return m_trainingHours; }
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
    inline TrainingMode GetTrainingMode() const { return m_trainingMode; }
    inline bool TrainingModeHasBeenSet() const { return m_trainingModeHasBeenSet; }
    inline void SetTrainingMode(TrainingMode value) { m_trainingModeHasBeenSet = true; m_trainingMode = value; }
    inline SolutionVersion& WithTrainingMode(TrainingMode value) { SetTrainingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If hyperparameter optimization was performed, contains the hyperparameter
     * values of the best performing model.</p>
     */
    inline const TunedHPOParams& GetTunedHPOParams() const { return m_tunedHPOParams; }
    inline bool TunedHPOParamsHasBeenSet() const { return m_tunedHPOParamsHasBeenSet; }
    template<typename TunedHPOParamsT = TunedHPOParams>
    void SetTunedHPOParams(TunedHPOParamsT&& value) { m_tunedHPOParamsHasBeenSet = true; m_tunedHPOParams = std::forward<TunedHPOParamsT>(value); }
    template<typename TunedHPOParamsT = TunedHPOParams>
    SolutionVersion& WithTunedHPOParams(TunedHPOParamsT&& value) { SetTunedHPOParams(std::forward<TunedHPOParamsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING</p> </li> <li>
     * <p>CREATE IN_PROGRESS</p> </li> <li> <p>ACTIVE</p> </li> <li> <p>CREATE
     * FAILED</p> </li> <li> <p>CREATE STOPPING</p> </li> <li> <p>CREATE STOPPED</p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SolutionVersion& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If training a solution version fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    SolutionVersion& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that this version of the solution was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    SolutionVersion& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    SolutionVersion& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the solution version was created automatically or manually.</p>
     */
    inline TrainingType GetTrainingType() const { return m_trainingType; }
    inline bool TrainingTypeHasBeenSet() const { return m_trainingTypeHasBeenSet; }
    inline void SetTrainingType(TrainingType value) { m_trainingTypeHasBeenSet = true; m_trainingType = value; }
    inline SolutionVersion& WithTrainingType(TrainingType value) { SetTrainingType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

    bool m_performHPO{false};
    bool m_performHPOHasBeenSet = false;

    bool m_performAutoML{false};
    bool m_performAutoMLHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    SolutionConfig m_solutionConfig;
    bool m_solutionConfigHasBeenSet = false;

    double m_trainingHours{0.0};
    bool m_trainingHoursHasBeenSet = false;

    TrainingMode m_trainingMode{TrainingMode::NOT_SET};
    bool m_trainingModeHasBeenSet = false;

    TunedHPOParams m_tunedHPOParams;
    bool m_tunedHPOParamsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    TrainingType m_trainingType{TrainingType::NOT_SET};
    bool m_trainingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
