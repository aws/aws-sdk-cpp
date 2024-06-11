﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/DeadLetterConfig.h>
#include <aws/pipes/model/OnPartialBatchItemFailureStreams.h>
#include <aws/pipes/model/KinesisStreamStartPosition.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The parameters for using a Kinesis stream as a source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceKinesisStreamParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceKinesisStreamParameters
  {
  public:
    AWS_PIPES_API PipeSourceKinesisStreamParameters();
    AWS_PIPES_API PipeSourceKinesisStreamParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceKinesisStreamParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline PipeSourceKinesisStreamParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Define the target queue to send dead-letter queue events to.</p>
     */
    inline const DeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    inline void SetDeadLetterConfig(const DeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(DeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }
    inline PipeSourceKinesisStreamParameters& WithDeadLetterConfig(const DeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline PipeSourceKinesisStreamParameters& WithDeadLetterConfig(DeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
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
    inline PipeSourceKinesisStreamParameters& WithOnPartialBatchItemFailure(const OnPartialBatchItemFailureStreams& value) { SetOnPartialBatchItemFailure(value); return *this;}
    inline PipeSourceKinesisStreamParameters& WithOnPartialBatchItemFailure(OnPartialBatchItemFailureStreams&& value) { SetOnPartialBatchItemFailure(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline PipeSourceKinesisStreamParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
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
    inline PipeSourceKinesisStreamParameters& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}
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
    inline PipeSourceKinesisStreamParameters& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) The number of batches to process concurrently from each shard.
     * The default value is 1.</p>
     */
    inline int GetParallelizationFactor() const{ return m_parallelizationFactor; }
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }
    inline PipeSourceKinesisStreamParameters& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline const KinesisStreamStartPosition& GetStartingPosition() const{ return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(const KinesisStreamStartPosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline void SetStartingPosition(KinesisStreamStartPosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }
    inline PipeSourceKinesisStreamParameters& WithStartingPosition(const KinesisStreamStartPosition& value) { SetStartingPosition(value); return *this;}
    inline PipeSourceKinesisStreamParameters& WithStartingPosition(KinesisStreamStartPosition&& value) { SetStartingPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading, in Unix time seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const{ return m_startingPositionTimestamp; }
    inline bool StartingPositionTimestampHasBeenSet() const { return m_startingPositionTimestampHasBeenSet; }
    inline void SetStartingPositionTimestamp(const Aws::Utils::DateTime& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = value; }
    inline void SetStartingPositionTimestamp(Aws::Utils::DateTime&& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = std::move(value); }
    inline PipeSourceKinesisStreamParameters& WithStartingPositionTimestamp(const Aws::Utils::DateTime& value) { SetStartingPositionTimestamp(value); return *this;}
    inline PipeSourceKinesisStreamParameters& WithStartingPositionTimestamp(Aws::Utils::DateTime&& value) { SetStartingPositionTimestamp(std::move(value)); return *this;}
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

    KinesisStreamStartPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;

    Aws::Utils::DateTime m_startingPositionTimestamp;
    bool m_startingPositionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
