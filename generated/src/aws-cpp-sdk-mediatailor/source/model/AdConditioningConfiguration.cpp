/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AdConditioningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

AdConditioningConfiguration::AdConditioningConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AdConditioningConfiguration& AdConditioningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamingMediaFileConditioning"))
  {
    m_streamingMediaFileConditioning = StreamingMediaFileConditioningMapper::GetStreamingMediaFileConditioningForName(jsonValue.GetString("StreamingMediaFileConditioning"));
    m_streamingMediaFileConditioningHasBeenSet = true;
  }
  return *this;
}

JsonValue AdConditioningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_streamingMediaFileConditioningHasBeenSet)
  {
   payload.WithString("StreamingMediaFileConditioning", StreamingMediaFileConditioningMapper::GetNameForStreamingMediaFileConditioning(m_streamingMediaFileConditioning));
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
