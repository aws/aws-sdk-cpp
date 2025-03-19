/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>The model latency threshold.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelLatencyThreshold">AWS
   * API Reference</a></p>
   */
  class ModelLatencyThreshold
  {
  public:
    AWS_SAGEMAKER_API ModelLatencyThreshold() = default;
    AWS_SAGEMAKER_API ModelLatencyThreshold(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelLatencyThreshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The model latency percentile threshold. Acceptable values are
     * <code>P95</code> and <code>P99</code>. For custom load tests, specify the value
     * as <code>P95</code>.</p>
     */
    inline const Aws::String& GetPercentile() const { return m_percentile; }
    inline bool PercentileHasBeenSet() const { return m_percentileHasBeenSet; }
    template<typename PercentileT = Aws::String>
    void SetPercentile(PercentileT&& value) { m_percentileHasBeenSet = true; m_percentile = std::forward<PercentileT>(value); }
    template<typename PercentileT = Aws::String>
    ModelLatencyThreshold& WithPercentile(PercentileT&& value) { SetPercentile(std::forward<PercentileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model latency percentile value in milliseconds.</p>
     */
    inline int GetValueInMilliseconds() const { return m_valueInMilliseconds; }
    inline bool ValueInMillisecondsHasBeenSet() const { return m_valueInMillisecondsHasBeenSet; }
    inline void SetValueInMilliseconds(int value) { m_valueInMillisecondsHasBeenSet = true; m_valueInMilliseconds = value; }
    inline ModelLatencyThreshold& WithValueInMilliseconds(int value) { SetValueInMilliseconds(value); return *this;}
    ///@}
  private:

    Aws::String m_percentile;
    bool m_percentileHasBeenSet = false;

    int m_valueInMilliseconds{0};
    bool m_valueInMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
