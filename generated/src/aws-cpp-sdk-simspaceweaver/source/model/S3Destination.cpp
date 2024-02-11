/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/S3Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{

S3Destination::S3Destination() : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false)
{
}

S3Destination::S3Destination(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_objectKeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Destination& S3Destination::operator =(JsonView jsonValue)
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

JsonValue S3Destination::Jsonize() const
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
} // namespace SimSpaceWeaver
} // namespace Aws
