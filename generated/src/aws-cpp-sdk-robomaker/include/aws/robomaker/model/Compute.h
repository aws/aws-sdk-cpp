/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/ComputeType.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Compute information for the simulation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Compute">AWS
   * API Reference</a></p>
   */
  class Compute
  {
  public:
    AWS_ROBOMAKER_API Compute() = default;
    AWS_ROBOMAKER_API Compute(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Compute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The simulation unit limit. Your simulation is allocated CPU and memory
     * proportional to the supplied simulation unit limit. A simulation unit is 1 vcpu
     * and 2GB of memory. You are only billed for the SU utilization you consume up to
     * the maximum value provided. The default is 15. </p>
     */
    inline int GetSimulationUnitLimit() const { return m_simulationUnitLimit; }
    inline bool SimulationUnitLimitHasBeenSet() const { return m_simulationUnitLimitHasBeenSet; }
    inline void SetSimulationUnitLimit(int value) { m_simulationUnitLimitHasBeenSet = true; m_simulationUnitLimit = value; }
    inline Compute& WithSimulationUnitLimit(int value) { SetSimulationUnitLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute type information for the simulation job.</p>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline Compute& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Compute GPU unit limit for the simulation job. It is the same as the number
     * of GPUs allocated to the SimulationJob.</p>
     */
    inline int GetGpuUnitLimit() const { return m_gpuUnitLimit; }
    inline bool GpuUnitLimitHasBeenSet() const { return m_gpuUnitLimitHasBeenSet; }
    inline void SetGpuUnitLimit(int value) { m_gpuUnitLimitHasBeenSet = true; m_gpuUnitLimit = value; }
    inline Compute& WithGpuUnitLimit(int value) { SetGpuUnitLimit(value); return *this;}
    ///@}
  private:

    int m_simulationUnitLimit{0};
    bool m_simulationUnitLimitHasBeenSet = false;

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    int m_gpuUnitLimit{0};
    bool m_gpuUnitLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
