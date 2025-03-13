/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/S3DestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

S3DestinationConfig::S3DestinationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

S3DestinationConfig& S3DestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketName"))
  {
    m_bucketName = jsonValue.GetString("BucketName");
    m_bucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationPath"))
  {
    m_destinationPath = jsonValue.GetString("DestinationPath");
    m_destinationPathHasBeenSet = true;
  }
  return *this;
}

JsonValue S3DestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

  }

  if(m_destinationPathHasBeenSet)
  {
   payload.WithString("DestinationPath", m_destinationPath);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
