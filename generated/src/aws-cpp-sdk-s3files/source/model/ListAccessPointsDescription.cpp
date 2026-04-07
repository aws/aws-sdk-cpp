/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/ListAccessPointsDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

ListAccessPointsDescription::ListAccessPointsDescription(JsonView jsonValue) { *this = jsonValue; }

ListAccessPointsDescription& ListAccessPointsDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accessPointArn")) {
    m_accessPointArn = jsonValue.GetString("accessPointArn");
    m_accessPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessPointId")) {
    m_accessPointId = jsonValue.GetString("accessPointId");
    m_accessPointIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemId")) {
    m_fileSystemId = jsonValue.GetString("fileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerId")) {
    m_ownerId = jsonValue.GetString("ownerId");
    m_ownerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("posixUser")) {
    m_posixUser = jsonValue.GetObject("posixUser");
    m_posixUserHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rootDirectory")) {
    m_rootDirectory = jsonValue.GetObject("rootDirectory");
    m_rootDirectoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue ListAccessPointsDescription::Jsonize() const {
  JsonValue payload;

  if (m_accessPointArnHasBeenSet) {
    payload.WithString("accessPointArn", m_accessPointArn);
  }

  if (m_accessPointIdHasBeenSet) {
    payload.WithString("accessPointId", m_accessPointId);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("fileSystemId", m_fileSystemId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", LifeCycleStateMapper::GetNameForLifeCycleState(m_status));
  }

  if (m_ownerIdHasBeenSet) {
    payload.WithString("ownerId", m_ownerId);
  }

  if (m_posixUserHasBeenSet) {
    payload.WithObject("posixUser", m_posixUser.Jsonize());
  }

  if (m_rootDirectoryHasBeenSet) {
    payload.WithObject("rootDirectory", m_rootDirectory.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
