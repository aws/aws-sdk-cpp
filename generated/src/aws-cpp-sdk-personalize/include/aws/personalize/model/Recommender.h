/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderConfig.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/RecommenderUpdateSummary.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Describes a recommendation generator for a Domain dataset group. You create a
   * recommender in a Domain dataset group for a specific domain use case (domain
   * recipe), and specify the recommender in a <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_RS_GetRecommendations.html">GetRecommendations</a>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Recommender">AWS
   * API Reference</a></p>
   */
  class Recommender
  {
  public:
    AWS_PERSONALIZE_API Recommender();
    AWS_PERSONALIZE_API Recommender(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Recommender& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline bool RecommenderArnHasBeenSet() const { return m_recommenderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline void SetRecommenderArn(const char* value) { m_recommenderArnHasBeenSet = true; m_recommenderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline Recommender& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline Recommender& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline Recommender& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline Recommender& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline Recommender& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline Recommender& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The name of the recommender.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the recommender.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the recommender.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the recommender.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the recommender.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the recommender.</p>
     */
    inline Recommender& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the recommender.</p>
     */
    inline Recommender& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the recommender.</p>
     */
    inline Recommender& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline Recommender& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline Recommender& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for. </p>
     */
    inline Recommender& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}


    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline const RecommenderConfig& GetRecommenderConfig() const{ return m_recommenderConfig; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline void SetRecommenderConfig(const RecommenderConfig& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = value; }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline void SetRecommenderConfig(RecommenderConfig&& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = std::move(value); }

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline Recommender& WithRecommenderConfig(const RecommenderConfig& value) { SetRecommenderConfig(value); return *this;}

    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline Recommender& WithRecommenderConfig(RecommenderConfig&& value) { SetRecommenderConfig(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline Recommender& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline Recommender& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline Recommender& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline Recommender& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline Recommender& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline Recommender& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the recommender.</p> <p>A recommender can be in one of the
     * following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt;
     * ACTIVE -or- CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS
     * &gt; INACTIVE &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li>
     * <li> <p>DELETE PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline Recommender& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline Recommender& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline Recommender& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a recommender fails, the reason behind the failure.</p>
     */
    inline Recommender& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Provides a summary of the latest updates to the recommender. </p>
     */
    inline const RecommenderUpdateSummary& GetLatestRecommenderUpdate() const{ return m_latestRecommenderUpdate; }

    /**
     * <p>Provides a summary of the latest updates to the recommender. </p>
     */
    inline bool LatestRecommenderUpdateHasBeenSet() const { return m_latestRecommenderUpdateHasBeenSet; }

    /**
     * <p>Provides a summary of the latest updates to the recommender. </p>
     */
    inline void SetLatestRecommenderUpdate(const RecommenderUpdateSummary& value) { m_latestRecommenderUpdateHasBeenSet = true; m_latestRecommenderUpdate = value; }

    /**
     * <p>Provides a summary of the latest updates to the recommender. </p>
     */
    inline void SetLatestRecommenderUpdate(RecommenderUpdateSummary&& value) { m_latestRecommenderUpdateHasBeenSet = true; m_latestRecommenderUpdate = std::move(value); }

    /**
     * <p>Provides a summary of the latest updates to the recommender. </p>
     */
    inline Recommender& WithLatestRecommenderUpdate(const RecommenderUpdateSummary& value) { SetLatestRecommenderUpdate(value); return *this;}

    /**
     * <p>Provides a summary of the latest updates to the recommender. </p>
     */
    inline Recommender& WithLatestRecommenderUpdate(RecommenderUpdateSummary&& value) { SetLatestRecommenderUpdate(std::move(value)); return *this;}


    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetModelMetrics() const{ return m_modelMetrics; }

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline bool ModelMetricsHasBeenSet() const { return m_modelMetricsHasBeenSet; }

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline void SetModelMetrics(const Aws::Map<Aws::String, double>& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = value; }

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline void SetModelMetrics(Aws::Map<Aws::String, double>&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::move(value); }

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline Recommender& WithModelMetrics(const Aws::Map<Aws::String, double>& value) { SetModelMetrics(value); return *this;}

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline Recommender& WithModelMetrics(Aws::Map<Aws::String, double>&& value) { SetModelMetrics(std::move(value)); return *this;}

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline Recommender& AddModelMetrics(const Aws::String& key, double value) { m_modelMetricsHasBeenSet = true; m_modelMetrics.emplace(key, value); return *this; }

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline Recommender& AddModelMetrics(Aws::String&& key, double value) { m_modelMetricsHasBeenSet = true; m_modelMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides evaluation metrics that help you determine the performance of a
     * recommender. For more information, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/evaluating-recommenders.html">
     * Evaluating a recommender</a>.</p>
     */
    inline Recommender& AddModelMetrics(const char* key, double value) { m_modelMetricsHasBeenSet = true; m_modelMetrics.emplace(key, value); return *this; }

  private:

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    RecommenderConfig m_recommenderConfig;
    bool m_recommenderConfigHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    RecommenderUpdateSummary m_latestRecommenderUpdate;
    bool m_latestRecommenderUpdateHasBeenSet = false;

    Aws::Map<Aws::String, double> m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
