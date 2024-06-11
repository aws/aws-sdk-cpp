/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/personalize/model/Domain.h>
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
   * <p>Provides a summary of the properties of a recipe. For a complete listing,
   * call the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeRecipe.html">DescribeRecipe</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/RecipeSummary">AWS
   * API Reference</a></p>
   */
  class RecipeSummary
  {
  public:
    AWS_PERSONALIZE_API RecipeSummary();
    AWS_PERSONALIZE_API RecipeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API RecipeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RecipeSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RecipeSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RecipeSummary& WithName(const char* value) { SetName(value); return *this;}
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
    inline RecipeSummary& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}
    inline RecipeSummary& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}
    inline RecipeSummary& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}
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
    inline RecipeSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline RecipeSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline RecipeSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the recipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline RecipeSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline RecipeSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the recipe was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline RecipeSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline RecipeSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of the recipe (if the recipe is a Domain dataset group use
     * case).</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline RecipeSummary& WithDomain(const Domain& value) { SetDomain(value); return *this;}
    inline RecipeSummary& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
