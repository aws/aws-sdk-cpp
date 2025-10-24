/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ReadClientCredentialsDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ReadClientCredentialsDetails::ReadClientCredentialsDetails(JsonView jsonValue) { *this = jsonValue; }

ReadClientCredentialsDetails& ReadClientCredentialsDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ReadClientCredentialsGrantDetails")) {
    m_readClientCredentialsGrantDetails = jsonValue.GetObject("ReadClientCredentialsGrantDetails");
    m_readClientCredentialsGrantDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadClientCredentialsDetails::Jsonize() const {
  JsonValue payload;

  if (m_readClientCredentialsGrantDetailsHasBeenSet) {
    payload.WithObject("ReadClientCredentialsGrantDetails", m_readClientCredentialsGrantDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
