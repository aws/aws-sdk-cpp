/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/SmimeSigningScheme.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

SmimeSigningScheme::SmimeSigningScheme(JsonView jsonValue) { *this = jsonValue; }

SmimeSigningScheme& SmimeSigningScheme::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SignatureFormat")) {
    m_signatureFormat = SignatureFormatMapper::GetSignatureFormatForName(jsonValue.GetString("SignatureFormat"));
    m_signatureFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue SmimeSigningScheme::Jsonize() const {
  JsonValue payload;

  if (m_signatureFormatHasBeenSet) {
    payload.WithString("SignatureFormat", SignatureFormatMapper::GetNameForSignatureFormat(m_signatureFormat));
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
