/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/RemoteSourceAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

RemoteSourceAction::RemoteSourceAction(JsonView jsonValue) { *this = jsonValue; }

RemoteSourceAction& RemoteSourceAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("remoteSourceActionID")) {
    m_remoteSourceActionID = jsonValue.GetString("remoteSourceActionID");
    m_remoteSourceActionIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ssmParameterName")) {
    m_ssmParameterName = jsonValue.GetString("ssmParameterName");
    m_ssmParameterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeoutSeconds")) {
    m_timeoutSeconds = jsonValue.GetInteger("timeoutSeconds");
    m_timeoutSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatingSystem")) {
    m_operatingSystem = jsonValue.GetString("operatingSystem");
    m_operatingSystemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteSourceAction::Jsonize() const {
  JsonValue payload;

  if (m_remoteSourceActionIDHasBeenSet) {
    payload.WithString("remoteSourceActionID", m_remoteSourceActionID);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_ssmParameterNameHasBeenSet) {
    payload.WithString("ssmParameterName", m_ssmParameterName);
  }

  if (m_timeoutSecondsHasBeenSet) {
    payload.WithInteger("timeoutSeconds", m_timeoutSeconds);
  }

  if (m_operatingSystemHasBeenSet) {
    payload.WithString("operatingSystem", m_operatingSystem);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
