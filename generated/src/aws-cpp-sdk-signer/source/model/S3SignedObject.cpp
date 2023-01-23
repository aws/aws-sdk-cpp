/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/S3SignedObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace signer
{
namespace Model
{

S3SignedObject::S3SignedObject() : 
    m_bucketNameHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

S3SignedObject::S3SignedObject(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

S3SignedObject& S3SignedObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue S3SignedObject::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
