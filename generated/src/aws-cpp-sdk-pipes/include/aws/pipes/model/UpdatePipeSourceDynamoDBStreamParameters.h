/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/DeadLetterConfig.h>
#include <aws/pipes/model/OnPartialBatchItemFailureStreams.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a DynamoDB stream as a source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UpdatePipeSourceDynamoDBStreamParameters">AWS
   * API Reference</a></p>
   */
  class UpdatePipeSourceDynamoDBStreamParameters
  {
  public:
    AWS_PIPES_API UpdatePipeSourceDynamoDBStreamParameters() = default;
    AWS_PIPES_API UpdatePipeSourceDynamoDBStreamParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API UpdatePipeSourceDynamoDBStreamParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline UpdatePipeSourceDynamoDBStreamParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the target queue to send dead-letter queue events to.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const { return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    void SetDeadLetterConfig(DeadLetterConfigT&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::forward<DeadLetterConfigT>(value); }
    template<typename DeadLetterConfigT = DeadLetterConfig>
    UpdatePipeSourceDynamoDBStreamParameters& WithDeadLetterConfig(DeadLetterConfigT&& value) { SetDeadLetterConfig(std::forward<DeadLetterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define how to handle item process failures. <code>AUTOMATIC_BISECT</code>
     * halves each batch and retry each half until all the records are processed or
     * there is one failed message left in the batch.</p>
     */
    inline OnPartialBatchItemFailureStreams GetOnPartialBatchItemFailure() const { return m_onPartialBatchItemFailure; }
    inline bool OnPartialBatchItemFailureHasBeenSet() const { return m_onPartialBatchItemFailureHasBeenSet; }
    inline void SetOnPartialBatchItemFailure(OnPartialBatchItemFailureStreams value) { m_onPartialBatchItemFailureHasBeenSet = true; m_onPartialBatchItemFailure = value; }
    inline UpdatePipeSourceDynamoDBStreamParameters& WithOnPartialBatchItemFailure(OnPartialBatchItemFailureStreams value) { SetOnPartialBatchItemFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const { return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline UpdatePipeSourceDynamoDBStreamParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Discard records older than the specified age. The default value is -1, which
     * sets the maximum age to infinite. When the value is set to infinite, EventBridge
     * never discards old records. </p>
     */
    inline int GetMaximumRecordAgeInSeconds() const { return m_maximumRecordAgeInSeconds; }
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }
    inline UpdatePipeSourceDynamoDBStreamParameters& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Discard records after the specified number of retries. The default value is
     * -1, which sets the maximum number of retries to infinite. When
     * MaximumRetryAttempts is infinite, EventBridge retries failed records until the
     * record expires in the event source.</p>
     */
    inline int GetMaximumRetryAttempts() const { return m_maximumRetryAttempts; }
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }
    inline UpdatePipeSourceDynamoDBStreamParameters& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of batches to process concurrently from each shard. The default
     * value is 1.</p>
     */
    inline int GetParallelizationFactor() const { return m_parallelizationFactor; }
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }
    inline UpdatePipeSourceDynamoDBStreamParameters& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}
    ///@}
  private:

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    OnPartialBatchItemFailureStreams m_onPartialBatchItemFailure{OnPartialBatchItemFailureStreams::NOT_SET};
    bool m_onPartialBatchItemFailureHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds{0};
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    int m_maximumRecordAgeInSeconds{0};
    bool m_maximumRecordAgeInSecondsHasBeenSet = false;

    int m_maximumRetryAttempts{0};
    bool m_maximumRetryAttemptsHasBeenSet = false;

    int m_parallelizationFactor{0};
    bool m_parallelizationFactorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
