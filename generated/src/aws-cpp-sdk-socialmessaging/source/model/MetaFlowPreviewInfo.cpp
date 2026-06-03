/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowPreviewInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowPreviewInfo::MetaFlowPreviewInfo(JsonView jsonValue) { *this = jsonValue; }

MetaFlowPreviewInfo& MetaFlowPreviewInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("previewUrl")) {
    m_previewUrl = jsonValue.GetString("previewUrl");
    m_previewUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expiresAt")) {
    m_expiresAt = jsonValue.GetString("expiresAt");
    m_expiresAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowPreviewInfo::Jsonize() const {
  JsonValue payload;

  if (m_previewUrlHasBeenSet) {
    payload.WithString("previewUrl", m_previewUrl);
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("expiresAt", m_expiresAt);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
