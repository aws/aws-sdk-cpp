/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/SpotAllocationStrategy.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>Additional configuration when you specify <code>SPOT</code> as the
   * <code>purchaseOption</code> for the <code>CreateComputeNodeGroup</code> API
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/SpotOptions">AWS API
   * Reference</a></p>
   */
  class SpotOptions
  {
  public:
    AWS_PCS_API SpotOptions() = default;
    AWS_PCS_API SpotOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API SpotOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 allocation strategy PCS uses to provision EC2 instances. PCS
     * supports <b>lowest price</b>, <b>capacity optimized</b>, and <b>price capacity
     * optimized</b>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-allocation-strategy.html">Use
     * allocation strategies to determine how EC2 Fleet or Spot Fleet fulfills Spot and
     * On-Demand capacity</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. If
     * you don't provide this option, it defaults to <b>price capacity
     * optimized</b>.</p>
     */
    inline SpotAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(SpotAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline SpotOptions& WithAllocationStrategy(SpotAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}
  private:

    SpotAllocationStrategy m_allocationStrategy{SpotAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
