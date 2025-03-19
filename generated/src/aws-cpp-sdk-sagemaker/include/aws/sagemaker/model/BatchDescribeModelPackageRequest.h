/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchDescribeModelPackageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API BatchDescribeModelPackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeModelPackage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of Amazon Resource Name (ARN) of the model package groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelPackageArnList() const { return m_modelPackageArnList; }
    inline bool ModelPackageArnListHasBeenSet() const { return m_modelPackageArnListHasBeenSet; }
    template<typename ModelPackageArnListT = Aws::Vector<Aws::String>>
    void SetModelPackageArnList(ModelPackageArnListT&& value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList = std::forward<ModelPackageArnListT>(value); }
    template<typename ModelPackageArnListT = Aws::Vector<Aws::String>>
    BatchDescribeModelPackageRequest& WithModelPackageArnList(ModelPackageArnListT&& value) { SetModelPackageArnList(std::forward<ModelPackageArnListT>(value)); return *this;}
    template<typename ModelPackageArnListT = Aws::String>
    BatchDescribeModelPackageRequest& AddModelPackageArnList(ModelPackageArnListT&& value) { m_modelPackageArnListHasBeenSet = true; m_modelPackageArnList.emplace_back(std::forward<ModelPackageArnListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_modelPackageArnList;
    bool m_modelPackageArnListHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
