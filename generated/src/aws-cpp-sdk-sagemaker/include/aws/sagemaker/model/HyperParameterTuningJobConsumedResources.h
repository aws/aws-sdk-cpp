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
   * <p>The total resources consumed by your hyperparameter tuning job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobConsumedResources">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobConsumedResources
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobConsumedResources();
    AWS_SAGEMAKER_API HyperParameterTuningJobConsumedResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobConsumedResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The wall clock runtime in seconds used by your hyperparameter tuning job.</p>
     */
    inline int GetRuntimeInSeconds() const{ return m_runtimeInSeconds; }

    /**
     * <p>The wall clock runtime in seconds used by your hyperparameter tuning job.</p>
     */
    inline bool RuntimeInSecondsHasBeenSet() const { return m_runtimeInSecondsHasBeenSet; }

    /**
     * <p>The wall clock runtime in seconds used by your hyperparameter tuning job.</p>
     */
    inline void SetRuntimeInSeconds(int value) { m_runtimeInSecondsHasBeenSet = true; m_runtimeInSeconds = value; }

    /**
     * <p>The wall clock runtime in seconds used by your hyperparameter tuning job.</p>
     */
    inline HyperParameterTuningJobConsumedResources& WithRuntimeInSeconds(int value) { SetRuntimeInSeconds(value); return *this;}

  private:

    int m_runtimeInSeconds;
    bool m_runtimeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
