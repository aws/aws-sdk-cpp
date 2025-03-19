/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ImageSource.h>
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

ImageSource::ImageSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageSource& ImageSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PublicUrl"))
  {
    m_publicUrl = jsonValue.GetString("PublicUrl");
    m_publicUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageSource::Jsonize() const
{
  JsonValue payload;

  if(m_publicUrlHasBeenSet)
  {
   payload.WithString("PublicUrl", m_publicUrl);

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
