/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AssetBundleImportSource.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AssetBundleImportSource::AssetBundleImportSource() : 
    m_bodyHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

AssetBundleImportSource::AssetBundleImportSource(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

AssetBundleImportSource& AssetBundleImportSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = HashingUtils::Base64Decode(jsonValue.GetString("Body"));
    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetBundleImportSource::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", HashingUtils::Base64Encode(m_body));
  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
