/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TransformS3DataSource.h>
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

TransformS3DataSource::TransformS3DataSource() : 
    m_s3DataType(S3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

TransformS3DataSource::TransformS3DataSource(JsonView jsonValue) : 
    m_s3DataType(S3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

TransformS3DataSource& TransformS3DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataType"))
  {
    m_s3DataType = S3DataTypeMapper::GetS3DataTypeForName(jsonValue.GetString("S3DataType"));

    m_s3DataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformS3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataTypeHasBeenSet)
  {
   payload.WithString("S3DataType", S3DataTypeMapper::GetNameForS3DataType(m_s3DataType));
  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
