/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes the weight of a target group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/WeightedTargetGroup">AWS
   * API Reference</a></p>
   */
  class WeightedTargetGroup
  {
  public:
    AWS_VPCLATTICE_API WeightedTargetGroup() = default;
    AWS_VPCLATTICE_API WeightedTargetGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API WeightedTargetGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID or ARN of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const { return m_targetGroupIdentifier; }
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }
    template<typename TargetGroupIdentifierT = Aws::String>
    void SetTargetGroupIdentifier(TargetGroupIdentifierT&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::forward<TargetGroupIdentifierT>(value); }
    template<typename TargetGroupIdentifierT = Aws::String>
    WeightedTargetGroup& WithTargetGroupIdentifier(TargetGroupIdentifierT&& value) { SetTargetGroupIdentifier(std::forward<TargetGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only required if you specify multiple target groups for a forward action. The
     * weight determines how requests are distributed to the target group. For example,
     * if you specify two target groups, each with a weight of 10, each target group
     * receives half the requests. If you specify two target groups, one with a weight
     * of 10 and the other with a weight of 20, the target group with a weight of 20
     * receives twice as many requests as the other target group. If there's only one
     * target group specified, then the default value is 100.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline WeightedTargetGroup& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
