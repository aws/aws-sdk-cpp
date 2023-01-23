/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/OutputLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

OutputLocation::OutputLocation() : 
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
}

OutputLocation::OutputLocation(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

OutputLocation& OutputLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("s3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("s3Prefix");

    m_s3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("s3Bucket", m_s3Bucket);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("s3Prefix", m_s3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
