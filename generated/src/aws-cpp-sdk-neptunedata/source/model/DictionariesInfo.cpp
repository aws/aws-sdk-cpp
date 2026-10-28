/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/neptunedata/model/DictionariesInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace neptunedata {
namespace Model {

DictionariesInfo::DictionariesInfo(JsonView jsonValue) { *this = jsonValue; }

DictionariesInfo& DictionariesInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("total")) {
    m_total = jsonValue.GetObject("total");
    m_totalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blobs")) {
    m_blobs = jsonValue.GetObject("blobs");
    m_blobsHasBeenSet = true;
  }
  return *this;
}

JsonValue DictionariesInfo::Jsonize() const {
  JsonValue payload;

  if (m_totalHasBeenSet) {
    payload.WithObject("total", m_total.Jsonize());
  }

  if (m_blobsHasBeenSet) {
    payload.WithObject("blobs", m_blobs.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace neptunedata
}  // namespace Aws
