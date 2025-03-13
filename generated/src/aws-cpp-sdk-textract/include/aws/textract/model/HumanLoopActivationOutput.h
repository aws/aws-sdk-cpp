/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Shows the results of the human in the loop evaluation. If there is no
   * HumanLoopArn, the input did not trigger human review.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/HumanLoopActivationOutput">AWS
   * API Reference</a></p>
   */
  class HumanLoopActivationOutput
  {
  public:
    AWS_TEXTRACT_API HumanLoopActivationOutput() = default;
    AWS_TEXTRACT_API HumanLoopActivationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API HumanLoopActivationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const { return m_humanLoopArn; }
    inline bool HumanLoopArnHasBeenSet() const { return m_humanLoopArnHasBeenSet; }
    template<typename HumanLoopArnT = Aws::String>
    void SetHumanLoopArn(HumanLoopArnT&& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = std::forward<HumanLoopArnT>(value); }
    template<typename HumanLoopArnT = Aws::String>
    HumanLoopActivationOutput& WithHumanLoopArn(HumanLoopArnT&& value) { SetHumanLoopArn(std::forward<HumanLoopArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHumanLoopActivationReasons() const { return m_humanLoopActivationReasons; }
    inline bool HumanLoopActivationReasonsHasBeenSet() const { return m_humanLoopActivationReasonsHasBeenSet; }
    template<typename HumanLoopActivationReasonsT = Aws::Vector<Aws::String>>
    void SetHumanLoopActivationReasons(HumanLoopActivationReasonsT&& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons = std::forward<HumanLoopActivationReasonsT>(value); }
    template<typename HumanLoopActivationReasonsT = Aws::Vector<Aws::String>>
    HumanLoopActivationOutput& WithHumanLoopActivationReasons(HumanLoopActivationReasonsT&& value) { SetHumanLoopActivationReasons(std::forward<HumanLoopActivationReasonsT>(value)); return *this;}
    template<typename HumanLoopActivationReasonsT = Aws::String>
    HumanLoopActivationOutput& AddHumanLoopActivationReasons(HumanLoopActivationReasonsT&& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.emplace_back(std::forward<HumanLoopActivationReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline const Aws::String& GetHumanLoopActivationConditionsEvaluationResults() const { return m_humanLoopActivationConditionsEvaluationResults; }
    inline bool HumanLoopActivationConditionsEvaluationResultsHasBeenSet() const { return m_humanLoopActivationConditionsEvaluationResultsHasBeenSet; }
    template<typename HumanLoopActivationConditionsEvaluationResultsT = Aws::String>
    void SetHumanLoopActivationConditionsEvaluationResults(HumanLoopActivationConditionsEvaluationResultsT&& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = std::forward<HumanLoopActivationConditionsEvaluationResultsT>(value); }
    template<typename HumanLoopActivationConditionsEvaluationResultsT = Aws::String>
    HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(HumanLoopActivationConditionsEvaluationResultsT&& value) { SetHumanLoopActivationConditionsEvaluationResults(std::forward<HumanLoopActivationConditionsEvaluationResultsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopArn;
    bool m_humanLoopArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_humanLoopActivationReasons;
    bool m_humanLoopActivationReasonsHasBeenSet = false;

    Aws::String m_humanLoopActivationConditionsEvaluationResults;
    bool m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
