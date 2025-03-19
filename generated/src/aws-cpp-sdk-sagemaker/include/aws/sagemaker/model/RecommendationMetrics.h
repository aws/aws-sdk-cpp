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
   * <p>The metrics of recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationMetrics">AWS
   * API Reference</a></p>
   */
  class RecommendationMetrics
  {
  public:
    AWS_SAGEMAKER_API RecommendationMetrics() = default;
    AWS_SAGEMAKER_API RecommendationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the cost per hour for the instance. </p>
     */
    inline double GetCostPerHour() const { return m_costPerHour; }
    inline bool CostPerHourHasBeenSet() const { return m_costPerHourHasBeenSet; }
    inline void SetCostPerHour(double value) { m_costPerHourHasBeenSet = true; m_costPerHour = value; }
    inline RecommendationMetrics& WithCostPerHour(double value) { SetCostPerHour(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the cost per inference for the instance .</p>
     */
    inline double GetCostPerInference() const { return m_costPerInference; }
    inline bool CostPerInferenceHasBeenSet() const { return m_costPerInferenceHasBeenSet; }
    inline void SetCostPerInference(double value) { m_costPerInferenceHasBeenSet = true; m_costPerInference = value; }
    inline RecommendationMetrics& WithCostPerInference(double value) { SetCostPerInference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected maximum number of requests per minute for the instance.</p>
     */
    inline int GetMaxInvocations() const { return m_maxInvocations; }
    inline bool MaxInvocationsHasBeenSet() const { return m_maxInvocationsHasBeenSet; }
    inline void SetMaxInvocations(int value) { m_maxInvocationsHasBeenSet = true; m_maxInvocations = value; }
    inline RecommendationMetrics& WithMaxInvocations(int value) { SetMaxInvocations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected model latency at maximum invocation per minute for the
     * instance.</p>
     */
    inline int GetModelLatency() const { return m_modelLatency; }
    inline bool ModelLatencyHasBeenSet() const { return m_modelLatencyHasBeenSet; }
    inline void SetModelLatency(int value) { m_modelLatencyHasBeenSet = true; m_modelLatency = value; }
    inline RecommendationMetrics& WithModelLatency(int value) { SetModelLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected CPU utilization at maximum invocations per minute for the
     * instance.</p> <p> <code>NaN</code> indicates that the value is not
     * available.</p>
     */
    inline double GetCpuUtilization() const { return m_cpuUtilization; }
    inline bool CpuUtilizationHasBeenSet() const { return m_cpuUtilizationHasBeenSet; }
    inline void SetCpuUtilization(double value) { m_cpuUtilizationHasBeenSet = true; m_cpuUtilization = value; }
    inline RecommendationMetrics& WithCpuUtilization(double value) { SetCpuUtilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected memory utilization at maximum invocations per minute for the
     * instance.</p> <p> <code>NaN</code> indicates that the value is not
     * available.</p>
     */
    inline double GetMemoryUtilization() const { return m_memoryUtilization; }
    inline bool MemoryUtilizationHasBeenSet() const { return m_memoryUtilizationHasBeenSet; }
    inline void SetMemoryUtilization(double value) { m_memoryUtilizationHasBeenSet = true; m_memoryUtilization = value; }
    inline RecommendationMetrics& WithMemoryUtilization(double value) { SetMemoryUtilization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time it takes to launch new compute resources for a serverless endpoint.
     * The time can vary depending on the model size, how long it takes to download the
     * model, and the start-up time of the container.</p> <p> <code>NaN</code>
     * indicates that the value is not available.</p>
     */
    inline int GetModelSetupTime() const { return m_modelSetupTime; }
    inline bool ModelSetupTimeHasBeenSet() const { return m_modelSetupTimeHasBeenSet; }
    inline void SetModelSetupTime(int value) { m_modelSetupTimeHasBeenSet = true; m_modelSetupTime = value; }
    inline RecommendationMetrics& WithModelSetupTime(int value) { SetModelSetupTime(value); return *this;}
    ///@}
  private:

    double m_costPerHour{0.0};
    bool m_costPerHourHasBeenSet = false;

    double m_costPerInference{0.0};
    bool m_costPerInferenceHasBeenSet = false;

    int m_maxInvocations{0};
    bool m_maxInvocationsHasBeenSet = false;

    int m_modelLatency{0};
    bool m_modelLatencyHasBeenSet = false;

    double m_cpuUtilization{0.0};
    bool m_cpuUtilizationHasBeenSet = false;

    double m_memoryUtilization{0.0};
    bool m_memoryUtilizationHasBeenSet = false;

    int m_modelSetupTime{0};
    bool m_modelSetupTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
