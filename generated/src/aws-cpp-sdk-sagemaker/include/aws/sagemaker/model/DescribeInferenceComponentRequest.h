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
  class DescribeInferenceComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeInferenceComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInferenceComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = value; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::move(value); }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName.assign(value); }

    /**
     * <p>The name of the inference component.</p>
     */
    inline DescribeInferenceComponentRequest& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}

    /**
     * <p>The name of the inference component.</p>
     */
    inline DescribeInferenceComponentRequest& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference component.</p>
     */
    inline DescribeInferenceComponentRequest& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}

  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
