/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelingJobS3DataSource.h>
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

LabelingJobS3DataSource::LabelingJobS3DataSource() : 
    m_manifestS3UriHasBeenSet(false)
{
}

LabelingJobS3DataSource::LabelingJobS3DataSource(JsonView jsonValue) : 
    m_manifestS3UriHasBeenSet(false)
{
  *this = jsonValue;
}

LabelingJobS3DataSource& LabelingJobS3DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestS3Uri"))
  {
    m_manifestS3Uri = jsonValue.GetString("ManifestS3Uri");

    m_manifestS3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelingJobS3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_manifestS3UriHasBeenSet)
  {
   payload.WithString("ManifestS3Uri", m_manifestS3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
