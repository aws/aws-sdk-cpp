/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Runtime settings for a model that is deployed with an inference
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentRuntimeConfig">AWS
   * API Reference</a></p>
   */
  class InferenceComponentRuntimeConfig
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentRuntimeConfig();
    AWS_SAGEMAKER_API InferenceComponentRuntimeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentRuntimeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of runtime copies of the model container to deploy with the
     * inference component. Each copy can serve inference requests.</p>
     */
    inline int GetCopyCount() const{ return m_copyCount; }

    /**
     * <p>The number of runtime copies of the model container to deploy with the
     * inference component. Each copy can serve inference requests.</p>
     */
    inline bool CopyCountHasBeenSet() const { return m_copyCountHasBeenSet; }

    /**
     * <p>The number of runtime copies of the model container to deploy with the
     * inference component. Each copy can serve inference requests.</p>
     */
    inline void SetCopyCount(int value) { m_copyCountHasBeenSet = true; m_copyCount = value; }

    /**
     * <p>The number of runtime copies of the model container to deploy with the
     * inference component. Each copy can serve inference requests.</p>
     */
    inline InferenceComponentRuntimeConfig& WithCopyCount(int value) { SetCopyCount(value); return *this;}

  private:

    int m_copyCount;
    bool m_copyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
