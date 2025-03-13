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
   * <p>Configures conditions under which the processing job should be stopped, such
   * as how long the processing job has been running. After the condition is met, the
   * processing job is stopped.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingStoppingCondition">AWS
   * API Reference</a></p>
   */
  class ProcessingStoppingCondition
  {
  public:
    AWS_SAGEMAKER_API ProcessingStoppingCondition() = default;
    AWS_SAGEMAKER_API ProcessingStoppingCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingStoppingCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the maximum runtime in seconds.</p>
     */
    inline int GetMaxRuntimeInSeconds() const { return m_maxRuntimeInSeconds; }
    inline bool MaxRuntimeInSecondsHasBeenSet() const { return m_maxRuntimeInSecondsHasBeenSet; }
    inline void SetMaxRuntimeInSeconds(int value) { m_maxRuntimeInSecondsHasBeenSet = true; m_maxRuntimeInSeconds = value; }
    inline ProcessingStoppingCondition& WithMaxRuntimeInSeconds(int value) { SetMaxRuntimeInSeconds(value); return *this;}
    ///@}
  private:

    int m_maxRuntimeInSeconds{0};
    bool m_maxRuntimeInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
