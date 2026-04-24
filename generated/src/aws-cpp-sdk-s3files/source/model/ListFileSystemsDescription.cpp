/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3files/model/ListFileSystemsDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Files {
namespace Model {

ListFileSystemsDescription::ListFileSystemsDescription(JsonView jsonValue) { *this = jsonValue; }

ListFileSystemsDescription& ListFileSystemsDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemArn")) {
    m_fileSystemArn = jsonValue.GetString("fileSystemArn");
    m_fileSystemArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileSystemId")) {
    m_fileSystemId = jsonValue.GetString("fileSystemId");
    m_fileSystemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bucket")) {
    m_bucket = jsonValue.GetString("bucket");
    m_bucketHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = LifeCycleStateMapper::GetLifeCycleStateForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusMessage")) {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ownerId")) {
    m_ownerId = jsonValue.GetString("ownerId");
    m_ownerIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ListFileSystemsDescription::Jsonize() const {
  JsonValue payload;

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_fileSystemArnHasBeenSet) {
    payload.WithString("fileSystemArn", m_fileSystemArn);
  }

  if (m_fileSystemIdHasBeenSet) {
    payload.WithString("fileSystemId", m_fileSystemId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_bucketHasBeenSet) {
    payload.WithString("bucket", m_bucket);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", LifeCycleStateMapper::GetNameForLifeCycleState(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("statusMessage", m_statusMessage);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_ownerIdHasBeenSet) {
    payload.WithString("ownerId", m_ownerId);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws
