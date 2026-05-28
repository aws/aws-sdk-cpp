/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/SystemServiceDisassociatedMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

SystemServiceDisassociatedMetadata::SystemServiceDisassociatedMetadata(JsonView jsonValue) { *this = jsonValue; }

SystemServiceDisassociatedMetadata& SystemServiceDisassociatedMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceName")) {
    m_serviceName = jsonValue.GetString("serviceName");
    m_serviceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceArn")) {
    m_serviceArn = jsonValue.GetString("serviceArn");
    m_serviceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userJourneysAffected")) {
    Aws::Utils::Array<JsonView> userJourneysAffectedJsonList = jsonValue.GetArray("userJourneysAffected");
    for (unsigned userJourneysAffectedIndex = 0; userJourneysAffectedIndex < userJourneysAffectedJsonList.GetLength();
         ++userJourneysAffectedIndex) {
      m_userJourneysAffected.push_back(userJourneysAffectedJsonList[userJourneysAffectedIndex].AsString());
    }
    m_userJourneysAffectedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  return *this;
}

JsonValue SystemServiceDisassociatedMetadata::Jsonize() const {
  JsonValue payload;

  if (m_serviceNameHasBeenSet) {
    payload.WithString("serviceName", m_serviceName);
  }

  if (m_serviceArnHasBeenSet) {
    payload.WithString("serviceArn", m_serviceArn);
  }

  if (m_userJourneysAffectedHasBeenSet) {
    Aws::Utils::Array<JsonValue> userJourneysAffectedJsonList(m_userJourneysAffected.size());
    for (unsigned userJourneysAffectedIndex = 0; userJourneysAffectedIndex < userJourneysAffectedJsonList.GetLength();
         ++userJourneysAffectedIndex) {
      userJourneysAffectedJsonList[userJourneysAffectedIndex].AsString(m_userJourneysAffected[userJourneysAffectedIndex]);
    }
    payload.WithArray("userJourneysAffected", std::move(userJourneysAffectedJsonList));
  }

  if (m_commentHasBeenSet) {
    payload.WithString("comment", m_comment);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
