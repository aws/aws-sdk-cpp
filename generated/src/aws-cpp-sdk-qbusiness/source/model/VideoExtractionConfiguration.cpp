/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/VideoExtractionConfiguration.h>
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

VideoExtractionConfiguration::VideoExtractionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoExtractionConfiguration& VideoExtractionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("videoExtractionStatus"))
  {
    m_videoExtractionStatus = VideoExtractionStatusMapper::GetVideoExtractionStatusForName(jsonValue.GetString("videoExtractionStatus"));
    m_videoExtractionStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoExtractionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_videoExtractionStatusHasBeenSet)
  {
   payload.WithString("videoExtractionStatus", VideoExtractionStatusMapper::GetNameForVideoExtractionStatus(m_videoExtractionStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
