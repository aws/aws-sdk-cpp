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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateComputeQuotaRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateComputeQuotaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputeQuota"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name to the compute allocation definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateComputeQuotaRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateComputeQuotaRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateComputeQuotaRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the compute allocation definition.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateComputeQuotaRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateComputeQuotaRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateComputeQuotaRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline CreateComputeQuotaRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline CreateComputeQuotaRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline CreateComputeQuotaRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the compute allocation definition. This includes the
     * resource sharing option, and the setting to preempt low priority tasks.</p>
     */
    inline const ComputeQuotaConfig& GetComputeQuotaConfig() const{ return m_computeQuotaConfig; }
    inline bool ComputeQuotaConfigHasBeenSet() const { return m_computeQuotaConfigHasBeenSet; }
    inline void SetComputeQuotaConfig(const ComputeQuotaConfig& value) { m_computeQuotaConfigHasBeenSet = true; m_computeQuotaConfig = value; }
    inline void SetComputeQuotaConfig(ComputeQuotaConfig&& value) { m_computeQuotaConfigHasBeenSet = true; m_computeQuotaConfig = std::move(value); }
    inline CreateComputeQuotaRequest& WithComputeQuotaConfig(const ComputeQuotaConfig& value) { SetComputeQuotaConfig(value); return *this;}
    inline CreateComputeQuotaRequest& WithComputeQuotaConfig(ComputeQuotaConfig&& value) { SetComputeQuotaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target entity to allocate compute resources to.</p>
     */
    inline const ComputeQuotaTarget& GetComputeQuotaTarget() const{ return m_computeQuotaTarget; }
    inline bool ComputeQuotaTargetHasBeenSet() const { return m_computeQuotaTargetHasBeenSet; }
    inline void SetComputeQuotaTarget(const ComputeQuotaTarget& value) { m_computeQuotaTargetHasBeenSet = true; m_computeQuotaTarget = value; }
    inline void SetComputeQuotaTarget(ComputeQuotaTarget&& value) { m_computeQuotaTargetHasBeenSet = true; m_computeQuotaTarget = std::move(value); }
    inline CreateComputeQuotaRequest& WithComputeQuotaTarget(const ComputeQuotaTarget& value) { SetComputeQuotaTarget(value); return *this;}
    inline CreateComputeQuotaRequest& WithComputeQuotaTarget(ComputeQuotaTarget&& value) { SetComputeQuotaTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute allocation being described. Use to enable or disable
     * compute allocation.</p> <p>Default is <code>Enabled</code>.</p>
     */
    inline const ActivationState& GetActivationState() const{ return m_activationState; }
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }
    inline void SetActivationState(const ActivationState& value) { m_activationStateHasBeenSet = true; m_activationState = value; }
    inline void SetActivationState(ActivationState&& value) { m_activationStateHasBeenSet = true; m_activationState = std::move(value); }
    inline CreateComputeQuotaRequest& WithActivationState(const ActivationState& value) { SetActivationState(value); return *this;}
    inline CreateComputeQuotaRequest& WithActivationState(ActivationState&& value) { SetActivationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags of the compute allocation definition.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateComputeQuotaRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateComputeQuotaRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateComputeQuotaRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateComputeQuotaRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ComputeQuotaConfig m_computeQuotaConfig;
    bool m_computeQuotaConfigHasBeenSet = false;

    ComputeQuotaTarget m_computeQuotaTarget;
    bool m_computeQuotaTargetHasBeenSet = false;

    ActivationState m_activationState;
    bool m_activationStateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
