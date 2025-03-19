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
   * <p>Associates a SageMaker job as a trial component with an experiment and trial.
   * Specified when you call the following APIs:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateProcessingJob.html">CreateProcessingJob</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrainingJob.html">CreateTrainingJob</a>
   * </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTransformJob.html">CreateTransformJob</a>
   * </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExperimentConfig">AWS
   * API Reference</a></p>
   */
  class ExperimentConfig
  {
  public:
    AWS_SAGEMAKER_API ExperimentConfig() = default;
    AWS_SAGEMAKER_API ExperimentConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ExperimentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an existing experiment to associate with the trial component.</p>
     */
    inline const Aws::String& GetExperimentName() const { return m_experimentName; }
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }
    template<typename ExperimentNameT = Aws::String>
    void SetExperimentName(ExperimentNameT&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::forward<ExperimentNameT>(value); }
    template<typename ExperimentNameT = Aws::String>
    ExperimentConfig& WithExperimentName(ExperimentNameT&& value) { SetExperimentName(std::forward<ExperimentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline const Aws::String& GetTrialName() const { return m_trialName; }
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }
    template<typename TrialNameT = Aws::String>
    void SetTrialName(TrialNameT&& value) { m_trialNameHasBeenSet = true; m_trialName = std::forward<TrialNameT>(value); }
    template<typename TrialNameT = Aws::String>
    ExperimentConfig& WithTrialName(TrialNameT&& value) { SetTrialName(std::forward<TrialNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline const Aws::String& GetTrialComponentDisplayName() const { return m_trialComponentDisplayName; }
    inline bool TrialComponentDisplayNameHasBeenSet() const { return m_trialComponentDisplayNameHasBeenSet; }
    template<typename TrialComponentDisplayNameT = Aws::String>
    void SetTrialComponentDisplayName(TrialComponentDisplayNameT&& value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName = std::forward<TrialComponentDisplayNameT>(value); }
    template<typename TrialComponentDisplayNameT = Aws::String>
    ExperimentConfig& WithTrialComponentDisplayName(TrialComponentDisplayNameT&& value) { SetTrialComponentDisplayName(std::forward<TrialComponentDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment run to associate with the trial component.</p>
     */
    inline const Aws::String& GetRunName() const { return m_runName; }
    inline bool RunNameHasBeenSet() const { return m_runNameHasBeenSet; }
    template<typename RunNameT = Aws::String>
    void SetRunName(RunNameT&& value) { m_runNameHasBeenSet = true; m_runName = std::forward<RunNameT>(value); }
    template<typename RunNameT = Aws::String>
    ExperimentConfig& WithRunName(RunNameT&& value) { SetRunName(std::forward<RunNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_trialComponentDisplayName;
    bool m_trialComponentDisplayNameHasBeenSet = false;

    Aws::String m_runName;
    bool m_runNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
