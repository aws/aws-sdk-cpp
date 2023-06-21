/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelDataSource.h>
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

ModelDataSource::ModelDataSource() : 
    m_s3DataSourceHasBeenSet(false)
{
}

ModelDataSource::ModelDataSource(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

ModelDataSource& ModelDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("S3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelDataSource::Jsonize() const
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
