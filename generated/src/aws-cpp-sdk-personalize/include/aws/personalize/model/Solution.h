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
    AWS_PERSONALIZE_API Solution() = default;
    AWS_PERSONALIZE_API Solution(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Solution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the solution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Solution& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    Solution& WithSolutionArn(SolutionArnT&& value) { SetSolutionArn(std::forward<SolutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to perform hyperparameter optimization (HPO) on the chosen recipe.
     * The default is <code>false</code>.</p>
     */
    inline bool GetPerformHPO() const { return m_performHPO; }
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
    inline bool GetPerformAutoML() const { return m_performAutoML; }
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
    inline bool GetPerformAutoTraining() const { return m_performAutoTraining; }
    inline bool PerformAutoTrainingHasBeenSet() const { return m_performAutoTrainingHasBeenSet; }
    inline void SetPerformAutoTraining(bool value) { m_performAutoTrainingHasBeenSet = true; m_performAutoTraining = value; }
    inline Solution& WithPerformAutoTraining(bool value) { SetPerformAutoTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the recipe used to create the solution. This is required when
     * <code>performAutoML</code> is false.</p>
     */
    inline const Aws::String& GetRecipeArn() const { return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    template<typename RecipeArnT = Aws::String>
    void SetRecipeArn(RecipeArnT&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::forward<RecipeArnT>(value); }
    template<typename RecipeArnT = Aws::String>
    Solution& WithRecipeArn(RecipeArnT&& value) { SetRecipeArn(std::forward<RecipeArnT>(value)); return *this;}
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
    Solution& WithDatasetGroupArn(DatasetGroupArnT&& value) { SetDatasetGroupArn(std::forward<DatasetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event type (for example, 'click' or 'like') that is used for training the
     * model. If no <code>eventType</code> is provided, Amazon Personalize uses all
     * interactions for training with equal weight regardless of type.</p>
     */
    inline const Aws::String& GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    template<typename EventTypeT = Aws::String>
    void SetEventType(EventTypeT&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::forward<EventTypeT>(value); }
    template<typename EventTypeT = Aws::String>
    Solution& WithEventType(EventTypeT&& value) { SetEventType(std::forward<EventTypeT>(value)); return *this;}
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
    Solution& WithSolutionConfig(SolutionConfigT&& value) { SetSolutionConfig(std::forward<SolutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>performAutoML</code> is true, specifies the best recipe found.</p>
     */
    inline const AutoMLResult& GetAutoMLResult() const { return m_autoMLResult; }
    inline bool AutoMLResultHasBeenSet() const { return m_autoMLResultHasBeenSet; }
    template<typename AutoMLResultT = AutoMLResult>
    void SetAutoMLResult(AutoMLResultT&& value) { m_autoMLResultHasBeenSet = true; m_autoMLResult = std::forward<AutoMLResultT>(value); }
    template<typename AutoMLResultT = AutoMLResult>
    Solution& WithAutoMLResult(AutoMLResultT&& value) { SetAutoMLResult(std::forward<AutoMLResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the solution.</p> <p>A solution can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Solution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time (in Unix time) of the solution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    Solution& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
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
    Solution& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the latest version of the solution, including the status and the
     * ARN.</p>
     */
    inline const SolutionVersionSummary& GetLatestSolutionVersion() const { return m_latestSolutionVersion; }
    inline bool LatestSolutionVersionHasBeenSet() const { return m_latestSolutionVersionHasBeenSet; }
    template<typename LatestSolutionVersionT = SolutionVersionSummary>
    void SetLatestSolutionVersion(LatestSolutionVersionT&& value) { m_latestSolutionVersionHasBeenSet = true; m_latestSolutionVersion = std::forward<LatestSolutionVersionT>(value); }
    template<typename LatestSolutionVersionT = SolutionVersionSummary>
    Solution& WithLatestSolutionVersion(LatestSolutionVersionT&& value) { SetLatestSolutionVersion(std::forward<LatestSolutionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a summary of the latest updates to the solution.</p>
     */
    inline const SolutionUpdateSummary& GetLatestSolutionUpdate() const { return m_latestSolutionUpdate; }
    inline bool LatestSolutionUpdateHasBeenSet() const { return m_latestSolutionUpdateHasBeenSet; }
    template<typename LatestSolutionUpdateT = SolutionUpdateSummary>
    void SetLatestSolutionUpdate(LatestSolutionUpdateT&& value) { m_latestSolutionUpdateHasBeenSet = true; m_latestSolutionUpdate = std::forward<LatestSolutionUpdateT>(value); }
    template<typename LatestSolutionUpdateT = SolutionUpdateSummary>
    Solution& WithLatestSolutionUpdate(LatestSolutionUpdateT&& value) { SetLatestSolutionUpdate(std::forward<LatestSolutionUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

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

    AutoMLResult m_autoMLResult;
    bool m_autoMLResultHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    SolutionVersionSummary m_latestSolutionVersion;
    bool m_latestSolutionVersionHasBeenSet = false;

    SolutionUpdateSummary m_latestSolutionUpdate;
    bool m_latestSolutionUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
