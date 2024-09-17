/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides information about a recipe. Each recipe provides an algorithm that
   * Amazon Personalize uses in model training when you use the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_CreateSolution.html">CreateSolution</a>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/Recipe">AWS
   * API Reference</a></p>
   */
  class Recipe
  {
  public:
    AWS_PERSONALIZE_API Recipe();
    AWS_PERSONALIZE_API Recipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Recipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the recipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Recipe& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Recipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Recipe& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recipe.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }
    inline Recipe& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}
    inline Recipe& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}
    inline Recipe& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm that Amazon Personalize uses
     * to train the model.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }
    inline bool AlgorithmArnHasBeenSet() const { return m_algorithmArnHasBeenSet; }
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = value; }
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArnHasBeenSet = true; m_algorithmArn = std::move(value); }
    inline void SetAlgorithmArn(const char* value) { m_algorithmArnHasBeenSet = true; m_algorithmArn.assign(value); }
    inline Recipe& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}
    inline Recipe& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}
    inline Recipe& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the FeatureTransformation object.</p>
     */
    inline const Aws::String& GetFeatureTransformationArn() const{ return m_featureTransformationArn; }
    inline bool FeatureTransformationArnHasBeenSet() const { return m_featureTransformationArnHasBeenSet; }
    inline void SetFeatureTransformationArn(const Aws::String& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = value; }
    inline void SetFeatureTransformationArn(Aws::String&& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = std::move(value); }
    inline void SetFeatureTransformationArn(const char* value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn.assign(value); }
    inline Recipe& WithFeatureTransformationArn(const Aws::String& value) { SetFeatureTransformationArn(value); return *this;}
    inline Recipe& WithFeatureTransformationArn(Aws::String&& value) { SetFeatureTransformationArn(std::move(value)); return *this;}
    inline Recipe& WithFeatureTransformationArn(const char* value) { SetFeatureTransformationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the recipe.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Recipe& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Recipe& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Recipe& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the recipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Recipe& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Recipe& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Recipe& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the recipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline Recipe& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline Recipe& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One of the following values:</p> <ul> <li> <p>PERSONALIZED_RANKING</p> </li>
     * <li> <p>RELATED_ITEMS</p> </li> <li> <p>USER_PERSONALIZATION</p> </li> </ul>
     */
    inline const Aws::String& GetRecipeType() const{ return m_recipeType; }
    inline bool RecipeTypeHasBeenSet() const { return m_recipeTypeHasBeenSet; }
    inline void SetRecipeType(const Aws::String& value) { m_recipeTypeHasBeenSet = true; m_recipeType = value; }
    inline void SetRecipeType(Aws::String&& value) { m_recipeTypeHasBeenSet = true; m_recipeType = std::move(value); }
    inline void SetRecipeType(const char* value) { m_recipeTypeHasBeenSet = true; m_recipeType.assign(value); }
    inline Recipe& WithRecipeType(const Aws::String& value) { SetRecipeType(value); return *this;}
    inline Recipe& WithRecipeType(Aws::String&& value) { SetRecipeType(std::move(value)); return *this;}
    inline Recipe& WithRecipeType(const char* value) { SetRecipeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the recipe was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline Recipe& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline Recipe& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_algorithmArn;
    bool m_algorithmArnHasBeenSet = false;

    Aws::String m_featureTransformationArn;
    bool m_featureTransformationArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_recipeType;
    bool m_recipeTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
