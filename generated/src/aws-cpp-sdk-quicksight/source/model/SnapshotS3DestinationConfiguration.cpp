/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotS3DestinationConfiguration.h>
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

SnapshotS3DestinationConfiguration::SnapshotS3DestinationConfiguration() : 
    m_bucketConfigurationHasBeenSet(false)
{
}

SnapshotS3DestinationConfiguration::SnapshotS3DestinationConfiguration(JsonView jsonValue) : 
    m_bucketConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotS3DestinationConfiguration& SnapshotS3DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BucketConfiguration"))
  {
    m_bucketConfiguration = jsonValue.GetObject("BucketConfiguration");

    m_bucketConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotS3DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketConfigurationHasBeenSet)
  {
   payload.WithObject("BucketConfiguration", m_bucketConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
