/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchTransformInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

BatchTransformInput::BatchTransformInput() : 
    m_dataCapturedDestinationS3UriHasBeenSet(false),
    m_datasetFormatHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3InputMode(ProcessingS3InputMode::NOT_SET),
    m_s3InputModeHasBeenSet(false),
    m_s3DataDistributionType(ProcessingS3DataDistributionType::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false),
    m_featuresAttributeHasBeenSet(false),
    m_inferenceAttributeHasBeenSet(false),
    m_probabilityAttributeHasBeenSet(false),
    m_probabilityThresholdAttribute(0.0),
    m_probabilityThresholdAttributeHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false)
{
}

BatchTransformInput::BatchTransformInput(JsonView jsonValue) : 
    m_dataCapturedDestinationS3UriHasBeenSet(false),
    m_datasetFormatHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_s3InputMode(ProcessingS3InputMode::NOT_SET),
    m_s3InputModeHasBeenSet(false),
    m_s3DataDistributionType(ProcessingS3DataDistributionType::NOT_SET),
    m_s3DataDistributionTypeHasBeenSet(false),
    m_featuresAttributeHasBeenSet(false),
    m_inferenceAttributeHasBeenSet(false),
    m_probabilityAttributeHasBeenSet(false),
    m_probabilityThresholdAttribute(0.0),
    m_probabilityThresholdAttributeHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false)
{
  *this = jsonValue;
}

BatchTransformInput& BatchTransformInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataCapturedDestinationS3Uri"))
  {
    m_dataCapturedDestinationS3Uri = jsonValue.GetString("DataCapturedDestinationS3Uri");

    m_dataCapturedDestinationS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetFormat"))
  {
    m_datasetFormat = jsonValue.GetObject("DatasetFormat");

    m_datasetFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3InputMode"))
  {
    m_s3InputMode = ProcessingS3InputModeMapper::GetProcessingS3InputModeForName(jsonValue.GetString("S3InputMode"));

    m_s3InputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataDistributionType"))
  {
    m_s3DataDistributionType = ProcessingS3DataDistributionTypeMapper::GetProcessingS3DataDistributionTypeForName(jsonValue.GetString("S3DataDistributionType"));

    m_s3DataDistributionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeaturesAttribute"))
  {
    m_featuresAttribute = jsonValue.GetString("FeaturesAttribute");

    m_featuresAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InferenceAttribute"))
  {
    m_inferenceAttribute = jsonValue.GetString("InferenceAttribute");

    m_inferenceAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProbabilityAttribute"))
  {
    m_probabilityAttribute = jsonValue.GetString("ProbabilityAttribute");

    m_probabilityAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProbabilityThresholdAttribute"))
  {
    m_probabilityThresholdAttribute = jsonValue.GetDouble("ProbabilityThresholdAttribute");

    m_probabilityThresholdAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimeOffset"))
  {
    m_startTimeOffset = jsonValue.GetString("StartTimeOffset");

    m_startTimeOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimeOffset"))
  {
    m_endTimeOffset = jsonValue.GetString("EndTimeOffset");

    m_endTimeOffsetHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchTransformInput::Jsonize() const
{
  JsonValue payload;

  if(m_dataCapturedDestinationS3UriHasBeenSet)
  {
   payload.WithString("DataCapturedDestinationS3Uri", m_dataCapturedDestinationS3Uri);

  }

  if(m_datasetFormatHasBeenSet)
  {
   payload.WithObject("DatasetFormat", m_datasetFormat.Jsonize());

  }

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_s3InputModeHasBeenSet)
  {
   payload.WithString("S3InputMode", ProcessingS3InputModeMapper::GetNameForProcessingS3InputMode(m_s3InputMode));
  }

  if(m_s3DataDistributionTypeHasBeenSet)
  {
   payload.WithString("S3DataDistributionType", ProcessingS3DataDistributionTypeMapper::GetNameForProcessingS3DataDistributionType(m_s3DataDistributionType));
  }

  if(m_featuresAttributeHasBeenSet)
  {
   payload.WithString("FeaturesAttribute", m_featuresAttribute);

  }

  if(m_inferenceAttributeHasBeenSet)
  {
   payload.WithString("InferenceAttribute", m_inferenceAttribute);

  }

  if(m_probabilityAttributeHasBeenSet)
  {
   payload.WithString("ProbabilityAttribute", m_probabilityAttribute);

  }

  if(m_probabilityThresholdAttributeHasBeenSet)
  {
   payload.WithDouble("ProbabilityThresholdAttribute", m_probabilityThresholdAttribute);

  }

  if(m_startTimeOffsetHasBeenSet)
  {
   payload.WithString("StartTimeOffset", m_startTimeOffset);

  }

  if(m_endTimeOffsetHasBeenSet)
  {
   payload.WithString("EndTimeOffset", m_endTimeOffset);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
