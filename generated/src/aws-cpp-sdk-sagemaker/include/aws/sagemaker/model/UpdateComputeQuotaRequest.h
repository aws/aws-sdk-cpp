/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ComputeQuotaConfig.h>
#include <aws/sagemaker/model/ComputeQuotaTarget.h>
#include <aws/sagemaker/model/ActivationState.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateComputeQuotaRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateComputeQuotaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateComputeQuota"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ID of the compute allocation definition.</p>
     */
    inline const Aws::String& GetComputeQuotaId() const { return m_computeQuotaId; }
    inline bool ComputeQuotaIdHasBeenSet() const { return m_computeQuotaIdHasBeenSet; }
    template<typename ComputeQuotaIdT = Aws::String>
    void SetComputeQuotaId(ComputeQuotaIdT&& value) { m_computeQuotaIdHasBeenSet = true; m_computeQuotaId = std::forward<ComputeQuotaIdT>(value); }
    template<typename ComputeQuotaIdT = Aws::String>
    UpdateComputeQuotaRequest& WithComputeQuotaId(ComputeQuotaIdT&& value) { SetComputeQuotaId(std::forward<ComputeQuotaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target version.</p>
     */
    inline int GetTargetVersion() const { return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    inline void SetTargetVersion(int value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }
    inline UpdateComputeQuotaRequest& WithTargetVersion(int value) { SetTargetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the compute allocation definition. This includes the
     * resource sharing option, and the setting to preempt low priority tasks.</p>
     */
    inline const ComputeQuotaConfig& GetComputeQuotaConfig() const { return m_computeQuotaConfig; }
    inline bool ComputeQuotaConfigHasBeenSet() const { return m_computeQuotaConfigHasBeenSet; }
    template<typename ComputeQuotaConfigT = ComputeQuotaConfig>
    void SetComputeQuotaConfig(ComputeQuotaConfigT&& value) { m_computeQuotaConfigHasBeenSet = true; m_computeQuotaConfig = std::forward<ComputeQuotaConfigT>(value); }
    template<typename ComputeQuotaConfigT = ComputeQuotaConfig>
    UpdateComputeQuotaRequest& WithComputeQuotaConfig(ComputeQuotaConfigT&& value) { SetComputeQuotaConfig(std::forward<ComputeQuotaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target entity to allocate compute resources to.</p>
     */
    inline const ComputeQuotaTarget& GetComputeQuotaTarget() const { return m_computeQuotaTarget; }
    inline bool ComputeQuotaTargetHasBeenSet() const { return m_computeQuotaTargetHasBeenSet; }
    template<typename ComputeQuotaTargetT = ComputeQuotaTarget>
    void SetComputeQuotaTarget(ComputeQuotaTargetT&& value) { m_computeQuotaTargetHasBeenSet = true; m_computeQuotaTarget = std::forward<ComputeQuotaTargetT>(value); }
    template<typename ComputeQuotaTargetT = ComputeQuotaTarget>
    UpdateComputeQuotaRequest& WithComputeQuotaTarget(ComputeQuotaTargetT&& value) { SetComputeQuotaTarget(std::forward<ComputeQuotaTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute allocation being described. Use to enable or disable
     * compute allocation.</p> <p>Default is <code>Enabled</code>.</p>
     */
    inline ActivationState GetActivationState() const { return m_activationState; }
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }
    inline void SetActivationState(ActivationState value) { m_activationStateHasBeenSet = true; m_activationState = value; }
    inline UpdateComputeQuotaRequest& WithActivationState(ActivationState value) { SetActivationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the compute allocation definition.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateComputeQuotaRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeQuotaId;
    bool m_computeQuotaIdHasBeenSet = false;

    int m_targetVersion{0};
    bool m_targetVersionHasBeenSet = false;

    ComputeQuotaConfig m_computeQuotaConfig;
    bool m_computeQuotaConfigHasBeenSet = false;

    ComputeQuotaTarget m_computeQuotaTarget;
    bool m_computeQuotaTargetHasBeenSet = false;

    ActivationState m_activationState{ActivationState::NOT_SET};
    bool m_activationStateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
