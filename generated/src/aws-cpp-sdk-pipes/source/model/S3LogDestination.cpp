/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/S3LogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

S3LogDestination::S3LogDestination() : 
    m_bucketNameHasBeenSet(false),
    m_bucketOwnerHasBeenSet(false),
    m_outputFormat(S3OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

S3LogDestination::S3LogDestination(JsonView jsonValue) : 
    m_bucketNameHasBeenSet(false),
    m_bucketOwnerHasBeenSet(false),
    m_outputFormat(S3OutputFormat::NOT_SET),
    m_outputFormatHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

S3LogDestination& S3LogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BucketOwner"))
  {
    m_bucketOwner = jsonValue.GetString("BucketOwner");

    m_bucketOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputFormat"))
  {
    m_outputFormat = S3OutputFormatMapper::GetS3OutputFormatForName(jsonValue.GetString("OutputFormat"));

    m_outputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue S3LogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_bucketOwnerHasBeenSet)
  {
   payload.WithString("BucketOwner", m_bucketOwner);

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("OutputFormat", S3OutputFormatMapper::GetNameForS3OutputFormat(m_outputFormat));
  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
