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
  class DescribeTransformJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeTransformJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTransformJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the transform job that you want to view details of.</p>
     */
    inline const Aws::String& GetTransformJobName() const { return m_transformJobName; }
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }
    template<typename TransformJobNameT = Aws::String>
    void SetTransformJobName(TransformJobNameT&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::forward<TransformJobNameT>(value); }
    template<typename TransformJobNameT = Aws::String>
    DescribeTransformJobRequest& WithTransformJobName(TransformJobNameT&& value) { SetTransformJobName(std::forward<TransformJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
