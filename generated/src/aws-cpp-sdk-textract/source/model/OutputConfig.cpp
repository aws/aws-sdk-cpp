/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/OutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

OutputConfig::OutputConfig() : 
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
}

OutputConfig::OutputConfig(JsonView jsonValue) : 
    m_s3BucketHasBeenSet(false),
    m_s3PrefixHasBeenSet(false)
{
  *this = jsonValue;
}

OutputConfig& OutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");

    m_s3PrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
