/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationArtifact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

NetworkMigrationCodeGenerationArtifact::NetworkMigrationCodeGenerationArtifact(JsonView jsonValue) { *this = jsonValue; }

NetworkMigrationCodeGenerationArtifact& NetworkMigrationCodeGenerationArtifact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("artifactID")) {
    m_artifactID = jsonValue.GetString("artifactID");
    m_artifactIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactType")) {
    m_artifactType = NetworkMigrationCodeGenerationArtifactTypeMapper::GetNetworkMigrationCodeGenerationArtifactTypeForName(
        jsonValue.GetString("artifactType"));
    m_artifactTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactSubType")) {
    m_artifactSubType = NetworkMigrationCodeGenerationArtifactSubTypeMapper::GetNetworkMigrationCodeGenerationArtifactSubTypeForName(
        jsonValue.GetString("artifactSubType"));
    m_artifactSubTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logicalID")) {
    m_logicalID = jsonValue.GetString("logicalID");
    m_logicalIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputS3Configuration")) {
    m_outputS3Configuration = jsonValue.GetObject("outputS3Configuration");
    m_outputS3ConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("checksum")) {
    m_checksum = jsonValue.GetObject("checksum");
    m_checksumHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkMigrationCodeGenerationArtifact::Jsonize() const {
  JsonValue payload;

  if (m_artifactIDHasBeenSet) {
    payload.WithString("artifactID", m_artifactID);
  }

  if (m_artifactTypeHasBeenSet) {
    payload.WithString(
        "artifactType",
        NetworkMigrationCodeGenerationArtifactTypeMapper::GetNameForNetworkMigrationCodeGenerationArtifactType(m_artifactType));
  }

  if (m_artifactSubTypeHasBeenSet) {
    payload.WithString(
        "artifactSubType",
        NetworkMigrationCodeGenerationArtifactSubTypeMapper::GetNameForNetworkMigrationCodeGenerationArtifactSubType(m_artifactSubType));
  }

  if (m_logicalIDHasBeenSet) {
    payload.WithString("logicalID", m_logicalID);
  }

  if (m_outputS3ConfigurationHasBeenSet) {
    payload.WithObject("outputS3Configuration", m_outputS3Configuration.Jsonize());
  }

  if (m_checksumHasBeenSet) {
    payload.WithObject("checksum", m_checksum.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
