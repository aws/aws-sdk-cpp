/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CandidateStepType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about the steps for a candidate and what step it is working
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLCandidateStep">AWS
   * API Reference</a></p>
   */
  class AutoMLCandidateStep
  {
  public:
    AWS_SAGEMAKER_API AutoMLCandidateStep() = default;
    AWS_SAGEMAKER_API AutoMLCandidateStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLCandidateStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the candidate is at the transform, training, or processing step.</p>
     */
    inline CandidateStepType GetCandidateStepType() const { return m_candidateStepType; }
    inline bool CandidateStepTypeHasBeenSet() const { return m_candidateStepTypeHasBeenSet; }
    inline void SetCandidateStepType(CandidateStepType value) { m_candidateStepTypeHasBeenSet = true; m_candidateStepType = value; }
    inline AutoMLCandidateStep& WithCandidateStepType(CandidateStepType value) { SetCandidateStepType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the candidate's step.</p>
     */
    inline const Aws::String& GetCandidateStepArn() const { return m_candidateStepArn; }
    inline bool CandidateStepArnHasBeenSet() const { return m_candidateStepArnHasBeenSet; }
    template<typename CandidateStepArnT = Aws::String>
    void SetCandidateStepArn(CandidateStepArnT&& value) { m_candidateStepArnHasBeenSet = true; m_candidateStepArn = std::forward<CandidateStepArnT>(value); }
    template<typename CandidateStepArnT = Aws::String>
    AutoMLCandidateStep& WithCandidateStepArn(CandidateStepArnT&& value) { SetCandidateStepArn(std::forward<CandidateStepArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the candidate's step.</p>
     */
    inline const Aws::String& GetCandidateStepName() const { return m_candidateStepName; }
    inline bool CandidateStepNameHasBeenSet() const { return m_candidateStepNameHasBeenSet; }
    template<typename CandidateStepNameT = Aws::String>
    void SetCandidateStepName(CandidateStepNameT&& value) { m_candidateStepNameHasBeenSet = true; m_candidateStepName = std::forward<CandidateStepNameT>(value); }
    template<typename CandidateStepNameT = Aws::String>
    AutoMLCandidateStep& WithCandidateStepName(CandidateStepNameT&& value) { SetCandidateStepName(std::forward<CandidateStepNameT>(value)); return *this;}
    ///@}
  private:

    CandidateStepType m_candidateStepType{CandidateStepType::NOT_SET};
    bool m_candidateStepTypeHasBeenSet = false;

    Aws::String m_candidateStepArn;
    bool m_candidateStepArnHasBeenSet = false;

    Aws::String m_candidateStepName;
    bool m_candidateStepNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
