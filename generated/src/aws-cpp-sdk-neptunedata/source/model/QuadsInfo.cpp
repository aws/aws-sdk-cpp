/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/model/QuadsInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {

QuadsInfo::QuadsInfo(JsonView jsonValue) { *this = jsonValue; }

QuadsInfo& QuadsInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SPOG")) {
    m_sPOG = jsonValue.GetObject("SPOG");
    m_sPOGHasBeenSet = true;
  }
  if (jsonValue.ValueExists("POGS")) {
    m_pOGS = jsonValue.GetObject("POGS");
    m_pOGSHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GPSO")) {
    m_gPSO = jsonValue.GetObject("GPSO");
    m_gPSOHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OSGP")) {
    m_oSGP = jsonValue.GetObject("OSGP");
    m_oSGPHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PZSOG")) {
    m_pZSOG = jsonValue.GetObject("PZSOG");
    m_pZSOGHasBeenSet = true;
  }
  return *this;
}

JsonValue QuadsInfo::Jsonize() const {
  JsonValue payload;

  if (m_sPOGHasBeenSet) {
    payload.WithObject("SPOG", m_sPOG.Jsonize());
  }

  if (m_pOGSHasBeenSet) {
    payload.WithObject("POGS", m_pOGS.Jsonize());
  }

  if (m_gPSOHasBeenSet) {
    payload.WithObject("GPSO", m_gPSO.Jsonize());
  }

  if (m_oSGPHasBeenSet) {
    payload.WithObject("OSGP", m_oSGP.Jsonize());
  }

  if (m_pZSOGHasBeenSet) {
    payload.WithObject("PZSOG", m_pZSOG.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
