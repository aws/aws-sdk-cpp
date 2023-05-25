/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobOutput.h>
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

LabelingJobOutput::LabelingJobOutput() : 
    m_outputDatasetS3UriHasBeenSet(false),
    m_finalActiveLearningModelArnHasBeenSet(false)
{
}

LabelingJobOutput::LabelingJobOutput(JsonView jsonValue) : 
    m_outputDatasetS3UriHasBeenSet(false),
    m_finalActiveLearningModelArnHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobOutput& LabelingJobOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputDatasetS3Uri"))
  {
    m_outputDatasetS3Uri = jsonValue.GetString("OutputDatasetS3Uri");

    m_outputDatasetS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FinalActiveLearningModelArn"))
  {
    m_finalActiveLearningModelArn = jsonValue.GetString("FinalActiveLearningModelArn");

    m_finalActiveLearningModelArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputDatasetS3UriHasBeenSet)
  {
   payload.WithString("OutputDatasetS3Uri", m_outputDatasetS3Uri);

  }

  if(m_finalActiveLearningModelArnHasBeenSet)
  {
   payload.WithString("FinalActiveLearningModelArn", m_finalActiveLearningModelArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
