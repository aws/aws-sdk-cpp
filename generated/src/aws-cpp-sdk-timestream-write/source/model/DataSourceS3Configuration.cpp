/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/DataSourceS3Configuration.h>
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

DataSourceS3Configuration::DataSourceS3Configuration() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false)
{
}

DataSourceS3Configuration::DataSourceS3Configuration(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceS3Configuration& DataSourceS3Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectKeyPrefix"))
  {
    m_objectKeyPrefix = jsonValue.GetString("ObjectKeyPrefix");

    m_objectKeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceS3Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_objectKeyPrefixHasBeenSet)
  {
   payload.WithString("ObjectKeyPrefix", m_objectKeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
