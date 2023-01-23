/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobSnsDataSource.h>
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

LabelingJobSnsDataSource::LabelingJobSnsDataSource() : 
    m_snsTopicArnHasBeenSet(false)
{
}

LabelingJobSnsDataSource::LabelingJobSnsDataSource(JsonView jsonValue) : 
    m_snsTopicArnHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobSnsDataSource& LabelingJobSnsDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobSnsDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
