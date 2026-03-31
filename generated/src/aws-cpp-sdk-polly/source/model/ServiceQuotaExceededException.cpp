/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/polly/model/ServiceQuotaExceededException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Polly {
namespace Model {

ServiceQuotaExceededException::ServiceQuotaExceededException(JsonView jsonValue) { *this = jsonValue; }

ServiceQuotaExceededException& ServiceQuotaExceededException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("quotaCode")) {
    m_quotaCode = QuotaCodeMapper::GetQuotaCodeForName(jsonValue.GetString("quotaCode"));
    m_quotaCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceCode")) {
    m_serviceCode = ServiceCodeMapper::GetServiceCodeForName(jsonValue.GetString("serviceCode"));
    m_serviceCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceQuotaExceededException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_quotaCodeHasBeenSet) {
    payload.WithString("quotaCode", QuotaCodeMapper::GetNameForQuotaCode(m_quotaCode));
  }

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("serviceCode", ServiceCodeMapper::GetNameForServiceCode(m_serviceCode));
  }

  return payload;
}

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
