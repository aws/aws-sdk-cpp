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
   * <p>Provides a summary of the properties of a solution. For a complete listing,
   * call the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolution.html">DescribeSolution</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionSummary">AWS
   * API Reference</a></p>
   */
  class SolutionSummary
  {
  public:
    AWS_PERSONALIZE_API SolutionSummary();
    AWS_PERSONALIZE_API SolutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline SolutionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SolutionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SolutionSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }
    inline SolutionSummary& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}
    inline SolutionSummary& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}
    inline SolutionSummary& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}
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
    inline SolutionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SolutionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SolutionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline SolutionSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline SolutionSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline SolutionSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline SolutionSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recipe used by the solution.</p>
     */
    inline const Aws::String& GetRecipeArn() const{ return m_recipeArn; }
    inline bool RecipeArnHasBeenSet() const { return m_recipeArnHasBeenSet; }
    inline void SetRecipeArn(const Aws::String& value) { m_recipeArnHasBeenSet = true; m_recipeArn = value; }
    inline void SetRecipeArn(Aws::String&& value) { m_recipeArnHasBeenSet = true; m_recipeArn = std::move(value); }
    inline void SetRecipeArn(const char* value) { m_recipeArnHasBeenSet = true; m_recipeArn.assign(value); }
    inline SolutionSummary& WithRecipeArn(const Aws::String& value) { SetRecipeArn(value); return *this;}
    inline SolutionSummary& WithRecipeArn(Aws::String&& value) { SetRecipeArn(std::move(value)); return *this;}
    inline SolutionSummary& WithRecipeArn(const char* value) { SetRecipeArn(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_recipeArn;
    bool m_recipeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
