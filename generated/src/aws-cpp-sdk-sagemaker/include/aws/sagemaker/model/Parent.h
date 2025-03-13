/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>The trial that a trial component is associated with and the experiment the
   * trial is part of. A component might not be associated with a trial. A component
   * can be associated with multiple trials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Parent">AWS
   * API Reference</a></p>
   */
  class Parent
  {
  public:
    AWS_SAGEMAKER_API Parent() = default;
    AWS_SAGEMAKER_API Parent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Parent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const { return m_trialName; }
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }
    template<typename TrialNameT = Aws::String>
    void SetTrialName(TrialNameT&& value) { m_trialNameHasBeenSet = true; m_trialName = std::forward<TrialNameT>(value); }
    template<typename TrialNameT = Aws::String>
    Parent& WithTrialName(TrialNameT&& value) { SetTrialName(std::forward<TrialNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const { return m_experimentName; }
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }
    template<typename ExperimentNameT = Aws::String>
    void SetExperimentName(ExperimentNameT&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::forward<ExperimentNameT>(value); }
    template<typename ExperimentNameT = Aws::String>
    Parent& WithExperimentName(ExperimentNameT&& value) { SetExperimentName(std::forward<ExperimentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
