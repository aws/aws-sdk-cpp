/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/PipeSourceDynamoDBStreamParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

PipeSourceDynamoDBStreamParameters::PipeSourceDynamoDBStreamParameters() : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_onPartialBatchItemFailure(OnPartialBatchItemFailureStreams::NOT_SET),
    m_onPartialBatchItemFailureHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_startingPosition(DynamoDBStreamStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false)
{
}

PipeSourceDynamoDBStreamParameters::PipeSourceDynamoDBStreamParameters(JsonView jsonValue) : 
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_deadLetterConfigHasBeenSet(false),
    m_maximumBatchingWindowInSeconds(0),
    m_maximumBatchingWindowInSecondsHasBeenSet(false),
    m_maximumRecordAgeInSeconds(0),
    m_maximumRecordAgeInSecondsHasBeenSet(false),
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_onPartialBatchItemFailure(OnPartialBatchItemFailureStreams::NOT_SET),
    m_onPartialBatchItemFailureHasBeenSet(false),
    m_parallelizationFactor(0),
    m_parallelizationFactorHasBeenSet(false),
    m_startingPosition(DynamoDBStreamStartPosition::NOT_SET),
    m_startingPositionHasBeenSet(false)
{
  *this = jsonValue;
}

PipeSourceDynamoDBStreamParameters& PipeSourceDynamoDBStreamParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

    m_deadLetterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumBatchingWindowInSeconds"))
  {
    m_maximumBatchingWindowInSeconds = jsonValue.GetInteger("MaximumBatchingWindowInSeconds");

    m_maximumBatchingWindowInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRecordAgeInSeconds"))
  {
    m_maximumRecordAgeInSeconds = jsonValue.GetInteger("MaximumRecordAgeInSeconds");

    m_maximumRecordAgeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumRetryAttempts"))
  {
    m_maximumRetryAttempts = jsonValue.GetInteger("MaximumRetryAttempts");

    m_maximumRetryAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnPartialBatchItemFailure"))
  {
    m_onPartialBatchItemFailure = OnPartialBatchItemFailureStreamsMapper::GetOnPartialBatchItemFailureStreamsForName(jsonValue.GetString("OnPartialBatchItemFailure"));

    m_onPartialBatchItemFailureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelizationFactor"))
  {
    m_parallelizationFactor = jsonValue.GetInteger("ParallelizationFactor");

    m_parallelizationFactorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartingPosition"))
  {
    m_startingPosition = DynamoDBStreamStartPositionMapper::GetDynamoDBStreamStartPositionForName(jsonValue.GetString("StartingPosition"));

    m_startingPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue PipeSourceDynamoDBStreamParameters::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_deadLetterConfigHasBeenSet)
  {
   payload.WithObject("DeadLetterConfig", m_deadLetterConfig.Jsonize());

  }

  if(m_maximumBatchingWindowInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumBatchingWindowInSeconds", m_maximumBatchingWindowInSeconds);

  }

  if(m_maximumRecordAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumRecordAgeInSeconds", m_maximumRecordAgeInSeconds);

  }

  if(m_maximumRetryAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumRetryAttempts", m_maximumRetryAttempts);

  }

  if(m_onPartialBatchItemFailureHasBeenSet)
  {
   payload.WithString("OnPartialBatchItemFailure", OnPartialBatchItemFailureStreamsMapper::GetNameForOnPartialBatchItemFailureStreams(m_onPartialBatchItemFailure));
  }

  if(m_parallelizationFactorHasBeenSet)
  {
   payload.WithInteger("ParallelizationFactor", m_parallelizationFactor);

  }

  if(m_startingPositionHasBeenSet)
  {
   payload.WithString("StartingPosition", DynamoDBStreamStartPositionMapper::GetNameForDynamoDBStreamStartPosition(m_startingPosition));
  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
