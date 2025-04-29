/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-guiconnect/model/RecordingDestinations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMGuiConnect
{
namespace Model
{

RecordingDestinations::RecordingDestinations(JsonView jsonValue)
{
  *this = jsonValue;
}

RecordingDestinations& RecordingDestinations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Buckets"))
  {
    Aws::Utils::Array<JsonView> s3BucketsJsonList = jsonValue.GetArray("S3Buckets");
    for(unsigned s3BucketsIndex = 0; s3BucketsIndex < s3BucketsJsonList.GetLength(); ++s3BucketsIndex)
    {
      m_s3Buckets.push_back(s3BucketsJsonList[s3BucketsIndex].AsObject());
    }
    m_s3BucketsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordingDestinations::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3BucketsJsonList(m_s3Buckets.size());
   for(unsigned s3BucketsIndex = 0; s3BucketsIndex < s3BucketsJsonList.GetLength(); ++s3BucketsIndex)
   {
     s3BucketsJsonList[s3BucketsIndex].AsObject(m_s3Buckets[s3BucketsIndex].Jsonize());
   }
   payload.WithArray("S3Buckets", std::move(s3BucketsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
