/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ResourceSharingStrategy.h>
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
   * <p>Resource sharing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ResourceSharingConfig">AWS
   * API Reference</a></p>
   */
  class ResourceSharingConfig
  {
  public:
    AWS_SAGEMAKER_API ResourceSharingConfig() = default;
    AWS_SAGEMAKER_API ResourceSharingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ResourceSharingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The strategy of how idle compute is shared within the cluster. The following
     * are the options of strategies.</p> <ul> <li> <p> <code>DontLend</code>: entities
     * do not lend idle compute.</p> </li> <li> <p> <code>Lend</code>: entities can
     * lend idle compute to entities that can borrow.</p> </li> <li> <p>
     * <code>LendandBorrow</code>: entities can lend idle compute and borrow idle
     * compute from other entities.</p> </li> </ul> <p>Default is
     * <code>LendandBorrow</code>.</p>
     */
    inline ResourceSharingStrategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(ResourceSharingStrategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline ResourceSharingConfig& WithStrategy(ResourceSharingStrategy value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit on how much idle compute can be borrowed.The values can be 1 - 500
     * percent of idle compute that the team is allowed to borrow.</p> <p>Default is
     * <code>50</code>.</p>
     */
    inline int GetBorrowLimit() const { return m_borrowLimit; }
    inline bool BorrowLimitHasBeenSet() const { return m_borrowLimitHasBeenSet; }
    inline void SetBorrowLimit(int value) { m_borrowLimitHasBeenSet = true; m_borrowLimit = value; }
    inline ResourceSharingConfig& WithBorrowLimit(int value) { SetBorrowLimit(value); return *this;}
    ///@}
  private:

    ResourceSharingStrategy m_strategy{ResourceSharingStrategy::NOT_SET};
    bool m_strategyHasBeenSet = false;

    int m_borrowLimit{0};
    bool m_borrowLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
