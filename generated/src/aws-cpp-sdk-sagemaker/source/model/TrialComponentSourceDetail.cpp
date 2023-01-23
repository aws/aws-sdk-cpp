/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentSourceDetail.h>
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

TrialComponentSourceDetail::TrialComponentSourceDetail() : 
    m_sourceArnHasBeenSet(false),
    m_trainingJobHasBeenSet(false),
    m_processingJobHasBeenSet(false),
    m_transformJobHasBeenSet(false)
{
}

TrialComponentSourceDetail::TrialComponentSourceDetail(JsonView jsonValue) : 
    m_sourceArnHasBeenSet(false),
    m_trainingJobHasBeenSet(false),
    m_processingJobHasBeenSet(false),
    m_transformJobHasBeenSet(false)
{
  *this = jsonValue;
}

TrialComponentSourceDetail& TrialComponentSourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceArn"))
  {
    m_sourceArn = jsonValue.GetString("SourceArn");

    m_sourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrainingJob"))
  {
    m_trainingJob = jsonValue.GetObject("TrainingJob");

    m_trainingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingJob"))
  {
    m_processingJob = jsonValue.GetObject("ProcessingJob");

    m_processingJobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJob"))
  {
    m_transformJob = jsonValue.GetObject("TransformJob");

    m_transformJobHasBeenSet = true;
  }

  return *this;
}

JsonValue TrialComponentSourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_trainingJobHasBeenSet)
  {
   payload.WithObject("TrainingJob", m_trainingJob.Jsonize());

  }

  if(m_processingJobHasBeenSet)
  {
   payload.WithObject("ProcessingJob", m_processingJob.Jsonize());

  }

  if(m_transformJobHasBeenSet)
  {
   payload.WithObject("TransformJob", m_transformJob.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
