/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/Issue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

Issue::Issue(JsonView jsonValue) { *this = jsonValue; }

Issue& Issue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Severity")) {
    m_severity = jsonValue.GetString("Severity");
    m_severityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue Issue::Jsonize() const {
  JsonValue payload;

  if (m_severityHasBeenSet) {
    payload.WithString("Severity", m_severity);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
