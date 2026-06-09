/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/VideoExtractionConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

VideoExtractionConfiguration::VideoExtractionConfiguration(JsonView jsonValue) { *this = jsonValue; }

VideoExtractionConfiguration& VideoExtractionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("videoExtractionStatus")) {
    m_videoExtractionStatus = VideoExtractionStatusMapper::GetVideoExtractionStatusForName(jsonValue.GetString("videoExtractionStatus"));
    m_videoExtractionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("videoExtractionType")) {
    m_videoExtractionType = VideoExtractionTypeMapper::GetVideoExtractionTypeForName(jsonValue.GetString("videoExtractionType"));
    m_videoExtractionTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoExtractionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_videoExtractionStatusHasBeenSet) {
    payload.WithString("videoExtractionStatus", VideoExtractionStatusMapper::GetNameForVideoExtractionStatus(m_videoExtractionStatus));
  }

  if (m_videoExtractionTypeHasBeenSet) {
    payload.WithString("videoExtractionType", VideoExtractionTypeMapper::GetNameForVideoExtractionType(m_videoExtractionType));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
