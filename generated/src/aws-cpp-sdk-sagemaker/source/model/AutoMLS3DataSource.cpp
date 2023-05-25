/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLS3DataSource.h>
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

AutoMLS3DataSource::AutoMLS3DataSource() : 
    m_s3DataType(AutoMLS3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

AutoMLS3DataSource::AutoMLS3DataSource(JsonView jsonValue) : 
    m_s3DataType(AutoMLS3DataType::NOT_SET),
    m_s3DataTypeHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLS3DataSource& AutoMLS3DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3DataType"))
  {
    m_s3DataType = AutoMLS3DataTypeMapper::GetAutoMLS3DataTypeForName(jsonValue.GetString("S3DataType"));

    m_s3DataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLS3DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataTypeHasBeenSet)
  {
   payload.WithString("S3DataType", AutoMLS3DataTypeMapper::GetNameForAutoMLS3DataType(m_s3DataType));
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
