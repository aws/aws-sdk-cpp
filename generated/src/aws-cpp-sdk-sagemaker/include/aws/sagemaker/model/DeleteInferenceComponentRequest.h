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
  class DeleteInferenceComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteInferenceComponentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteInferenceComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the inference component to delete.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const { return m_inferenceComponentName; }
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }
    template<typename InferenceComponentNameT = Aws::String>
    void SetInferenceComponentName(InferenceComponentNameT&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::forward<InferenceComponentNameT>(value); }
    template<typename InferenceComponentNameT = Aws::String>
    DeleteInferenceComponentRequest& WithInferenceComponentName(InferenceComponentNameT&& value) { SetInferenceComponentName(std::forward<InferenceComponentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
