/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SegmentOperation.h>

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
 * <p>A segment update to apply during a mapping update operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationMappingUpdateSegment">AWS
 * API Reference</a></p>
 */
class StartNetworkMigrationMappingUpdateSegment {
 public:
  AWS_MGN_API StartNetworkMigrationMappingUpdateSegment() = default;
  AWS_MGN_API StartNetworkMigrationMappingUpdateSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API StartNetworkMigrationMappingUpdateSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the segment to update.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  StartNetworkMigrationMappingUpdateSegment& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier that you choose for a segment created by this request. You can
   * use it in other constructs in the same request to refer to the new segment.</p>
   */
  inline const Aws::String& GetSegmentLogicalID() const { return m_segmentLogicalID; }
  inline bool SegmentLogicalIDHasBeenSet() const { return m_segmentLogicalIDHasBeenSet; }
  template <typename SegmentLogicalIDT = Aws::String>
  void SetSegmentLogicalID(SegmentLogicalIDT&& value) {
    m_segmentLogicalIDHasBeenSet = true;
    m_segmentLogicalID = std::forward<SegmentLogicalIDT>(value);
  }
  template <typename SegmentLogicalIDT = Aws::String>
  StartNetworkMigrationMappingUpdateSegment& WithSegmentLogicalID(SegmentLogicalIDT&& value) {
    SetSegmentLogicalID(std::forward<SegmentLogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation to perform on the segment.</p>
   */
  inline const SegmentOperation& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = SegmentOperation>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = SegmentOperation>
  StartNetworkMigrationMappingUpdateSegment& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated target AWS account for the segment.</p>
   */
  inline const Aws::String& GetTargetAccount() const { return m_targetAccount; }
  inline bool TargetAccountHasBeenSet() const { return m_targetAccountHasBeenSet; }
  template <typename TargetAccountT = Aws::String>
  void SetTargetAccount(TargetAccountT&& value) {
    m_targetAccountHasBeenSet = true;
    m_targetAccount = std::forward<TargetAccountT>(value);
  }
  template <typename TargetAccountT = Aws::String>
  StartNetworkMigrationMappingUpdateSegment& WithTargetAccount(TargetAccountT&& value) {
    SetTargetAccount(std::forward<TargetAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scope tags for the segment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  inline bool ScopeTagsHasBeenSet() const { return m_scopeTagsHasBeenSet; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  StartNetworkMigrationMappingUpdateSegment& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  StartNetworkMigrationMappingUpdateSegment& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentID;

  Aws::String m_segmentLogicalID;

  SegmentOperation m_operation;

  Aws::String m_targetAccount;

  Aws::Map<Aws::String, Aws::String> m_scopeTags;
  bool m_segmentIDHasBeenSet = false;
  bool m_segmentLogicalIDHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_targetAccountHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
