/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotDestinationConfiguration.h>
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

SnapshotDestinationConfiguration::SnapshotDestinationConfiguration() : 
    m_s3DestinationsHasBeenSet(false)
{
}

SnapshotDestinationConfiguration::SnapshotDestinationConfiguration(JsonView jsonValue) : 
    m_s3DestinationsHasBeenSet(false)
{
  *this = jsonValue;
}

SnapshotDestinationConfiguration& SnapshotDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Destinations"))
  {
    Aws::Utils::Array<JsonView> s3DestinationsJsonList = jsonValue.GetArray("S3Destinations");
    for(unsigned s3DestinationsIndex = 0; s3DestinationsIndex < s3DestinationsJsonList.GetLength(); ++s3DestinationsIndex)
    {
      m_s3Destinations.push_back(s3DestinationsJsonList[s3DestinationsIndex].AsObject());
    }
    m_s3DestinationsHasBeenSet = true;
  }

  return *this;
}

JsonValue SnapshotDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3DestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3DestinationsJsonList(m_s3Destinations.size());
   for(unsigned s3DestinationsIndex = 0; s3DestinationsIndex < s3DestinationsJsonList.GetLength(); ++s3DestinationsIndex)
   {
     s3DestinationsJsonList[s3DestinationsIndex].AsObject(m_s3Destinations[s3DestinationsIndex].Jsonize());
   }
   payload.WithArray("S3Destinations", std::move(s3DestinationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
