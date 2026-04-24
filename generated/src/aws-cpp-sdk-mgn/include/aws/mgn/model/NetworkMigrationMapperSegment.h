/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/Checksum.h>
#include <aws/mgn/model/NetworkMigrationMapperSegmentType.h>
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

class NetworkMigrationMapperSegment {
 public:
  AWS_MGN_API NetworkMigrationMapperSegment() = default;
  AWS_MGN_API NetworkMigrationMapperSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationMapperSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the job that created this segment.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  NetworkMigrationMapperSegment& WithJobID(JobIDT&& value) {
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
  NetworkMigrationMapperSegment& WithNetworkMigrationExecutionID(NetworkMigrationExecutionIDT&& value) {
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
  NetworkMigrationMapperSegment& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
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
  NetworkMigrationMapperSegment& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the segment, such as VPC, subnet, or security group.</p>
   */
  inline NetworkMigrationMapperSegmentType GetSegmentType() const { return m_segmentType; }
  inline bool SegmentTypeHasBeenSet() const { return m_segmentTypeHasBeenSet; }
  inline void SetSegmentType(NetworkMigrationMapperSegmentType value) {
    m_segmentTypeHasBeenSet = true;
    m_segmentType = value;
  }
  inline NetworkMigrationMapperSegment& WithSegmentType(NetworkMigrationMapperSegmentType value) {
    SetSegmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the segment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  NetworkMigrationMapperSegment& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the segment.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  NetworkMigrationMapperSegment& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical identifier for the segment in the infrastructure code.</p>
   */
  inline const Aws::String& GetLogicalID() const { return m_logicalID; }
  inline bool LogicalIDHasBeenSet() const { return m_logicalIDHasBeenSet; }
  template <typename LogicalIDT = Aws::String>
  void SetLogicalID(LogicalIDT&& value) {
    m_logicalIDHasBeenSet = true;
    m_logicalID = std::forward<LogicalIDT>(value);
  }
  template <typename LogicalIDT = Aws::String>
  NetworkMigrationMapperSegment& WithLogicalID(LogicalIDT&& value) {
    SetLogicalID(std::forward<LogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checksum of the segment data for integrity verification.</p>
   */
  inline const Checksum& GetChecksum() const { return m_checksum; }
  inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
  template <typename ChecksumT = Checksum>
  void SetChecksum(ChecksumT&& value) {
    m_checksumHasBeenSet = true;
    m_checksum = std::forward<ChecksumT>(value);
  }
  template <typename ChecksumT = Checksum>
  NetworkMigrationMapperSegment& WithChecksum(ChecksumT&& value) {
    SetChecksum(std::forward<ChecksumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 location where segment artifacts are stored.</p>
   */
  inline const S3Configuration& GetOutputS3Configuration() const { return m_outputS3Configuration; }
  inline bool OutputS3ConfigurationHasBeenSet() const { return m_outputS3ConfigurationHasBeenSet; }
  template <typename OutputS3ConfigurationT = S3Configuration>
  void SetOutputS3Configuration(OutputS3ConfigurationT&& value) {
    m_outputS3ConfigurationHasBeenSet = true;
    m_outputS3Configuration = std::forward<OutputS3ConfigurationT>(value);
  }
  template <typename OutputS3ConfigurationT = S3Configuration>
  NetworkMigrationMapperSegment& WithOutputS3Configuration(OutputS3ConfigurationT&& value) {
    SetOutputS3Configuration(std::forward<OutputS3ConfigurationT>(value));
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
  NetworkMigrationMapperSegment& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the segment was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  NetworkMigrationMapperSegment& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope tags for the segment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  inline bool ScopeTagsHasBeenSet() const { return m_scopeTagsHasBeenSet; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  NetworkMigrationMapperSegment& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  NetworkMigrationMapperSegment& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target AWS account where this segment will be deployed.</p>
   */
  inline const Aws::String& GetTargetAccount() const { return m_targetAccount; }
  inline bool TargetAccountHasBeenSet() const { return m_targetAccountHasBeenSet; }
  template <typename TargetAccountT = Aws::String>
  void SetTargetAccount(TargetAccountT&& value) {
    m_targetAccountHasBeenSet = true;
    m_targetAccount = std::forward<TargetAccountT>(value);
  }
  template <typename TargetAccountT = Aws::String>
  NetworkMigrationMapperSegment& WithTargetAccount(TargetAccountT&& value) {
    SetTargetAccount(std::forward<TargetAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of other segments that this segment depends on or references.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReferencedSegments() const { return m_referencedSegments; }
  inline bool ReferencedSegmentsHasBeenSet() const { return m_referencedSegmentsHasBeenSet; }
  template <typename ReferencedSegmentsT = Aws::Vector<Aws::String>>
  void SetReferencedSegments(ReferencedSegmentsT&& value) {
    m_referencedSegmentsHasBeenSet = true;
    m_referencedSegments = std::forward<ReferencedSegmentsT>(value);
  }
  template <typename ReferencedSegmentsT = Aws::Vector<Aws::String>>
  NetworkMigrationMapperSegment& WithReferencedSegments(ReferencedSegmentsT&& value) {
    SetReferencedSegments(std::forward<ReferencedSegmentsT>(value));
    return *this;
  }
  template <typename ReferencedSegmentsT = Aws::String>
  NetworkMigrationMapperSegment& AddReferencedSegments(ReferencedSegmentsT&& value) {
    m_referencedSegmentsHasBeenSet = true;
    m_referencedSegments.emplace_back(std::forward<ReferencedSegmentsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  NetworkMigrationMapperSegment& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobID;

  Aws::String m_networkMigrationExecutionID;

  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_segmentID;

  NetworkMigrationMapperSegmentType m_segmentType{NetworkMigrationMapperSegmentType::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_logicalID;

  Checksum m_checksum;

  S3Configuration m_outputS3Configuration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_scopeTags;

  Aws::String m_targetAccount;

  Aws::Vector<Aws::String> m_referencedSegments;

  Aws::String m_requestId;
  bool m_jobIDHasBeenSet = false;
  bool m_networkMigrationExecutionIDHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_segmentIDHasBeenSet = false;
  bool m_segmentTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_logicalIDHasBeenSet = false;
  bool m_checksumHasBeenSet = false;
  bool m_outputS3ConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
  bool m_targetAccountHasBeenSet = false;
  bool m_referencedSegmentsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
