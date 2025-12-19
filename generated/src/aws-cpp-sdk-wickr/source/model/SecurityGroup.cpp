/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/SecurityGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Wickr {
namespace Model {

SecurityGroup::SecurityGroup(JsonView jsonValue) { *this = jsonValue; }

SecurityGroup& SecurityGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("activeMembers")) {
    m_activeMembers = jsonValue.GetInteger("activeMembers");
    m_activeMembersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("botMembers")) {
    m_botMembers = jsonValue.GetInteger("botMembers");
    m_botMembersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("activeDirectoryGuid")) {
    m_activeDirectoryGuid = jsonValue.GetString("activeDirectoryGuid");
    m_activeDirectoryGuidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isDefault")) {
    m_isDefault = jsonValue.GetBool("isDefault");
    m_isDefaultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modified")) {
    m_modified = jsonValue.GetInteger("modified");
    m_modifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupSettings")) {
    m_securityGroupSettings = jsonValue.GetObject("securityGroupSettings");
    m_securityGroupSettingsHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityGroup::Jsonize() const {
  JsonValue payload;

  if (m_activeMembersHasBeenSet) {
    payload.WithInteger("activeMembers", m_activeMembers);
  }

  if (m_botMembersHasBeenSet) {
    payload.WithInteger("botMembers", m_botMembers);
  }

  if (m_activeDirectoryGuidHasBeenSet) {
    payload.WithString("activeDirectoryGuid", m_activeDirectoryGuid);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_isDefaultHasBeenSet) {
    payload.WithBool("isDefault", m_isDefault);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_modifiedHasBeenSet) {
    payload.WithInteger("modified", m_modified);
  }

  if (m_securityGroupSettingsHasBeenSet) {
    payload.WithObject("securityGroupSettings", m_securityGroupSettings.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
