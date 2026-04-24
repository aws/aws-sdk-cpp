/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/security-ir/model/IncidentResponder.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {

IncidentResponder::IncidentResponder(JsonView jsonValue) { *this = jsonValue; }

IncidentResponder& IncidentResponder::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobTitle")) {
    m_jobTitle = jsonValue.GetString("jobTitle");
    m_jobTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("communicationPreferences")) {
    Aws::Utils::Array<JsonView> communicationPreferencesJsonList = jsonValue.GetArray("communicationPreferences");
    for (unsigned communicationPreferencesIndex = 0; communicationPreferencesIndex < communicationPreferencesJsonList.GetLength();
         ++communicationPreferencesIndex) {
      m_communicationPreferences.push_back(
          CommunicationTypeMapper::GetCommunicationTypeForName(communicationPreferencesJsonList[communicationPreferencesIndex].AsString()));
    }
    m_communicationPreferencesHasBeenSet = true;
  }
  return *this;
}

JsonValue IncidentResponder::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_jobTitleHasBeenSet) {
    payload.WithString("jobTitle", m_jobTitle);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("email", m_email);
  }

  if (m_communicationPreferencesHasBeenSet) {
    Aws::Utils::Array<JsonValue> communicationPreferencesJsonList(m_communicationPreferences.size());
    for (unsigned communicationPreferencesIndex = 0; communicationPreferencesIndex < communicationPreferencesJsonList.GetLength();
         ++communicationPreferencesIndex) {
      communicationPreferencesJsonList[communicationPreferencesIndex].AsString(
          CommunicationTypeMapper::GetNameForCommunicationType(m_communicationPreferences[communicationPreferencesIndex]));
    }
    payload.WithArray("communicationPreferences", std::move(communicationPreferencesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
