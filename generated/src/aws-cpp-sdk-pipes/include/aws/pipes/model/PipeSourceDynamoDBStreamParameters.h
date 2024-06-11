﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/DeadLetterConfig.h>
#include <aws/pipes/model/OnPartialBatchItemFailureStreams.h>
#include <aws/pipes/model/DynamoDBStreamStartPosition.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceDynamoDBStreamParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceDynamoDBStreamParameters
  {
  public:
    AWS_PIPES_API PipeSourceDynamoDBStreamParameters();
    AWS_PIPES_API PipeSourceDynamoDBStreamParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceDynamoDBStreamParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline PipeSourceDynamoDBStreamParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the target queue to send dead-letter queue events to.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }
    inline PipeSourceDynamoDBStreamParameters& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline PipeSourceDynamoDBStreamParameters& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) Define how to handle item process failures.
     * <code>AUTOMATIC_BISECT</code> halves each batch and retry each half until all
     * the records are processed or there is one failed message left in the batch.</p>
     */
    inline const OnPartialBatchItemFailureStreams& GetOnPartialBatchItemFailure() const{ return m_onPartialBatchItemFailure; }
    inline bool OnPartialBatchItemFailureHasBeenSet() const { return m_onPartialBatchItemFailureHasBeenSet; }
    inline void SetOnPartialBatchItemFailure(const OnPartialBatchItemFailureStreams& value) { m_onPartialBatchItemFailureHasBeenSet = true; m_onPartialBatchItemFailure = value; }
    inline void SetOnPartialBatchItemFailure(OnPartialBatchItemFailureStreams&& value) { m_onPartialBatchItemFailureHasBeenSet = true; m_onPartialBatchItemFailure = std::move(value); }
    inline PipeSourceDynamoDBStreamParameters& WithOnPartialBatchItemFailure(const OnPartialBatchItemFailureStreams& value) { SetOnPartialBatchItemFailure(value); return *this;}
    inline PipeSourceDynamoDBStreamParameters& WithOnPartialBatchItemFailure(OnPartialBatchItemFailureStreams&& value) { SetOnPartialBatchItemFailure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline PipeSourceDynamoDBStreamParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) Discard records older than the specified age. The default
     * value is -1, which sets the maximum age to infinite. When the value is set to
     * infinite, EventBridge never discards old records. </p>
     */
    inline int GetMaximumRecordAgeInSeconds() const{ return m_maximumRecordAgeInSeconds; }
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }
    inline PipeSourceDynamoDBStreamParameters& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) Discard records after the specified number of retries. The
     * default value is -1, which sets the maximum number of retries to infinite. When
     * MaximumRetryAttempts is infinite, EventBridge retries failed records until the
     * record expires in the event source.</p>
     */
    inline int GetMaximumRetryAttempts() const{ return m_maximumRetryAttempts; }
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }
    inline PipeSourceDynamoDBStreamParameters& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) The number of batches to process concurrently from each shard.
     * The default value is 1.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }
    inline PipeSourceDynamoDBStreamParameters& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline const DynamoDBStreamStartPosition& GetStartingPosition() const{ return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(const DynamoDBStreamStartPosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline void SetStartingPosition(DynamoDBStreamStartPosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }
    inline PipeSourceDynamoDBStreamParameters& WithStartingPosition(const DynamoDBStreamStartPosition& value) { SetStartingPosition(value); return *this;}
    inline PipeSourceDynamoDBStreamParameters& WithStartingPosition(DynamoDBStreamStartPosition&& value) { SetStartingPosition(std::move(value)); return *this;}
    ///@}
  private:

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    DeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    OnPartialBatchItemFailureStreams m_onPartialBatchItemFailure;
    bool m_onPartialBatchItemFailureHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds;
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    int m_maximumRecordAgeInSeconds;
    bool m_maximumRecordAgeInSecondsHasBeenSet = false;

    int m_maximumRetryAttempts;
    bool m_maximumRetryAttemptsHasBeenSet = false;

    int m_parallelizationFactor;
    bool m_parallelizationFactorHasBeenSet = false;

    DynamoDBStreamStartPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
