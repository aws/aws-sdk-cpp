/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/MediaAnalysisModelVersions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

MediaAnalysisModelVersions::MediaAnalysisModelVersions() : 
    m_moderationHasBeenSet(false)
{
}

MediaAnalysisModelVersions::MediaAnalysisModelVersions(JsonView jsonValue) : 
    m_moderationHasBeenSet(false)
{
  *this = jsonValue;
}

MediaAnalysisModelVersions& MediaAnalysisModelVersions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Moderation"))
  {
    m_moderation = jsonValue.GetString("Moderation");

    m_moderationHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaAnalysisModelVersions::Jsonize() const
{
  JsonValue payload;

  if(m_moderationHasBeenSet)
  {
   payload.WithString("Moderation", m_moderation);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
