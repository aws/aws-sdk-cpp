/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/signer/model/S3Destination.h>
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

S3Destination::S3Destination() : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

S3Destination::S3Destination(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3Destination& S3Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Destination::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace signer
} // namespace Aws
