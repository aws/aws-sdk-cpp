﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Specifies a rolling deployment strategy for updating a SageMaker
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RollingUpdatePolicy">AWS
   * API Reference</a></p>
   */
  class RollingUpdatePolicy
  {
  public:
    AWS_SAGEMAKER_API RollingUpdatePolicy();
    AWS_SAGEMAKER_API RollingUpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RollingUpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CapacitySize& GetMaximumBatchSize() const{ return m_maximumBatchSize; }

    
    inline bool MaximumBatchSizeHasBeenSet() const { return m_maximumBatchSizeHasBeenSet; }

    
    inline void SetMaximumBatchSize(const CapacitySize& value) { m_maximumBatchSizeHasBeenSet = true; m_maximumBatchSize = value; }

    
    inline void SetMaximumBatchSize(CapacitySize&& value) { m_maximumBatchSizeHasBeenSet = true; m_maximumBatchSize = std::move(value); }

    
    inline RollingUpdatePolicy& WithMaximumBatchSize(const CapacitySize& value) { SetMaximumBatchSize(value); return *this;}

    
    inline RollingUpdatePolicy& WithMaximumBatchSize(CapacitySize&& value) { SetMaximumBatchSize(std::move(value)); return *this;}


    /**
     * <p>The length of the baking period, during which SageMaker monitors alarms for
     * each batch on the new fleet.</p>
     */
    inline int GetWaitIntervalInSeconds() const{ return m_waitIntervalInSeconds; }

    /**
     * <p>The length of the baking period, during which SageMaker monitors alarms for
     * each batch on the new fleet.</p>
     */
    inline bool WaitIntervalInSecondsHasBeenSet() const { return m_waitIntervalInSecondsHasBeenSet; }

    /**
     * <p>The length of the baking period, during which SageMaker monitors alarms for
     * each batch on the new fleet.</p>
     */
    inline void SetWaitIntervalInSeconds(int value) { m_waitIntervalInSecondsHasBeenSet = true; m_waitIntervalInSeconds = value; }

    /**
     * <p>The length of the baking period, during which SageMaker monitors alarms for
     * each batch on the new fleet.</p>
     */
    inline RollingUpdatePolicy& WithWaitIntervalInSeconds(int value) { SetWaitIntervalInSeconds(value); return *this;}


    /**
     * <p>The time limit for the total deployment. Exceeding this limit causes a
     * timeout.</p>
     */
    inline int GetMaximumExecutionTimeoutInSeconds() const{ return m_maximumExecutionTimeoutInSeconds; }

    /**
     * <p>The time limit for the total deployment. Exceeding this limit causes a
     * timeout.</p>
     */
    inline bool MaximumExecutionTimeoutInSecondsHasBeenSet() const { return m_maximumExecutionTimeoutInSecondsHasBeenSet; }

    /**
     * <p>The time limit for the total deployment. Exceeding this limit causes a
     * timeout.</p>
     */
    inline void SetMaximumExecutionTimeoutInSeconds(int value) { m_maximumExecutionTimeoutInSecondsHasBeenSet = true; m_maximumExecutionTimeoutInSeconds = value; }

    /**
     * <p>The time limit for the total deployment. Exceeding this limit causes a
     * timeout.</p>
     */
    inline RollingUpdatePolicy& WithMaximumExecutionTimeoutInSeconds(int value) { SetMaximumExecutionTimeoutInSeconds(value); return *this;}


    
    inline const CapacitySize& GetRollbackMaximumBatchSize() const{ return m_rollbackMaximumBatchSize; }

    
    inline bool RollbackMaximumBatchSizeHasBeenSet() const { return m_rollbackMaximumBatchSizeHasBeenSet; }

    
    inline void SetRollbackMaximumBatchSize(const CapacitySize& value) { m_rollbackMaximumBatchSizeHasBeenSet = true; m_rollbackMaximumBatchSize = value; }

    
    inline void SetRollbackMaximumBatchSize(CapacitySize&& value) { m_rollbackMaximumBatchSizeHasBeenSet = true; m_rollbackMaximumBatchSize = std::move(value); }

    
    inline RollingUpdatePolicy& WithRollbackMaximumBatchSize(const CapacitySize& value) { SetRollbackMaximumBatchSize(value); return *this;}

    
    inline RollingUpdatePolicy& WithRollbackMaximumBatchSize(CapacitySize&& value) { SetRollbackMaximumBatchSize(std::move(value)); return *this;}

  private:

    CapacitySize m_maximumBatchSize;
    bool m_maximumBatchSizeHasBeenSet = false;

    int m_waitIntervalInSeconds;
    bool m_waitIntervalInSecondsHasBeenSet = false;

    int m_maximumExecutionTimeoutInSeconds;
    bool m_maximumExecutionTimeoutInSecondsHasBeenSet = false;

    CapacitySize m_rollbackMaximumBatchSize;
    bool m_rollbackMaximumBatchSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
