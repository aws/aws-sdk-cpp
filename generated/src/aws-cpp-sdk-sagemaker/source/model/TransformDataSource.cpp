/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformDataSource.h>
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

TransformDataSource::TransformDataSource() : 
    m_s3DataSourceHasBeenSet(false)
{
}

TransformDataSource::TransformDataSource(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

TransformDataSource& TransformDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("S3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("S3DataSource", m_s3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
