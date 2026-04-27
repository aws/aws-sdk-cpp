/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SplitConstruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SplitConstruct::SplitConstruct(JsonView jsonValue) { *this = jsonValue; }

SplitConstruct& SplitConstruct::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cidrBlock")) {
    m_cidrBlock = jsonValue.GetString("cidrBlock");
    m_cidrBlockHasBeenSet = true;
  }
  return *this;
}

JsonValue SplitConstruct::Jsonize() const {
  JsonValue payload;

  if (m_cidrBlockHasBeenSet) {
    payload.WithString("cidrBlock", m_cidrBlock);
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
