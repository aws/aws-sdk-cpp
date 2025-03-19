/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/StaticFileS3SourceOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

StaticFileS3SourceOptions::StaticFileS3SourceOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

StaticFileS3SourceOptions& StaticFileS3SourceOptions::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue StaticFileS3SourceOptions::Jsonize() const
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

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
