/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography-data/model/OutgoingKeyMaterial.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptographyData {
namespace Model {

OutgoingKeyMaterial::OutgoingKeyMaterial(JsonView jsonValue) { *this = jsonValue; }

OutgoingKeyMaterial& OutgoingKeyMaterial::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Tr31KeyBlock")) {
    m_tr31KeyBlock = jsonValue.GetObject("Tr31KeyBlock");
    m_tr31KeyBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue OutgoingKeyMaterial::Jsonize() const {
  JsonValue payload;

  if (m_tr31KeyBlockHasBeenSet) {
    payload.WithObject("Tr31KeyBlock", m_tr31KeyBlock.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptographyData
}  // namespace Aws
