/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowAsset.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowAsset::MetaFlowAsset(JsonView jsonValue) { *this = jsonValue; }

MetaFlowAsset& MetaFlowAsset::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assetType")) {
    m_assetType = jsonValue.GetString("assetType");
    m_assetTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("downloadUrl")) {
    m_downloadUrl = jsonValue.GetString("downloadUrl");
    m_downloadUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowAsset::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_assetTypeHasBeenSet) {
    payload.WithString("assetType", m_assetType);
  }

  if (m_downloadUrlHasBeenSet) {
    payload.WithString("downloadUrl", m_downloadUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
