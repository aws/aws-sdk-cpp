/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmailmessageflow/model/S3Reference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkMailMessageFlow
{
namespace Model
{

S3Reference::S3Reference() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
}

S3Reference::S3Reference(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_objectVersionHasBeenSet(false)
{
  *this = jsonValue;
}

S3Reference& S3Reference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucket"))
  {
    m_bucket = jsonValue.GetString("bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("objectVersion"))
  {
    m_objectVersion = jsonValue.GetString("objectVersion");

    m_objectVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Reference::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_objectVersionHasBeenSet)
  {
   payload.WithString("objectVersion", m_objectVersion);

  }

  return payload;
}

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
