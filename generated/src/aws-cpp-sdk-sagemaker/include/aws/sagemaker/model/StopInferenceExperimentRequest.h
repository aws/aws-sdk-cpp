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
    AWS_SAGEMAKER_API StopInferenceExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInferenceExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline StopInferenceExperimentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline StopInferenceExperimentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference experiment to stop.</p>
     */
    inline StopInferenceExperimentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, ModelVariantAction>& GetModelVariantActions() const{ return m_modelVariantActions; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline bool ModelVariantActionsHasBeenSet() const { return m_modelVariantActionsHasBeenSet; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline void SetModelVariantActions(const Aws::Map<Aws::String, ModelVariantAction>& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions = value; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline void SetModelVariantActions(Aws::Map<Aws::String, ModelVariantAction>&& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions = std::move(value); }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& WithModelVariantActions(const Aws::Map<Aws::String, ModelVariantAction>& value) { SetModelVariantActions(value); return *this;}

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& WithModelVariantActions(Aws::Map<Aws::String, ModelVariantAction>&& value) { SetModelVariantActions(std::move(value)); return *this;}

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& AddModelVariantActions(const Aws::String& key, const ModelVariantAction& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(key, value); return *this; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& AddModelVariantActions(Aws::String&& key, const ModelVariantAction& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(std::move(key), value); return *this; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& AddModelVariantActions(const Aws::String& key, ModelVariantAction&& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& AddModelVariantActions(Aws::String&& key, ModelVariantAction&& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& AddModelVariantActions(const char* key, ModelVariantAction&& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Array of key-value pairs, with names of variants mapped to actions. The
     * possible actions are the following: </p> <ul> <li> <p> <code>Promote</code> -
     * Promote the shadow variant to a production variant</p> </li> <li> <p>
     * <code>Remove</code> - Delete the variant</p> </li> <li> <p> <code>Retain</code>
     * - Keep the variant as it is</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& AddModelVariantActions(const char* key, const ModelVariantAction& value) { m_modelVariantActionsHasBeenSet = true; m_modelVariantActions.emplace(key, value); return *this; }


    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline const Aws::Vector<ModelVariantConfig>& GetDesiredModelVariants() const{ return m_desiredModelVariants; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline bool DesiredModelVariantsHasBeenSet() const { return m_desiredModelVariantsHasBeenSet; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline void SetDesiredModelVariants(const Aws::Vector<ModelVariantConfig>& value) { m_desiredModelVariantsHasBeenSet = true; m_desiredModelVariants = value; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline void SetDesiredModelVariants(Aws::Vector<ModelVariantConfig>&& value) { m_desiredModelVariantsHasBeenSet = true; m_desiredModelVariants = std::move(value); }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline StopInferenceExperimentRequest& WithDesiredModelVariants(const Aws::Vector<ModelVariantConfig>& value) { SetDesiredModelVariants(value); return *this;}

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline StopInferenceExperimentRequest& WithDesiredModelVariants(Aws::Vector<ModelVariantConfig>&& value) { SetDesiredModelVariants(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline StopInferenceExperimentRequest& AddDesiredModelVariants(const ModelVariantConfig& value) { m_desiredModelVariantsHasBeenSet = true; m_desiredModelVariants.push_back(value); return *this; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant that you want to deploy after the inference experiment stops. Each
     * <code>ModelVariantConfig</code> describes the infrastructure configuration for
     * deploying the corresponding variant. </p>
     */
    inline StopInferenceExperimentRequest& AddDesiredModelVariants(ModelVariantConfig&& value) { m_desiredModelVariantsHasBeenSet = true; m_desiredModelVariants.push_back(std::move(value)); return *this; }


    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline const InferenceExperimentStopDesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline void SetDesiredState(const InferenceExperimentStopDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline void SetDesiredState(InferenceExperimentStopDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& WithDesiredState(const InferenceExperimentStopDesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p> The desired state of the experiment after stopping. The possible states are
     * the following: </p> <ul> <li> <p> <code>Completed</code>: The experiment
     * completed successfully</p> </li> <li> <p> <code>Cancelled</code>: The experiment
     * was canceled</p> </li> </ul>
     */
    inline StopInferenceExperimentRequest& WithDesiredState(InferenceExperimentStopDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline StopInferenceExperimentRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline StopInferenceExperimentRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for stopping the experiment.</p>
     */
    inline StopInferenceExperimentRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, ModelVariantAction> m_modelVariantActions;
    bool m_modelVariantActionsHasBeenSet = false;

    Aws::Vector<ModelVariantConfig> m_desiredModelVariants;
    bool m_desiredModelVariantsHasBeenSet = false;

    InferenceExperimentStopDesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
