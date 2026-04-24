/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/Checksum.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationArtifactSubType.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationArtifactType.h>
#include <aws/mgn/model/S3Configuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>An artifact generated during code generation, such as a CloudFormation
 * template or Terraform file.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationCodeGenerationArtifact">AWS
 * API Reference</a></p>
 */
class NetworkMigrationCodeGenerationArtifact {
 public:
  AWS_MGN_API NetworkMigrationCodeGenerationArtifact() = default;
  AWS_MGN_API NetworkMigrationCodeGenerationArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationCodeGenerationArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the artifact.</p>
   */
  inline const Aws::String& GetArtifactID() const { return m_artifactID; }
  inline bool ArtifactIDHasBeenSet() const { return m_artifactIDHasBeenSet; }
  template <typename ArtifactIDT = Aws::String>
  void SetArtifactID(ArtifactIDT&& value) {
    m_artifactIDHasBeenSet = true;
    m_artifactID = std::forward<ArtifactIDT>(value);
  }
  template <typename ArtifactIDT = Aws::String>
  NetworkMigrationCodeGenerationArtifact& WithArtifactID(ArtifactIDT&& value) {
    SetArtifactID(std::forward<ArtifactIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the artifact, such as CLOUDFORMATION_TEMPLATE or
   * TERRAFORM_MODULE.</p>
   */
  inline NetworkMigrationCodeGenerationArtifactType GetArtifactType() const { return m_artifactType; }
  inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
  inline void SetArtifactType(NetworkMigrationCodeGenerationArtifactType value) {
    m_artifactTypeHasBeenSet = true;
    m_artifactType = value;
  }
  inline NetworkMigrationCodeGenerationArtifact& WithArtifactType(NetworkMigrationCodeGenerationArtifactType value) {
    SetArtifactType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sub-type of the artifact for further classification.</p>
   */
  inline NetworkMigrationCodeGenerationArtifactSubType GetArtifactSubType() const { return m_artifactSubType; }
  inline bool ArtifactSubTypeHasBeenSet() const { return m_artifactSubTypeHasBeenSet; }
  inline void SetArtifactSubType(NetworkMigrationCodeGenerationArtifactSubType value) {
    m_artifactSubTypeHasBeenSet = true;
    m_artifactSubType = value;
  }
  inline NetworkMigrationCodeGenerationArtifact& WithArtifactSubType(NetworkMigrationCodeGenerationArtifactSubType value) {
    SetArtifactSubType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical identifier for the artifact.</p>
   */
  inline const Aws::String& GetLogicalID() const { return m_logicalID; }
  inline bool LogicalIDHasBeenSet() const { return m_logicalIDHasBeenSet; }
  template <typename LogicalIDT = Aws::String>
  void SetLogicalID(LogicalIDT&& value) {
    m_logicalIDHasBeenSet = true;
    m_logicalID = std::forward<LogicalIDT>(value);
  }
  template <typename LogicalIDT = Aws::String>
  NetworkMigrationCodeGenerationArtifact& WithLogicalID(LogicalIDT&& value) {
    SetLogicalID(std::forward<LogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 location where the artifact is stored.</p>
   */
  inline const S3Configuration& GetOutputS3Configuration() const { return m_outputS3Configuration; }
  inline bool OutputS3ConfigurationHasBeenSet() const { return m_outputS3ConfigurationHasBeenSet; }
  template <typename OutputS3ConfigurationT = S3Configuration>
  void SetOutputS3Configuration(OutputS3ConfigurationT&& value) {
    m_outputS3ConfigurationHasBeenSet = true;
    m_outputS3Configuration = std::forward<OutputS3ConfigurationT>(value);
  }
  template <typename OutputS3ConfigurationT = S3Configuration>
  NetworkMigrationCodeGenerationArtifact& WithOutputS3Configuration(OutputS3ConfigurationT&& value) {
    SetOutputS3Configuration(std::forward<OutputS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checksum of the artifact for integrity verification.</p>
   */
  inline const Checksum& GetChecksum() const { return m_checksum; }
  inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
  template <typename ChecksumT = Checksum>
  void SetChecksum(ChecksumT&& value) {
    m_checksumHasBeenSet = true;
    m_checksum = std::forward<ChecksumT>(value);
  }
  template <typename ChecksumT = Checksum>
  NetworkMigrationCodeGenerationArtifact& WithChecksum(ChecksumT&& value) {
    SetChecksum(std::forward<ChecksumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the artifact was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NetworkMigrationCodeGenerationArtifact& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_artifactID;

  NetworkMigrationCodeGenerationArtifactType m_artifactType{NetworkMigrationCodeGenerationArtifactType::NOT_SET};

  NetworkMigrationCodeGenerationArtifactSubType m_artifactSubType{NetworkMigrationCodeGenerationArtifactSubType::NOT_SET};

  Aws::String m_logicalID;

  S3Configuration m_outputS3Configuration;

  Checksum m_checksum;

  Aws::Utils::DateTime m_createdAt{};
  bool m_artifactIDHasBeenSet = false;
  bool m_artifactTypeHasBeenSet = false;
  bool m_artifactSubTypeHasBeenSet = false;
  bool m_logicalIDHasBeenSet = false;
  bool m_outputS3ConfigurationHasBeenSet = false;
  bool m_checksumHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
