/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLJobObjective.h>
#include <aws/sagemaker/model/AutoMLJobCompletionCriteria.h>
#include <aws/sagemaker/model/AutoMLProblemTypeResolvedAttributes.h>
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
   * <p>The resolved attributes used to configure an AutoML job V2.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLResolvedAttributes">AWS
   * API Reference</a></p>
   */
  class AutoMLResolvedAttributes
  {
  public:
    AWS_SAGEMAKER_API AutoMLResolvedAttributes() = default;
    AWS_SAGEMAKER_API AutoMLResolvedAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLResolvedAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AutoMLJobObjective& GetAutoMLJobObjective() const { return m_autoMLJobObjective; }
    inline bool AutoMLJobObjectiveHasBeenSet() const { return m_autoMLJobObjectiveHasBeenSet; }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    void SetAutoMLJobObjective(AutoMLJobObjectiveT&& value) { m_autoMLJobObjectiveHasBeenSet = true; m_autoMLJobObjective = std::forward<AutoMLJobObjectiveT>(value); }
    template<typename AutoMLJobObjectiveT = AutoMLJobObjective>
    AutoMLResolvedAttributes& WithAutoMLJobObjective(AutoMLJobObjectiveT&& value) { SetAutoMLJobObjective(std::forward<AutoMLJobObjectiveT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AutoMLJobCompletionCriteria& GetCompletionCriteria() const { return m_completionCriteria; }
    inline bool CompletionCriteriaHasBeenSet() const { return m_completionCriteriaHasBeenSet; }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    void SetCompletionCriteria(CompletionCriteriaT&& value) { m_completionCriteriaHasBeenSet = true; m_completionCriteria = std::forward<CompletionCriteriaT>(value); }
    template<typename CompletionCriteriaT = AutoMLJobCompletionCriteria>
    AutoMLResolvedAttributes& WithCompletionCriteria(CompletionCriteriaT&& value) { SetCompletionCriteria(std::forward<CompletionCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the resolved attributes specific to a problem type.</p>
     */
    inline const AutoMLProblemTypeResolvedAttributes& GetAutoMLProblemTypeResolvedAttributes() const { return m_autoMLProblemTypeResolvedAttributes; }
    inline bool AutoMLProblemTypeResolvedAttributesHasBeenSet() const { return m_autoMLProblemTypeResolvedAttributesHasBeenSet; }
    template<typename AutoMLProblemTypeResolvedAttributesT = AutoMLProblemTypeResolvedAttributes>
    void SetAutoMLProblemTypeResolvedAttributes(AutoMLProblemTypeResolvedAttributesT&& value) { m_autoMLProblemTypeResolvedAttributesHasBeenSet = true; m_autoMLProblemTypeResolvedAttributes = std::forward<AutoMLProblemTypeResolvedAttributesT>(value); }
    template<typename AutoMLProblemTypeResolvedAttributesT = AutoMLProblemTypeResolvedAttributes>
    AutoMLResolvedAttributes& WithAutoMLProblemTypeResolvedAttributes(AutoMLProblemTypeResolvedAttributesT&& value) { SetAutoMLProblemTypeResolvedAttributes(std::forward<AutoMLProblemTypeResolvedAttributesT>(value)); return *this;}
    ///@}
  private:

    AutoMLJobObjective m_autoMLJobObjective;
    bool m_autoMLJobObjectiveHasBeenSet = false;

    AutoMLJobCompletionCriteria m_completionCriteria;
    bool m_completionCriteriaHasBeenSet = false;

    AutoMLProblemTypeResolvedAttributes m_autoMLProblemTypeResolvedAttributes;
    bool m_autoMLProblemTypeResolvedAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
