/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/MessageSecurityOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

MessageSecurityOptions::MessageSecurityOptions(JsonView jsonValue) { *this = jsonValue; }

MessageSecurityOptions& MessageSecurityOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SigningScheme")) {
    m_signingScheme = jsonValue.GetObject("SigningScheme");
    m_signingSchemeHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageSecurityOptions::Jsonize() const {
  JsonValue payload;

  if (m_signingSchemeHasBeenSet) {
    payload.WithObject("SigningScheme", m_signingScheme.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
