/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/CidrResource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

CidrResource::CidrResource(JsonView jsonValue) { *this = jsonValue; }

CidrResource& CidrResource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cidrRanges")) {
    Aws::Utils::Array<JsonView> cidrRangesJsonList = jsonValue.GetArray("cidrRanges");
    for (unsigned cidrRangesIndex = 0; cidrRangesIndex < cidrRangesJsonList.GetLength(); ++cidrRangesIndex) {
      m_cidrRanges.push_back(cidrRangesJsonList[cidrRangesIndex].AsString());
    }
    m_cidrRangesHasBeenSet = true;
  }
  return *this;
}

JsonValue CidrResource::Jsonize() const {
  JsonValue payload;

  if (m_cidrRangesHasBeenSet) {
    Aws::Utils::Array<JsonValue> cidrRangesJsonList(m_cidrRanges.size());
    for (unsigned cidrRangesIndex = 0; cidrRangesIndex < cidrRangesJsonList.GetLength(); ++cidrRangesIndex) {
      cidrRangesJsonList[cidrRangesIndex].AsString(m_cidrRanges[cidrRangesIndex]);
    }
    payload.WithArray("cidrRanges", std::move(cidrRangesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
