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
   * <p>Configuration that controls the parallelism of the pipeline. By default, the
   * parallelism configuration specified applies to all executions of the pipeline
   * unless overridden.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ParallelismConfiguration">AWS
   * API Reference</a></p>
   */
  class ParallelismConfiguration
  {
  public:
    AWS_SAGEMAKER_API ParallelismConfiguration();
    AWS_SAGEMAKER_API ParallelismConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParallelismConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The max number of steps that can be executed in parallel. </p>
     */
    inline int GetMaxParallelExecutionSteps() const{ return m_maxParallelExecutionSteps; }

    /**
     * <p>The max number of steps that can be executed in parallel. </p>
     */
    inline bool MaxParallelExecutionStepsHasBeenSet() const { return m_maxParallelExecutionStepsHasBeenSet; }

    /**
     * <p>The max number of steps that can be executed in parallel. </p>
     */
    inline void SetMaxParallelExecutionSteps(int value) { m_maxParallelExecutionStepsHasBeenSet = true; m_maxParallelExecutionSteps = value; }

    /**
     * <p>The max number of steps that can be executed in parallel. </p>
     */
    inline ParallelismConfiguration& WithMaxParallelExecutionSteps(int value) { SetMaxParallelExecutionSteps(value); return *this;}

  private:

    int m_maxParallelExecutionSteps;
    bool m_maxParallelExecutionStepsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
