/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/ReportOverview.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

ReportOverview::ReportOverview(JsonView jsonValue) { *this = jsonValue; }

ReportOverview& ReportOverview::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("prefix")) {
    m_prefix = jsonValue.GetString("prefix");
    m_prefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checksumCRC64NVME")) {
    m_checksumCRC64NVME = jsonValue.GetString("checksumCRC64NVME");
    m_checksumCRC64NVMEHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invalidFindings")) {
    Aws::Map<Aws::String, JsonView> invalidFindingsJsonMap = jsonValue.GetObject("invalidFindings").GetAllObjects();
    for (auto& invalidFindingsItem : invalidFindingsJsonMap) {
      m_invalidFindings[FindingCategoryMapper::GetFindingCategoryForName(invalidFindingsItem.first)] = invalidFindingsItem.second.AsInt64();
    }
    m_invalidFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportOverview::Jsonize() const {
  JsonValue payload;

  if (m_prefixHasBeenSet) {
    payload.WithString("prefix", m_prefix);
  }

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_checksumCRC64NVMEHasBeenSet) {
    payload.WithString("checksumCRC64NVME", m_checksumCRC64NVME);
  }

  if (m_invalidFindingsHasBeenSet) {
    JsonValue invalidFindingsJsonMap;
    for (auto& invalidFindingsItem : m_invalidFindings) {
      invalidFindingsJsonMap.WithInt64(FindingCategoryMapper::GetNameForFindingCategory(invalidFindingsItem.first),
                                       invalidFindingsItem.second);
    }
    payload.WithObject("invalidFindings", std::move(invalidFindingsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
