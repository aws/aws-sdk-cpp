/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/model/QuadsIndexesInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {

QuadsIndexesInfo::QuadsIndexesInfo(JsonView jsonValue) { *this = jsonValue; }

QuadsIndexesInfo& QuadsIndexesInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RDF")) {
    m_rDF = jsonValue.GetObject("RDF");
    m_rDFHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PG")) {
    m_pG = jsonValue.GetObject("PG");
    m_pGHasBeenSet = true;
  }
  return *this;
}

JsonValue QuadsIndexesInfo::Jsonize() const {
  JsonValue payload;

  if (m_rDFHasBeenSet) {
    payload.WithObject("RDF", m_rDF.Jsonize());
  }

  if (m_pGHasBeenSet) {
    payload.WithObject("PG", m_pG.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
