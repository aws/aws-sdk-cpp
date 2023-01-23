/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobObjective.h>
#include <aws/sagemaker/model/ProblemType.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The resolved attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResolvedAttributes">AWS
   * API Reference</a></p>
   */
  class ResolvedAttributes
  {
  public:
    AWS_SAGEMAKER_API ResolvedAttributes();
    AWS_SAGEMAKER_API ResolvedAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResolvedAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const{ return m_autoMLJobObjective; }

    
    inline bool AutoMLJobObjectiveHasBeenSet() const { return m_autoMLJobObjectiveHasBeenSet; }

    
    inline void SetAutoMLJobObjective(const AutoMLJobObjective& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = value; }

    
    inline void SetAutoMLJobObjective(AutoMLJobObjective&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::move(value); }

    
    inline ResolvedAttributes& WithAutoMLJobObjective(const AutoMLJobObjective& value) { SetAutoMLJobObjective(value); return *this;}

    
    inline ResolvedAttributes& WithAutoMLJobObjective(AutoMLJobObjective&& value) { SetAutoMLJobObjective(std::move(value)); return *this;}


    /**
     * <p>The problem type.</p>
     */
    inline const ProblemType& GetProblemType() const{ return m_problemType; }

    /**
     * <p>The problem type.</p>
     */
    inline bool ProblemTypeHasBeenSet() const { return m_problemTypeHasBeenSet; }

    /**
     * <p>The problem type.</p>
     */
    inline void SetProblemType(const ProblemType& value) { m_problemTypeHasBeenSet = true; m_problemType = value; }

    /**
     * <p>The problem type.</p>
     */
    inline void SetProblemType(ProblemType&& value) { m_problemTypeHasBeenSet = true; m_problemType = std::move(value); }

    /**
     * <p>The problem type.</p>
     */
    inline ResolvedAttributes& WithProblemType(const ProblemType& value) { SetProblemType(value); return *this;}

    /**
     * <p>The problem type.</p>
     */
    inline ResolvedAttributes& WithProblemType(ProblemType&& value) { SetProblemType(std::move(value)); return *this;}


    
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const{ return m_completionCriteria; }

    
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }

    
    inline void SetCompletionCriteria(const AutoMLJobCompletionCriteria& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = value; }

    
    inline void SetCompletionCriteria(AutoMLJobCompletionCriteria&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::move(value); }

    
    inline ResolvedAttributes& WithCompletionCriteria(const AutoMLJobCompletionCriteria& value) { SetCompletionCriteria(value); return *this;}

    
    inline ResolvedAttributes& WithCompletionCriteria(AutoMLJobCompletionCriteria&& value) { SetCompletionCriteria(std::move(value)); return *this;}

  private:

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet = false;

    ProblemType m_problemType;
    bool m_problemTypeHasBeenSet = false;

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
