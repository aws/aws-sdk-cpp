/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/ReplicationDestinationStatusModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

ReplicationDestinationStatusModel::ReplicationDestinationStatusModel(JsonView jsonValue) { *this = jsonValue; }

ReplicationDestinationStatusModel& ReplicationDestinationStatusModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("replicationStatus")) {
    m_replicationStatus = ReplicationStatusMapper::GetReplicationStatusForName(jsonValue.GetString("replicationStatus"));
    m_replicationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTableBucketArn")) {
    m_destinationTableBucketArn = jsonValue.GetString("destinationTableBucketArn");
    m_destinationTableBucketArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTableArn")) {
    m_destinationTableArn = jsonValue.GetString("destinationTableArn");
    m_destinationTableArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastSuccessfulReplicatedUpdate")) {
    m_lastSuccessfulReplicatedUpdate = jsonValue.GetObject("lastSuccessfulReplicatedUpdate");
    m_lastSuccessfulReplicatedUpdateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMessage")) {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationDestinationStatusModel::Jsonize() const {
  JsonValue payload;

  if (m_replicationStatusHasBeenSet) {
    payload.WithString("replicationStatus", ReplicationStatusMapper::GetNameForReplicationStatus(m_replicationStatus));
  }

  if (m_destinationTableBucketArnHasBeenSet) {
    payload.WithString("destinationTableBucketArn", m_destinationTableBucketArn);
  }

  if (m_destinationTableArnHasBeenSet) {
    payload.WithString("destinationTableArn", m_destinationTableArn);
  }

  if (m_lastSuccessfulReplicatedUpdateHasBeenSet) {
    payload.WithObject("lastSuccessfulReplicatedUpdate", m_lastSuccessfulReplicatedUpdate.Jsonize());
  }

  if (m_failureMessageHasBeenSet) {
    payload.WithString("failureMessage", m_failureMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
