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
    AWS_SAGEMAKER_API PutModelPackageGroupPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutModelPackageGroupPolicy"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline PutModelPackageGroupPolicyRequest& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline PutModelPackageGroupPolicyRequest& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the model group to add a resource policy to.</p>
     */
    inline PutModelPackageGroupPolicyRequest& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>The resource policy for the model group.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline PutModelPackageGroupPolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline PutModelPackageGroupPolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>The resource policy for the model group.</p>
     */
    inline PutModelPackageGroupPolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}

  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
