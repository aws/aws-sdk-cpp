/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/BulkJobResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

BulkJobResult::BulkJobResult(JsonView jsonValue) { *this = jsonValue; }

BulkJobResult& BulkJobResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RequestId")) {
    m_requestId = jsonValue.GetString("RequestId");
    m_requestIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = BulkRecordStatusMapper::GetBulkRecordStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceIdentifier")) {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");
    m_resourceIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkJobResult::Jsonize() const {
  JsonValue payload;

  if (m_requestIdHasBeenSet) {
    payload.WithString("RequestId", m_requestId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BulkRecordStatusMapper::GetNameForBulkRecordStatus(m_status));
  }

  if (m_resourceIdentifierHasBeenSet) {
    payload.WithString("ResourceIdentifier", m_resourceIdentifier);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
