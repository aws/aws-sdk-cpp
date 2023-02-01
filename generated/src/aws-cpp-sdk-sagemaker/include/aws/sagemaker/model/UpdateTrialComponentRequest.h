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
    AWS_SAGEMAKER_API UpdateTrialComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrialComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the component to update.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }

    /**
     * <p>The name of the component to update.</p>
     */
    inline bool TrialComponentNameHasBeenSet() const { return m_trialComponentNameHasBeenSet; }

    /**
     * <p>The name of the component to update.</p>
     */
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = value; }

    /**
     * <p>The name of the component to update.</p>
     */
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName = std::move(value); }

    /**
     * <p>The name of the component to update.</p>
     */
    inline void SetTrialComponentName(const char* value) { m_trialComponentNameHasBeenSet = true; m_trialComponentName.assign(value); }

    /**
     * <p>The name of the component to update.</p>
     */
    inline UpdateTrialComponentRequest& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}

    /**
     * <p>The name of the component to update.</p>
     */
    inline UpdateTrialComponentRequest& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component to update.</p>
     */
    inline UpdateTrialComponentRequest& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}


    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline UpdateTrialComponentRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline UpdateTrialComponentRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the component as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>TrialComponentName</code> is
     * displayed.</p>
     */
    inline UpdateTrialComponentRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The new status of the component.</p>
     */
    inline const TrialComponentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The new status of the component.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The new status of the component.</p>
     */
    inline void SetStatus(const TrialComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The new status of the component.</p>
     */
    inline void SetStatus(TrialComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The new status of the component.</p>
     */
    inline UpdateTrialComponentRequest& WithStatus(const TrialComponentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The new status of the component.</p>
     */
    inline UpdateTrialComponentRequest& WithStatus(TrialComponentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the component started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>When the component started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the component started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>When the component started.</p>
     */
    inline UpdateTrialComponentRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the component started.</p>
     */
    inline UpdateTrialComponentRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>When the component ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>When the component ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>When the component ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>When the component ended.</p>
     */
    inline UpdateTrialComponentRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>When the component ended.</p>
     */
    inline UpdateTrialComponentRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& WithParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { SetParameters(value); return *this;}

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& WithParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& AddParameters(const Aws::String& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& AddParameters(Aws::String&& key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& AddParameters(const Aws::String& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& AddParameters(Aws::String&& key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& AddParameters(const char* key, TrialComponentParameterValue&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's hyperparameters with the specified
     * hyperparameters.</p>
     */
    inline UpdateTrialComponentRequest& AddParameters(const char* key, const TrialComponentParameterValue& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParametersToRemove() const{ return m_parametersToRemove; }

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline bool ParametersToRemoveHasBeenSet() const { return m_parametersToRemoveHasBeenSet; }

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline void SetParametersToRemove(const Aws::Vector<Aws::String>& value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove = value; }

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline void SetParametersToRemove(Aws::Vector<Aws::String>&& value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove = std::move(value); }

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& WithParametersToRemove(const Aws::Vector<Aws::String>& value) { SetParametersToRemove(value); return *this;}

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& WithParametersToRemove(Aws::Vector<Aws::String>&& value) { SetParametersToRemove(std::move(value)); return *this;}

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddParametersToRemove(const Aws::String& value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove.push_back(value); return *this; }

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddParametersToRemove(Aws::String&& value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The hyperparameters to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddParametersToRemove(const char* value) { m_parametersToRemoveHasBeenSet = true; m_parametersToRemove.push_back(value); return *this; }


    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline bool InputArtifactsHasBeenSet() const { return m_inputArtifactsHasBeenSet; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline void SetInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = value; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline void SetInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts = std::move(value); }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& WithInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetInputArtifacts(value); return *this;}

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& WithInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), value); return *this; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifacts(const char* key, TrialComponentArtifact&& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's input artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifacts(const char* key, const TrialComponentArtifact& value) { m_inputArtifactsHasBeenSet = true; m_inputArtifacts.emplace(key, value); return *this; }


    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputArtifactsToRemove() const{ return m_inputArtifactsToRemove; }

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline bool InputArtifactsToRemoveHasBeenSet() const { return m_inputArtifactsToRemoveHasBeenSet; }

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline void SetInputArtifactsToRemove(const Aws::Vector<Aws::String>& value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove = value; }

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline void SetInputArtifactsToRemove(Aws::Vector<Aws::String>&& value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove = std::move(value); }

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& WithInputArtifactsToRemove(const Aws::Vector<Aws::String>& value) { SetInputArtifactsToRemove(value); return *this;}

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& WithInputArtifactsToRemove(Aws::Vector<Aws::String>&& value) { SetInputArtifactsToRemove(std::move(value)); return *this;}

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifactsToRemove(const Aws::String& value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove.push_back(value); return *this; }

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifactsToRemove(Aws::String&& value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The input artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddInputArtifactsToRemove(const char* value) { m_inputArtifactsToRemoveHasBeenSet = true; m_inputArtifactsToRemove.push_back(value); return *this; }


    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline bool OutputArtifactsHasBeenSet() const { return m_outputArtifactsHasBeenSet; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline void SetOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = value; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline void SetOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts = std::move(value); }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& WithOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetOutputArtifacts(value); return *this;}

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& WithOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), value); return *this; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifacts(const char* key, TrialComponentArtifact&& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Replaces all of the component's output artifacts with the specified
     * artifacts.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifacts(const char* key, const TrialComponentArtifact& value) { m_outputArtifactsHasBeenSet = true; m_outputArtifacts.emplace(key, value); return *this; }


    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputArtifactsToRemove() const{ return m_outputArtifactsToRemove; }

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline bool OutputArtifactsToRemoveHasBeenSet() const { return m_outputArtifactsToRemoveHasBeenSet; }

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline void SetOutputArtifactsToRemove(const Aws::Vector<Aws::String>& value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove = value; }

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline void SetOutputArtifactsToRemove(Aws::Vector<Aws::String>&& value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove = std::move(value); }

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& WithOutputArtifactsToRemove(const Aws::Vector<Aws::String>& value) { SetOutputArtifactsToRemove(value); return *this;}

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& WithOutputArtifactsToRemove(Aws::Vector<Aws::String>&& value) { SetOutputArtifactsToRemove(std::move(value)); return *this;}

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifactsToRemove(const Aws::String& value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove.push_back(value); return *this; }

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifactsToRemove(Aws::String&& value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The output artifacts to remove from the component.</p>
     */
    inline UpdateTrialComponentRequest& AddOutputArtifactsToRemove(const char* value) { m_outputArtifactsToRemoveHasBeenSet = true; m_outputArtifactsToRemove.push_back(value); return *this; }

  private:

    Aws::String m_trialComponentName;
    bool m_trialComponentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    TrialComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
