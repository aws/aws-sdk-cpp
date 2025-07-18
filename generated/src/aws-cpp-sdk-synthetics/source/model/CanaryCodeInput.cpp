/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryCodeInput.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Synthetics
{
namespace Model
{

CanaryCodeInput::CanaryCodeInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CanaryCodeInput& CanaryCodeInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Key"))
  {
    m_s3Key = jsonValue.GetString("S3Key");
    m_s3KeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Version"))
  {
    m_s3Version = jsonValue.GetString("S3Version");
    m_s3VersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ZipFile"))
  {
    m_zipFile = HashingUtils::Base64Decode(jsonValue.GetString("ZipFile"));
    m_zipFileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");
    m_handlerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("Dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsObject());
    }
    m_dependenciesHasBeenSet = true;
  }
  return *this;
}

JsonValue CanaryCodeInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3KeyHasBeenSet)
  {
   payload.WithString("S3Key", m_s3Key);

  }

  if(m_s3VersionHasBeenSet)
  {
   payload.WithString("S3Version", m_s3Version);

  }

  if(m_zipFileHasBeenSet)
  {
   payload.WithString("ZipFile", HashingUtils::Base64Encode(m_zipFile));
  }

  if(m_handlerHasBeenSet)
  {
   payload.WithString("Handler", m_handler);

  }

  if(m_dependenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependenciesJsonList(m_dependencies.size());
   for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
   {
     dependenciesJsonList[dependenciesIndex].AsObject(m_dependencies[dependenciesIndex].Jsonize());
   }
   payload.WithArray("Dependencies", std::move(dependenciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Synthetics
} // namespace Aws
