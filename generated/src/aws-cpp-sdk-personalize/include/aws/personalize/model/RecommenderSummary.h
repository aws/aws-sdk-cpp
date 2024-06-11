/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderConfig.h>
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
   * <p>Provides a summary of the properties of the recommender.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/RecommenderSummary">AWS
   * API Reference</a></p>
   */
  class RecommenderSummary
  {
  public:
    AWS_PERSONALIZE_API RecommenderSummary();
    AWS_PERSONALIZE_API RecommenderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API RecommenderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the recommender.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RecommenderSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecommenderSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecommenderSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }
    inline bool RecommenderArnHasBeenSet() const { return m_recommenderArnHasBeenSet; }
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = value; }
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::move(value); }
    inline void SetRecommenderArn(const char* value) { m_recommenderArnHasBeenSet = true; m_recommenderArn.assign(value); }
    inline RecommenderSummary& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}
    inline RecommenderSummary& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}
    inline RecommenderSummary& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Domain dataset group that contains the
     * recommender.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }
    inline RecommenderSummary& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline RecommenderSummary& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline RecommenderSummary& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recipe (Domain dataset group use case)
     * that the recommender was created for.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }
    inline RecommenderSummary& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}
    inline RecommenderSummary& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}
    inline RecommenderSummary& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline const RecommenderConfig& GetRecommenderConfig() const{ return m_recommenderConfig; }
    inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
    inline void SetRecommenderConfig(const RecommenderConfig& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = value; }
    inline void SetRecommenderConfig(RecommenderConfig&& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = std::move(value); }
    inline RecommenderSummary& WithRecommenderConfig(const RecommenderConfig& value) { SetRecommenderConfig(value); return *this;}
    inline RecommenderSummary& WithRecommenderConfig(RecommenderConfig&& value) { SetRecommenderConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the recommender. A recommender can be in one of the following
     * states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p> </li> <li> <p>STOP PENDING &gt; STOP IN_PROGRESS &gt; INACTIVE
     * &gt; START PENDING &gt; START IN_PROGRESS &gt; ACTIVE</p> </li> <li> <p>DELETE
     * PENDING &gt; DELETE IN_PROGRESS</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline RecommenderSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline RecommenderSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline RecommenderSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the recommender was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline RecommenderSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline RecommenderSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the recommender was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline RecommenderSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline RecommenderSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    RecommenderConfig m_recommenderConfig;
    bool m_recommenderConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
