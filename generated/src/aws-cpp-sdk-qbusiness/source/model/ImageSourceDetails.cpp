/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ImageSourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ImageSourceDetails::ImageSourceDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageSourceDetails& ImageSourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mediaId"))
  {
    m_mediaId = jsonValue.GetString("mediaId");
    m_mediaIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaMimeType"))
  {
    m_mediaMimeType = jsonValue.GetString("mediaMimeType");
    m_mediaMimeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageSourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_mediaIdHasBeenSet)
  {
   payload.WithString("mediaId", m_mediaId);

  }

  if(m_mediaMimeTypeHasBeenSet)
  {
   payload.WithString("mediaMimeType", m_mediaMimeType);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
