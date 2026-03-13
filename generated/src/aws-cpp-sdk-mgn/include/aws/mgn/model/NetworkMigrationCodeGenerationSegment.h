/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationArtifact.h>
#include <aws/mgn/model/NetworkMigrationCodeGenerationSegmentType.h>

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
 * <p>A segment of generated code representing a logical grouping of infrastructure
 * resources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationCodeGenerationSegment">AWS
 * API Reference</a></p>
 */
class NetworkMigrationCodeGenerationSegment {
 public:
  AWS_MGN_API NetworkMigrationCodeGenerationSegment() = default;
  AWS_MGN_API NetworkMigrationCodeGenerationSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationCodeGenerationSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the code generation job.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  NetworkMigrationCodeGenerationSegment& WithJobID(JobIDT&& value) {
    SetJobID(std::forward<JobIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration execution.</p>
   */
  inline const Aws::String& GetNetworkMigrationExecutionID() const { return m_networkMigrationExecutionID; }
  inline bool NetworkMigrationExecutionIDHasBeenSet() const { return m_networkMigrationExecutionIDHasBeenSet; }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  void SetNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    m_networkMigrationExecutionIDHasBeenSet = true;
    m_networkMigrationExecutionID = std::forward<NetworkMigrationExecutionIDT>(value);
  }
  template <typename NetworkMigrationExecutionIDT = Aws::String>
  NetworkMigrationCodeGenerationSegment& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
    SetNetworkMigrationExecutionID(std::forward<NetworkMigrationExecutionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration definition.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  NetworkMigrationCodeGenerationSegment& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the segment.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  NetworkMigrationCodeGenerationSegment& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the segment.</p>
   */
  inline NetworkMigrationCodeGenerationSegmentType GetSegmentType() const { return m_segmentType; }
  inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }
  inline void SetSegmentType(NetworkMigrationCodeGenerationSegmentType value) {
    m_segmentTypeHasBeenSet = true;
    m_segmentType = value;
  }
  inline NetworkMigrationCodeGenerationSegment& WithSegmentType(NetworkMigrationCodeGenerationSegmentType value) {
    SetSegmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical identifier for the segment.</p>
   */
  inline const Aws::String& GetLogicalID() const { return m_logicalID; }
  inline bool LogicalIDHasBeenSet() const { return m_logicalIDHasBeenSet; }
  template <typename LogicalIDT = Aws::String>
  void SetLogicalID(LogicalIDT&& value) {
    m_logicalIDHasBeenSet = true;
    m_logicalID = std::forward<LogicalIDT>(value);
  }
  template <typename LogicalIDT = Aws::String>
  NetworkMigrationCodeGenerationSegment& WithLogicalID(LogicalIDT&& value) {
    SetLogicalID(std::forward<LogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the mapper segment that this code generation segment was created
   * from.</p>
   */
  inline const Aws::String& GetMapperSegmentID() const { return m_mapperSegmentID; }
  inline bool MapperSegmentIDHasBeenSet() const { return m_mapperSegmentIDHasBeenSet; }
  template <typename MapperSegmentIDT = Aws::String>
  void SetMapperSegmentID(MapperSegmentIDT&& value) {
    m_mapperSegmentIDHasBeenSet = true;
    m_mapperSegmentID = std::forward<MapperSegmentIDT>(value);
  }
  template <typename MapperSegmentIDT = Aws::String>
  NetworkMigrationCodeGenerationSegment& WithMapperSegmentID(MapperSegmentIDT&& value) {
    SetMapperSegmentID(std::forward<MapperSegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of artifacts generated for this segment.</p>
   */
  inline const Aws::Vector<NetworkMigrationCodeGenerationArtifact>& GetArtifacts() const { return m_artifacts; }
  inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
  template <typename ArtifactsT = Aws::Vector<NetworkMigrationCodeGenerationArtifact>>
  void SetArtifacts(ArtifactsT&& value) {
    m_artifactsHasBeenSet = true;
    m_artifacts = std::forward<ArtifactsT>(value);
  }
  template <typename ArtifactsT = Aws::Vector<NetworkMigrationCodeGenerationArtifact>>
  NetworkMigrationCodeGenerationSegment& WithArtifacts(ArtifactsT&& value) {
    SetArtifacts(std::forward<ArtifactsT>(value));
    return *this;
  }
  template <typename ArtifactsT = NetworkMigrationCodeGenerationArtifact>
  NetworkMigrationCodeGenerationSegment& AddArtifacts(ArtifactsT&& value) {
    m_artifactsHasBeenSet = true;
    m_artifacts.emplace_back(std::forward<ArtifactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the segment was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NetworkMigrationCodeGenerationSegment& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobID;

  Aws::String m_networkMigrationExecutionID;

  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_segmentID;

  NetworkMigrationCodeGenerationSegmentType m_segmentType{NetworkMigrationCodeGenerationSegmentType::NOT_SET};

  Aws::String m_logicalID;

  Aws::String m_mapperSegmentID;

  Aws::Vector<NetworkMigrationCodeGenerationArtifact> m_artifacts;

  Aws::Utils::DateTime m_createdAt{};
  bool m_jobIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_segmentIDHasBeenSet = false;
  bool m_segmentTypeHasBeenSet = false;
  bool m_logicalIDHasBeenSet = false;
  bool m_mapperSegmentIDHasBeenSet = false;
  bool m_artifactsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
