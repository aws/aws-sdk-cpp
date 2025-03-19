/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrafficRoutingConfigType.h>
#include <aws/sagemaker/model/CapacitySize.h>
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
   * <p>Defines the traffic routing strategy during an endpoint deployment to shift
   * traffic from the old fleet to the new fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrafficRoutingConfig">AWS
   * API Reference</a></p>
   */
  class TrafficRoutingConfig
  {
  public:
    AWS_SAGEMAKER_API TrafficRoutingConfig() = default;
    AWS_SAGEMAKER_API TrafficRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrafficRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Traffic routing strategy type.</p> <ul> <li> <p> <code>ALL_AT_ONCE</code>:
     * Endpoint traffic shifts to the new fleet in a single step. </p> </li> <li> <p>
     * <code>CANARY</code>: Endpoint traffic shifts to the new fleet in two steps. The
     * first step is the canary, which is a small portion of the traffic. The second
     * step is the remainder of the traffic. </p> </li> <li> <p> <code>LINEAR</code>:
     * Endpoint traffic shifts to the new fleet in n steps of a configurable size. </p>
     * </li> </ul>
     */
    inline TrafficRoutingConfigType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TrafficRoutingConfigType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TrafficRoutingConfig& WithType(TrafficRoutingConfigType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The waiting time (in seconds) between incremental steps to turn on traffic on
     * the new endpoint fleet.</p>
     */
    inline int GetWaitIntervalInSeconds() const { return m_waitIntervalInSeconds; }
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }
    inline TrafficRoutingConfig& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Batch size for the first step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be less than or equal to 50% of the variant's total
     * instance count.</p>
     */
    inline const CapacitySize& GetCanarySize() const { return m_canarySize; }
    inline bool CanarySizeHasBeenSet() const { return m_canarySizeHasBeenSet; }
    template<typename CanarySizeT = CapacitySize>
    void SetCanarySize(CanarySizeT&& value) { m_canarySizeHasBeenSet = true; m_canarySize = std::forward<CanarySizeT>(value); }
    template<typename CanarySizeT = CapacitySize>
    TrafficRoutingConfig& WithCanarySize(CanarySizeT&& value) { SetCanarySize(std::forward<CanarySizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Batch size for each step to turn on traffic on the new endpoint fleet.
     * <code>Value</code> must be 10-50% of the variant's total instance count.</p>
     */
    inline const CapacitySize& GetLinearStepSize() const { return m_linearStepSize; }
    inline bool LinearStepSizeHasBeenSet() const { return m_linearStepSizeHasBeenSet; }
    template<typename LinearStepSizeT = CapacitySize>
    void SetLinearStepSize(LinearStepSizeT&& value) { m_linearStepSizeHasBeenSet = true; m_linearStepSize = std::forward<LinearStepSizeT>(value); }
    template<typename LinearStepSizeT = CapacitySize>
    TrafficRoutingConfig& WithLinearStepSize(LinearStepSizeT&& value) { SetLinearStepSize(std::forward<LinearStepSizeT>(value)); return *this;}
    ///@}
  private:

    TrafficRoutingConfigType m_type{TrafficRoutingConfigType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_waitIntervalInSeconds{0};
    bool m_waitIntervalInSecondsHasBeenSet = false;

    CapacitySize m_canarySize;
    bool m_canarySizeHasBeenSet = false;

    CapacitySize m_linearStepSize;
    bool m_linearStepSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
