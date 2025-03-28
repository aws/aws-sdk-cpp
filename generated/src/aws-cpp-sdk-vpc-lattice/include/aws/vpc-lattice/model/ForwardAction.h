﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/WeightedTargetGroup.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes a forward action. You can use forward actions to route requests to
   * one or more target groups. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/ForwardAction">AWS
   * API Reference</a></p>
   */
  class ForwardAction
  {
  public:
    AWS_VPCLATTICE_API ForwardAction() = default;
    AWS_VPCLATTICE_API ForwardAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API ForwardAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target groups. Traffic matching the rule is forwarded to the specified
     * target groups. With forward actions, you can assign a weight that controls the
     * prioritization and selection of each target group. This means that requests are
     * distributed to individual target groups based on their weights. For example, if
     * two target groups have the same weight, each target group receives half of the
     * traffic.</p> <p>The default value is 1. This means that if only one target group
     * is provided, there is no need to set the weight; 100% of the traffic goes to
     * that target group.</p>
     */
    inline const Aws::Vector<WeightedTargetGroup>& GetTargetGroups() const { return m_targetGroups; }
    inline bool TargetGroupsHasBeenSet() const { return m_targetGroupsHasBeenSet; }
    template<typename TargetGroupsT = Aws::Vector<WeightedTargetGroup>>
    void SetTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::forward<TargetGroupsT>(value); }
    template<typename TargetGroupsT = Aws::Vector<WeightedTargetGroup>>
    ForwardAction& WithTargetGroups(TargetGroupsT&& value) { SetTargetGroups(std::forward<TargetGroupsT>(value)); return *this;}
    template<typename TargetGroupsT = WeightedTargetGroup>
    ForwardAction& AddTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.emplace_back(std::forward<TargetGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<WeightedTargetGroup> m_targetGroups;
    bool m_targetGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
