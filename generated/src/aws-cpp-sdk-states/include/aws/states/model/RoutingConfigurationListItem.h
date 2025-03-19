/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the routing configuration of a state machine alias. In
   * a routing configuration, you define an array of objects that specify up to two
   * state machine versions. You also specify the percentage of traffic to be routed
   * to each version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/RoutingConfigurationListItem">AWS
   * API Reference</a></p>
   */
  class RoutingConfigurationListItem
  {
  public:
    AWS_SFN_API RoutingConfigurationListItem() = default;
    AWS_SFN_API RoutingConfigurationListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API RoutingConfigurationListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies one or two state machine
     * versions defined in the routing configuration.</p> <p>If you specify the ARN of
     * a second version, it must belong to the same state machine as the first
     * version.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const { return m_stateMachineVersionArn; }
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }
    template<typename StateMachineVersionArnT = Aws::String>
    void SetStateMachineVersionArn(StateMachineVersionArnT&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::forward<StateMachineVersionArnT>(value); }
    template<typename StateMachineVersionArnT = Aws::String>
    RoutingConfigurationListItem& WithStateMachineVersionArn(StateMachineVersionArnT&& value) { SetStateMachineVersionArn(std::forward<StateMachineVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of traffic you want to route to a state machine version. The
     * sum of the weights in the routing configuration must be equal to 100.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline RoutingConfigurationListItem& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
