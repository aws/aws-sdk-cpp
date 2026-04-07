/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/PosixUser.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

PosixUser::PosixUser(JsonView jsonValue) { *this = jsonValue; }

PosixUser& PosixUser::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("uid")) {
    m_uid = jsonValue.GetInt64("uid");
    m_uidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gid")) {
    m_gid = jsonValue.GetInt64("gid");
    m_gidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secondaryGids")) {
    Aws::Utils::Array<JsonView> secondaryGidsJsonList = jsonValue.GetArray("secondaryGids");
    for (unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex) {
      m_secondaryGids.push_back(secondaryGidsJsonList[secondaryGidsIndex].AsInt64());
    }
    m_secondaryGidsHasBeenSet = true;
  }
  return *this;
}

JsonValue PosixUser::Jsonize() const {
  JsonValue payload;

  if (m_uidHasBeenSet) {
    payload.WithInt64("uid", m_uid);
  }

  if (m_gidHasBeenSet) {
    payload.WithInt64("gid", m_gid);
  }

  if (m_secondaryGidsHasBeenSet) {
    Aws::Utils::Array<JsonValue> secondaryGidsJsonList(m_secondaryGids.size());
    for (unsigned secondaryGidsIndex = 0; secondaryGidsIndex < secondaryGidsJsonList.GetLength(); ++secondaryGidsIndex) {
      secondaryGidsJsonList[secondaryGidsIndex].AsInt64(m_secondaryGids[secondaryGidsIndex]);
    }
    payload.WithArray("secondaryGids", std::move(secondaryGidsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
