/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/SigningScheme.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

SigningScheme::SigningScheme(JsonView jsonValue) { *this = jsonValue; }

SigningScheme& SigningScheme::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DefaultScheme")) {
    m_defaultScheme = jsonValue.GetObject("DefaultScheme");
    m_defaultSchemeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SmimeScheme")) {
    m_smimeScheme = jsonValue.GetObject("SmimeScheme");
    m_smimeSchemeHasBeenSet = true;
  }
  return *this;
}

JsonValue SigningScheme::Jsonize() const {
  JsonValue payload;

  if (m_defaultSchemeHasBeenSet) {
    payload.WithObject("DefaultScheme", m_defaultScheme.Jsonize());
  }

  if (m_smimeSchemeHasBeenSet) {
    payload.WithObject("SmimeScheme", m_smimeScheme.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
