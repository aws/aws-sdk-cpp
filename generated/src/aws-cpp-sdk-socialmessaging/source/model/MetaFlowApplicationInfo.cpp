/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/model/MetaFlowApplicationInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SocialMessaging {
namespace Model {

MetaFlowApplicationInfo::MetaFlowApplicationInfo(JsonView jsonValue) { *this = jsonValue; }

MetaFlowApplicationInfo& MetaFlowApplicationInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("link")) {
    m_link = jsonValue.GetString("link");
    m_linkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  return *this;
}

JsonValue MetaFlowApplicationInfo::Jsonize() const {
  JsonValue payload;

  if (m_linkHasBeenSet) {
    payload.WithString("link", m_link);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  return payload;
}

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
