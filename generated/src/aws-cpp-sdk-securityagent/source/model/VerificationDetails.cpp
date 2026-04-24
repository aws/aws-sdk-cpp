/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/VerificationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

VerificationDetails::VerificationDetails(JsonView jsonValue) { *this = jsonValue; }

VerificationDetails& VerificationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("method")) {
    m_method = DomainVerificationMethodMapper::GetDomainVerificationMethodForName(jsonValue.GetString("method"));
    m_methodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsTxt")) {
    m_dnsTxt = jsonValue.GetObject("dnsTxt");
    m_dnsTxtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("httpRoute")) {
    m_httpRoute = jsonValue.GetObject("httpRoute");
    m_httpRouteHasBeenSet = true;
  }
  return *this;
}

JsonValue VerificationDetails::Jsonize() const {
  JsonValue payload;

  if (m_methodHasBeenSet) {
    payload.WithString("method", DomainVerificationMethodMapper::GetNameForDomainVerificationMethod(m_method));
  }

  if (m_dnsTxtHasBeenSet) {
    payload.WithObject("dnsTxt", m_dnsTxt.Jsonize());
  }

  if (m_httpRouteHasBeenSet) {
    payload.WithObject("httpRoute", m_httpRoute.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
