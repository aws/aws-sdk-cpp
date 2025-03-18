/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExperimentStopDesiredState.h>
#include <aws/sagemaker/model/ModelVariantAction.h>
#include <aws/sagemaker/model/ModelVariantConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class StopInferenceExperimentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StopInferenceExperimentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInferenceExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StopInferenceExperimentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, ModelVariantAction>& GetModelVariantActions() const { return m_modelVariantActions; }
    inline bool ModelVariantActionsHasBeenSet() const { return m_modelVariantActionsHasBeenSet; }
    template<typename ModelVariantActionsT = Aws::Map<Aws::String, ModelVariantAction>>
    void SetModelVariantActions(ModelVariantActionsT&& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions = std::forward<ModelVariantActionsT>(value); }
    template<typename ModelVariantActionsT = Aws::Map<Aws::String, ModelVariantAction>>
    StopInferenceExperimentRequest& WithModelVariantActions(ModelVariantActionsT&& value) { SetModelVariantActions(std::forward<ModelVariantActionsT>(value)); return *this;}
    inline StopInferenceExperimentRequest& AddModelVariantActions(Aws::String key, ModelVariantAction value) {
      m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline const Aws::Vector<ModelVariantConfig>& GetDesiredModelVariants() const { return m_desiredModelVariants; }
    inline bool DesiredModelVariantsHasBeenSet() const { return m_desiredModelVariantsHasBeenSet; }
    template<typename DesiredModelVariantsT = Aws::Vector<ModelVariantConfig>>
    void SetDesiredModelVariants(DesiredModelVariantsT&& value) { m_desiredModelVariantsHasBeenSet = true; m_desiredModelVariants = std::forward<DesiredModelVariantsT>(value); }
    template<typename DesiredModelVariantsT = Aws::Vector<ModelVariantConfig>>
    StopInferenceExperimentRequest& WithDesiredModelVariants(DesiredModelVariantsT&& value) { SetDesiredModelVariants(std::forward<DesiredModelVariantsT>(value)); return *this;}
    template<typename DesiredModelVariantsT = ModelVariantConfig>
    StopInferenceExperimentRequest& AddDesiredModelVariants(DesiredModelVariantsT&& value) { m_desiredModelVariantsHasBeenSet = true; m_desiredModelVariants.emplace_back(std::forward<DesiredModelVariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline InferenceExperimentStopDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(InferenceExperimentStopDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline StopInferenceExperimentRequest& WithDesiredState(InferenceExperimentStopDesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    StopInferenceExperimentRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, ModelVariantAction> m_modelVariantActions;
    bool m_modelVariantActionsHasBeenSet = false;

    Aws::Vector<ModelVariantConfig> m_desiredModelVariants;
    bool m_desiredModelVariantsHasBeenSet = false;

    InferenceExperimentStopDesiredState m_desiredState{InferenceExperimentStopDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
