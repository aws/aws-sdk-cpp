/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class PutModelPackageGroupPolicyRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API PutModelPackageGroupPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutModelPackageGroupPolicy"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    PutModelPackageGroupPolicyRequest& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy for the model group.</p>
     */
    inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
    template<typename ResourcePolicyT = Aws::String>
    void SetResourcePolicy(ResourcePolicyT&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::forward<ResourcePolicyT>(value); }
    template<typename ResourcePolicyT = Aws::String>
    PutModelPackageGroupPolicyRequest& WithResourcePolicy(ResourcePolicyT&& value) { SetResourcePolicy(std::forward<ResourcePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
