/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MergeRouterInputStreamDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MergeRouterInputStreamDetails::MergeRouterInputStreamDetails(JsonView jsonValue) { *this = jsonValue; }

MergeRouterInputStreamDetails& MergeRouterInputStreamDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceIndexZeroStreamDetails")) {
    m_sourceIndexZeroStreamDetails = jsonValue.GetObject("sourceIndexZeroStreamDetails");
    m_sourceIndexZeroStreamDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceIndexOneStreamDetails")) {
    m_sourceIndexOneStreamDetails = jsonValue.GetObject("sourceIndexOneStreamDetails");
    m_sourceIndexOneStreamDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue MergeRouterInputStreamDetails::Jsonize() const {
  JsonValue payload;

  if (m_sourceIndexZeroStreamDetailsHasBeenSet) {
    payload.WithObject("sourceIndexZeroStreamDetails", m_sourceIndexZeroStreamDetails.Jsonize());
  }

  if (m_sourceIndexOneStreamDetailsHasBeenSet) {
    payload.WithObject("sourceIndexOneStreamDetails", m_sourceIndexOneStreamDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
