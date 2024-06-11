/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Shows the results of the human in the loop evaluation. If there is no
   * HumanLoopArn, the input did not trigger human review.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/HumanLoopActivationOutput">AWS
   * API Reference</a></p>
   */
  class HumanLoopActivationOutput
  {
  public:
    AWS_REKOGNITION_API HumanLoopActivationOutput();
    AWS_REKOGNITION_API HumanLoopActivationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API HumanLoopActivationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the HumanLoop created.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }
    inline bool HumanLoopArnHasBeenSet() const { return m_humanLoopArnHasBeenSet; }
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = value; }
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = std::move(value); }
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn.assign(value); }
    inline HumanLoopActivationOutput& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}
    inline HumanLoopActivationOutput& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}
    inline HumanLoopActivationOutput& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows if and why human review was needed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHumanLoopActivationReasons() const{ return m_humanLoopActivationReasons; }
    inline bool HumanLoopActivationReasonsHasBeenSet() const { return m_humanLoopActivationReasonsHasBeenSet; }
    inline void SetHumanLoopActivationReasons(const Aws::Vector<Aws::String>& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons = value; }
    inline void SetHumanLoopActivationReasons(Aws::Vector<Aws::String>&& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons = std::move(value); }
    inline HumanLoopActivationOutput& WithHumanLoopActivationReasons(const Aws::Vector<Aws::String>& value) { SetHumanLoopActivationReasons(value); return *this;}
    inline HumanLoopActivationOutput& WithHumanLoopActivationReasons(Aws::Vector<Aws::String>&& value) { SetHumanLoopActivationReasons(std::move(value)); return *this;}
    inline HumanLoopActivationOutput& AddHumanLoopActivationReasons(const Aws::String& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.push_back(value); return *this; }
    inline HumanLoopActivationOutput& AddHumanLoopActivationReasons(Aws::String&& value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.push_back(std::move(value)); return *this; }
    inline HumanLoopActivationOutput& AddHumanLoopActivationReasons(const char* value) { m_humanLoopActivationReasonsHasBeenSet = true; m_humanLoopActivationReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows the result of condition evaluations, including those conditions which
     * activated a human review.</p>
     */
    inline const Aws::String& GetHumanLoopActivationConditionsEvaluationResults() const{ return m_humanLoopActivationConditionsEvaluationResults; }
    inline bool HumanLoopActivationConditionsEvaluationResultsHasBeenSet() const { return m_humanLoopActivationConditionsEvaluationResultsHasBeenSet; }
    inline void SetHumanLoopActivationConditionsEvaluationResults(const Aws::String& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = value; }
    inline void SetHumanLoopActivationConditionsEvaluationResults(Aws::String&& value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults = std::move(value); }
    inline void SetHumanLoopActivationConditionsEvaluationResults(const char* value) { m_humanLoopActivationConditionsEvaluationResultsHasBeenSet = true; m_humanLoopActivationConditionsEvaluationResults.assign(value); }
    inline HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(const Aws::String& value) { SetHumanLoopActivationConditionsEvaluationResults(value); return *this;}
    inline HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(Aws::String&& value) { SetHumanLoopActivationConditionsEvaluationResults(std::move(value)); return *this;}
    inline HumanLoopActivationOutput& WithHumanLoopActivationConditionsEvaluationResults(const char* value) { SetHumanLoopActivationConditionsEvaluationResults(value); return *this;}
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
} // namespace Rekognition
} // namespace Aws
