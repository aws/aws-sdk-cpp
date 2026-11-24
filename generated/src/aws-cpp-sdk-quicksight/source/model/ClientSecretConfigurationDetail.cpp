/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ClientSecretConfigurationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ClientSecretConfigurationDetail::ClientSecretConfigurationDetail(JsonView jsonValue) { *this = jsonValue; }

ClientSecretConfigurationDetail& ClientSecretConfigurationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Idp")) {
    m_idp = jsonValue.GetObject("Idp");
    m_idpHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSecretConfigurationDetail::Jsonize() const {
  JsonValue payload;

  if (m_idpHasBeenSet) {
    payload.WithObject("Idp", m_idp.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
