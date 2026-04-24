/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/Action.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

Action::Action(JsonView jsonValue) { *this = jsonValue; }

Action& Action::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("noBid")) {
    m_noBid = jsonValue.GetObject("noBid");
    m_noBidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("headerTag")) {
    m_headerTag = jsonValue.GetObject("headerTag");
    m_headerTagHasBeenSet = true;
  }
  return *this;
}

JsonValue Action::Jsonize() const {
  JsonValue payload;

  if (m_noBidHasBeenSet) {
    payload.WithObject("noBid", m_noBid.Jsonize());
  }

  if (m_headerTagHasBeenSet) {
    payload.WithObject("headerTag", m_headerTag.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
