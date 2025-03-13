/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrafficType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Stairs.h>
#include <aws/sagemaker/model/Phase.h>
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
   * <p>Defines the traffic pattern of the load test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrafficPattern">AWS
   * API Reference</a></p>
   */
  class TrafficPattern
  {
  public:
    AWS_SAGEMAKER_API TrafficPattern() = default;
    AWS_SAGEMAKER_API TrafficPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrafficPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline TrafficType GetTrafficType() const { return m_trafficType; }
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }
    inline void SetTrafficType(TrafficType value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }
    inline TrafficPattern& WithTrafficType(TrafficType value) { SetTrafficType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline const Aws::Vector<Phase>& GetPhases() const { return m_phases; }
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
    template<typename PhasesT = Aws::Vector<Phase>>
    void SetPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases = std::forward<PhasesT>(value); }
    template<typename PhasesT = Aws::Vector<Phase>>
    TrafficPattern& WithPhases(PhasesT&& value) { SetPhases(std::forward<PhasesT>(value)); return *this;}
    template<typename PhasesT = Phase>
    TrafficPattern& AddPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases.emplace_back(std::forward<PhasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline const Stairs& GetStairs() const { return m_stairs; }
    inline bool StairsHasBeenSet() const { return m_stairsHasBeenSet; }
    template<typename StairsT = Stairs>
    void SetStairs(StairsT&& value) { m_stairsHasBeenSet = true; m_stairs = std::forward<StairsT>(value); }
    template<typename StairsT = Stairs>
    TrafficPattern& WithStairs(StairsT&& value) { SetStairs(std::forward<StairsT>(value)); return *this;}
    ///@}
  private:

    TrafficType m_trafficType{TrafficType::NOT_SET};
    bool m_trafficTypeHasBeenSet = false;

    Aws::Vector<Phase> m_phases;
    bool m_phasesHasBeenSet = false;

    Stairs m_stairs;
    bool m_stairsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
