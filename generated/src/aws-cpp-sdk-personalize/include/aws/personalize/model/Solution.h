/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/SolutionConfig.h>
#include <aws/personalize/model/AutoMLResult.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/SolutionVersionSummary.h>
#include <aws/personalize/model/SolutionUpdateSummary.h>
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
   *  <p>By default, all new solutions use automatic training. With
   * automatic training, you incur training costs while your solution is active. To
   * avoid unnecessary costs, when you are finished you can <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_UpdateSolution.html">update
   * the solution</a> to turn off automatic training. For information about training
   * costs, see <a href="https://aws.amazon.com/personalize/pricing/">Amazon
   * Personalize pricing</a>.</p>  <p>An object that provides information
   * about a solution. A solution includes the custom recipe, customized parameters,
   * and trained models (Solution Versions) that Amazon Personalize uses to generate
   * recommendations. </p> <p>After you create a solution, you can’t change its
   * configuration. If you need to make changes, you can <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/cloning-solution.html">clone
   * the solution</a> with the Amazon Personalize console or create a new
   * one.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Solution">AWS
   * API Reference</a></p>
   */
  class Solution
  {
  public:
    AWS_PERSONALIZE_API Solution();
    AWS_PERSONALIZE_API Solution(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Solution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the solution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Solution& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Solution& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Solution& WithName(const char* value) { SetName(value); return *this;}
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
    inline Solution& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}
    inline Solution& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}
    inline Solution& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const{ return m_performHPO; }
    inline bool PerformHPOHasBeenSet() const { return m_performHPOHasBeenSet; }
    inline void SetPerformHPO(bool value) { m_performHPOHasBeenSet = true; m_performHPO = value; }
    inline Solution& WithPerformHPO(bool value) { SetPerformHPO(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>We don't recommend enabling automated machine learning. Instead,
     * match your use case to the available Amazon Personalize recipes. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/determining-use-case.html">Determining
     * your use case.</a> </p>  <p>When true, Amazon Personalize performs a
     * search for the best USER_PERSONALIZATION recipe from the list specified in the
     * solution configuration (<code>recipeArn</code> must not be specified). When
     * false (the default), Amazon Personalize uses <code>recipeArn</code> for
     * training.</p>
     */
    inline bool GetPerformAutoML() const{ return m_performAutoML; }
    inline bool PerformAutoMLHasBeenSet() const { return m_performAutoMLHasBeenSet; }
    inline void SetPerformAutoML(bool value) { m_performAutoMLHasBeenSet = true; m_performAutoML = value; }
    inline Solution& WithPerformAutoML(bool value) { SetPerformAutoML(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the solution automatically creates solution versions. The
     * default is <code>True</code> and the solution automatically creates new solution
     * versions every 7 days.</p> <p>For more information about auto training, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/customizing-solution-config.html">Creating
     * and configuring a solution</a>.</p>
     */
    inline bool GetPerformAutoTraining() const{ return m_performAutoTraining; }
    inline bool PerformAutoTrainingHasBeenSet() const { return m_performAutoTrainingHasBeenSet; }
    inline void SetPerformAutoTraining(bool value) { m_performAutoTrainingHasBeenSet = true; m_performAutoTraining = value; }
    inline Solution& WithPerformAutoTraining(bool value) { SetPerformAutoTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the recipe used to create the solution. This is required when
     * <code>performAutoML</code> is false.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }
    inline Solution& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}
    inline Solution& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}
    inline Solution& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that provides the
     * training data.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline Solution& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline Solution& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline Solution& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model. If no <code>eventType</code> is provided, Amazon Personalize uses all
     * interactions for training with equal weight regardless of type.</p>
     */
    inline const Aws::String& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const Aws::String& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(Aws::String&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline void SetEventType(const char* value) { m_eventTypeHasBeenSet = true; m_eventType.assign(value); }
    inline Solution& WithEventType(const Aws::String& value) { SetEventType(value); return *this;}
    inline Solution& WithEventType(Aws::String&& value) { SetEventType(std::move(value)); return *this;}
    inline Solution& WithEventType(const char* value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration properties for the solution.</p>
     */
    inline const SolutionConfig& GetSolutionConfig() const{ return m_solutionConfig; }
    inline bool SolutionConfigHasBeenSet() const { return m_solutionConfigHasBeenSet; }
    inline void SetSolutionConfig(const SolutionConfig& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = value; }
    inline void SetSolutionConfig(SolutionConfig&& value) { m_solutionConfigHasBeenSet = true; m_solutionConfig = std::move(value); }
    inline Solution& WithSolutionConfig(const SolutionConfig& value) { SetSolutionConfig(value); return *this;}
    inline Solution& WithSolutionConfig(SolutionConfig&& value) { SetSolutionConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline const AutoMLResult& GetAutoMLResult() const{ return m_autoMLResult; }
    inline bool AutoMLResultHasBeenSet() const { return m_autoMLResultHasBeenSet; }
    inline void SetAutoMLResult(const AutoMLResult& value) { m_autoMLResultHasBeenSet = true; m_autoMLResult = value; }
    inline void SetAutoMLResult(AutoMLResult&& value) { m_autoMLResultHasBeenSet = true; m_autoMLResult = std::move(value); }
    inline Solution& WithAutoMLResult(const AutoMLResult& value) { SetAutoMLResult(value); return *this;}
    inline Solution& WithAutoMLResult(AutoMLResult&& value) { SetAutoMLResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Solution& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Solution& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Solution& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline Solution& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline Solution& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline Solution& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline Solution& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline const SolutionVersionSummary& GetLatestSolutionVersion() const{ return m_latestSolutionVersion; }
    inline bool LatestSolutionVersionHasBeenSet() const { return m_latestSolutionVersionHasBeenSet; }
    inline void SetLatestSolutionVersion(const SolutionVersionSummary& value) { m_latestSolutionVersionHasBeenSet = true; m_latestSolutionVersion = value; }
    inline void SetLatestSolutionVersion(SolutionVersionSummary&& value) { m_latestSolutionVersionHasBeenSet = true; m_latestSolutionVersion = std::move(value); }
    inline Solution& WithLatestSolutionVersion(const SolutionVersionSummary& value) { SetLatestSolutionVersion(value); return *this;}
    inline Solution& WithLatestSolutionVersion(SolutionVersionSummary&& value) { SetLatestSolutionVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of the latest updates to the solution.</p>
     */
    inline const SolutionUpdateSummary& GetLatestSolutionUpdate() const{ return m_latestSolutionUpdate; }
    inline bool LatestSolutionUpdateHasBeenSet() const { return m_latestSolutionUpdateHasBeenSet; }
    inline void SetLatestSolutionUpdate(const SolutionUpdateSummary& value) { m_latestSolutionUpdateHasBeenSet = true; m_latestSolutionUpdate = value; }
    inline void SetLatestSolutionUpdate(SolutionUpdateSummary&& value) { m_latestSolutionUpdateHasBeenSet = true; m_latestSolutionUpdate = std::move(value); }
    inline Solution& WithLatestSolutionUpdate(const SolutionUpdateSummary& value) { SetLatestSolutionUpdate(value); return *this;}
    inline Solution& WithLatestSolutionUpdate(SolutionUpdateSummary&& value) { SetLatestSolutionUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

    bool m_performHPO;
    bool m_performHPOHasBeenSet = false;

    bool m_performAutoML;
    bool m_performAutoMLHasBeenSet = false;

    bool m_performAutoTraining;
    bool m_performAutoTrainingHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_eventType;
    bool m_eventTypeHasBeenSet = false;

    SolutionConfig m_solutionConfig;
    bool m_solutionConfigHasBeenSet = false;

    AutoMLResult m_autoMLResult;
    bool m_autoMLResultHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    SolutionVersionSummary m_latestSolutionVersion;
    bool m_latestSolutionVersionHasBeenSet = false;

    SolutionUpdateSummary m_latestSolutionUpdate;
    bool m_latestSolutionUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
