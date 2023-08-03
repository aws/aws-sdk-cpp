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
    AWS_SAGEMAKER_API TrafficPattern();
    AWS_SAGEMAKER_API TrafficPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrafficPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline const TrafficType& GetTrafficType() const{ return m_trafficType; }

    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }

    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline void SetTrafficType(const TrafficType& value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }

    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline void SetTrafficType(TrafficType&& value) { m_trafficTypeHasBeenSet = true; m_trafficType = std::move(value); }

    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline TrafficPattern& WithTrafficType(const TrafficType& value) { SetTrafficType(value); return *this;}

    /**
     * <p>Defines the traffic patterns. Choose either <code>PHASES</code> or
     * <code>STAIRS</code>.</p>
     */
    inline TrafficPattern& WithTrafficType(TrafficType&& value) { SetTrafficType(std::move(value)); return *this;}


    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline const Aws::Vector<Phase>& GetPhases() const{ return m_phases; }

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline void SetPhases(const Aws::Vector<Phase>& value) { m_phasesHasBeenSet = true; m_phases = value; }

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline void SetPhases(Aws::Vector<Phase>&& value) { m_phasesHasBeenSet = true; m_phases = std::move(value); }

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline TrafficPattern& WithPhases(const Aws::Vector<Phase>& value) { SetPhases(value); return *this;}

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline TrafficPattern& WithPhases(Aws::Vector<Phase>&& value) { SetPhases(std::move(value)); return *this;}

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline TrafficPattern& AddPhases(const Phase& value) { m_phasesHasBeenSet = true; m_phases.push_back(value); return *this; }

    /**
     * <p>Defines the phases traffic specification.</p>
     */
    inline TrafficPattern& AddPhases(Phase&& value) { m_phasesHasBeenSet = true; m_phases.push_back(std::move(value)); return *this; }


    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline const Stairs& GetStairs() const{ return m_stairs; }

    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline bool StairsHasBeenSet() const { return m_stairsHasBeenSet; }

    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline void SetStairs(const Stairs& value) { m_stairsHasBeenSet = true; m_stairs = value; }

    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline void SetStairs(Stairs&& value) { m_stairsHasBeenSet = true; m_stairs = std::move(value); }

    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline TrafficPattern& WithStairs(const Stairs& value) { SetStairs(value); return *this;}

    /**
     * <p>Defines the stairs traffic pattern.</p>
     */
    inline TrafficPattern& WithStairs(Stairs&& value) { SetStairs(std::move(value)); return *this;}

  private:

    TrafficType m_trafficType;
    bool m_trafficTypeHasBeenSet = false;

    Aws::Vector<Phase> m_phases;
    bool m_phasesHasBeenSet = false;

    Stairs m_stairs;
    bool m_stairsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
