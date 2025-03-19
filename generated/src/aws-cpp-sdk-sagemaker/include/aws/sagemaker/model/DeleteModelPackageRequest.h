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
  class DeleteModelPackageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteModelPackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteModelPackage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to delete.</p>
     * <p>When you specify a name, the name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetModelPackageName() const { return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    template<typename ModelPackageNameT = Aws::String>
    void SetModelPackageName(ModelPackageNameT&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::forward<ModelPackageNameT>(value); }
    template<typename ModelPackageNameT = Aws::String>
    DeleteModelPackageRequest& WithModelPackageName(ModelPackageNameT&& value) { SetModelPackageName(std::forward<ModelPackageNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
