/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DataModelS3Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

DataModelS3Configuration::DataModelS3Configuration() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
}

DataModelS3Configuration::DataModelS3Configuration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyHasBeenSet(false)
{
  *this = jsonValue;
}

DataModelS3Configuration& DataModelS3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKey"))
  {
    m_objectKey = jsonValue.GetString("ObjectKey");

    m_objectKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue DataModelS3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_objectKeyHasBeenSet)
  {
   payload.WithString("ObjectKey", m_objectKey);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
