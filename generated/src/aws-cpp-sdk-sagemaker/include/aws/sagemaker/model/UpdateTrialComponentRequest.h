/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrialComponentParameterValue.h>
#include <aws/sagemaker/model/TrialComponentArtifact.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateTrialComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateTrialComponentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrialComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the component to update.</p>
     */
    inline const Aws::String& GetTrialComponentName() const { return m_trialComponentName; }
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }
    template<typename TrialComponentNameT = Aws::String>
    void SetTrialComponentName(TrialComponentNameT&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::forward<TrialComponentNameT>(value); }
    template<typename TrialComponentNameT = Aws::String>
    UpdateTrialComponentRequest& WithTrialComponentName(TrialComponentNameT&& value) { SetTrialComponentName(std::forward<TrialComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateTrialComponentRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status of the component.</p>
     */
    inline const TrialComponentStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = TrialComponentStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = TrialComponentStatus>
    UpdateTrialComponentRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    UpdateTrialComponentRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    UpdateTrialComponentRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters or add new hyperparameters. Existing hyperparameters are
     * replaced if the trial component is updated with an identical hyperparameter
     * key.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, TrialComponentParameterValue>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, TrialComponentParameterValue>>
    UpdateTrialComponentRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = TrialComponentParameterValue>
    UpdateTrialComponentRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParametersToRemove() const { return m_parametersToRemove; }
    inline bool ParametersToRemoveHasBeenSet() const { return m_parametersToRemoveHasBeenSet; }
    template<typename ParametersToRemoveT = Aws::Vector<Aws::String>>
    void SetParametersToRemove(ParametersToRemoveT&& value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove = std::forward<ParametersToRemoveT>(value); }
    template<typename ParametersToRemoveT = Aws::Vector<Aws::String>>
    UpdateTrialComponentRequest& WithParametersToRemove(ParametersToRemoveT&& value) { SetParametersToRemove(std::forward<ParametersToRemoveT>(value)); return *this;}
    template<typename ParametersToRemoveT = Aws::String>
    UpdateTrialComponentRequest& AddParametersToRemove(ParametersToRemoveT&& value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove.emplace_back(std::forward<ParametersToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replaces all of the component's input artifacts with the specified artifacts
     * or adds new input artifacts. Existing input artifacts are replaced if the trial
     * component is updated with an identical input artifact key.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const { return m_inputArtifacts; }
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }
    template<typename InputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    void SetInputArtifacts(InputArtifactsT&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::forward<InputArtifactsT>(value); }
    template<typename InputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    UpdateTrialComponentRequest& WithInputArtifacts(InputArtifactsT&& value) { SetInputArtifacts(std::forward<InputArtifactsT>(value)); return *this;}
    template<typename InputArtifactsKeyT = Aws::String, typename InputArtifactsValueT = TrialComponentArtifact>
    UpdateTrialComponentRequest& AddInputArtifacts(InputArtifactsKeyT&& key, InputArtifactsValueT&& value) {
      m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::forward<InputArtifactsKeyT>(key), std::forward<InputArtifactsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputArtifactsToRemove() const { return m_inputArtifactsToRemove; }
    inline bool InputArtifactsToRemoveHasBeenSet() const { return m_inputArtifactsToRemoveHasBeenSet; }
    template<typename InputArtifactsToRemoveT = Aws::Vector<Aws::String>>
    void SetInputArtifactsToRemove(InputArtifactsToRemoveT&& value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove = std::forward<InputArtifactsToRemoveT>(value); }
    template<typename InputArtifactsToRemoveT = Aws::Vector<Aws::String>>
    UpdateTrialComponentRequest& WithInputArtifactsToRemove(InputArtifactsToRemoveT&& value) { SetInputArtifactsToRemove(std::forward<InputArtifactsToRemoveT>(value)); return *this;}
    template<typename InputArtifactsToRemoveT = Aws::String>
    UpdateTrialComponentRequest& AddInputArtifactsToRemove(InputArtifactsToRemoveT&& value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove.emplace_back(std::forward<InputArtifactsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Replaces all of the component's output artifacts with the specified artifacts
     * or adds new output artifacts. Existing output artifacts are replaced if the
     * trial component is updated with an identical output artifact key.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const { return m_outputArtifacts; }
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }
    template<typename OutputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    void SetOutputArtifacts(OutputArtifactsT&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::forward<OutputArtifactsT>(value); }
    template<typename OutputArtifactsT = Aws::Map<Aws::String, TrialComponentArtifact>>
    UpdateTrialComponentRequest& WithOutputArtifacts(OutputArtifactsT&& value) { SetOutputArtifacts(std::forward<OutputArtifactsT>(value)); return *this;}
    template<typename OutputArtifactsKeyT = Aws::String, typename OutputArtifactsValueT = TrialComponentArtifact>
    UpdateTrialComponentRequest& AddOutputArtifacts(OutputArtifactsKeyT&& key, OutputArtifactsValueT&& value) {
      m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::forward<OutputArtifactsKeyT>(key), std::forward<OutputArtifactsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputArtifactsToRemove() const { return m_outputArtifactsToRemove; }
    inline bool OutputArtifactsToRemoveHasBeenSet() const { return m_outputArtifactsToRemoveHasBeenSet; }
    template<typename OutputArtifactsToRemoveT = Aws::Vector<Aws::String>>
    void SetOutputArtifactsToRemove(OutputArtifactsToRemoveT&& value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove = std::forward<OutputArtifactsToRemoveT>(value); }
    template<typename OutputArtifactsToRemoveT = Aws::Vector<Aws::String>>
    UpdateTrialComponentRequest& WithOutputArtifactsToRemove(OutputArtifactsToRemoveT&& value) { SetOutputArtifactsToRemove(std::forward<OutputArtifactsToRemoveT>(value)); return *this;}
    template<typename OutputArtifactsToRemoveT = Aws::String>
    UpdateTrialComponentRequest& AddOutputArtifactsToRemove(OutputArtifactsToRemoveT&& value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove.emplace_back(std::forward<OutputArtifactsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    TrialComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentParameterValue> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_parametersToRemove;
    bool m_parametersToRemoveHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_inputArtifacts;
    bool m_inputArtifactsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputArtifactsToRemove;
    bool m_inputArtifactsToRemoveHasBeenSet = false;

    Aws::Map<Aws::String, TrialComponentArtifact> m_outputArtifacts;
    bool m_outputArtifactsHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputArtifactsToRemove;
    bool m_outputArtifactsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
