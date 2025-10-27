/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ClientCredentialsDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ClientCredentialsDetails::ClientCredentialsDetails(JsonView jsonValue) { *this = jsonValue; }

ClientCredentialsDetails& ClientCredentialsDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ClientCredentialsGrantDetails")) {
    m_clientCredentialsGrantDetails = jsonValue.GetObject("ClientCredentialsGrantDetails");
    m_clientCredentialsGrantDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientCredentialsDetails::Jsonize() const {
  JsonValue payload;

  if (m_clientCredentialsGrantDetailsHasBeenSet) {
    payload.WithObject("ClientCredentialsGrantDetails", m_clientCredentialsGrantDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
