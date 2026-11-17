/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/OperationUnion.h>

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
 * <p>A construct update to apply during a mapping update operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StartNetworkMigrationMappingUpdateConstruct">AWS
 * API Reference</a></p>
 */
class StartNetworkMigrationMappingUpdateConstruct {
 public:
  AWS_MGN_API StartNetworkMigrationMappingUpdateConstruct() = default;
  AWS_MGN_API StartNetworkMigrationMappingUpdateConstruct(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API StartNetworkMigrationMappingUpdateConstruct& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the segment containing the construct.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  StartNetworkMigrationMappingUpdateConstruct& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of a segment created in the same request that this construct
   * belongs to. Use it instead of <code>segmentID</code> for a new segment.</p>
   */
  inline const Aws::String& GetSegmentLogicalID() const { return m_segmentLogicalID; }
  inline bool SegmentLogicalIDHasBeenSet() const { return m_segmentLogicalIDHasBeenSet; }
  template <typename SegmentLogicalIDT = Aws::String>
  void SetSegmentLogicalID(SegmentLogicalIDT&& value) {
    m_segmentLogicalIDHasBeenSet = true;
    m_segmentLogicalID = std::forward<SegmentLogicalIDT>(value);
  }
  template <typename SegmentLogicalIDT = Aws::String>
  StartNetworkMigrationMappingUpdateConstruct& WithSegmentLogicalID(SegmentLogicalIDT&& value) {
    SetSegmentLogicalID(std::forward<SegmentLogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the construct to update.</p>
   */
  inline const Aws::String& GetConstructID() const { return m_constructID; }
  inline bool ConstructIDHasBeenSet() const { return m_constructIDHasBeenSet; }
  template <typename ConstructIDT = Aws::String>
  void SetConstructID(ConstructIDT&& value) {
    m_constructIDHasBeenSet = true;
    m_constructID = std::forward<ConstructIDT>(value);
  }
  template <typename ConstructIDT = Aws::String>
  StartNetworkMigrationMappingUpdateConstruct& WithConstructID(ConstructIDT&& value) {
    SetConstructID(std::forward<ConstructIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the construct.</p>
   */
  inline const Aws::String& GetConstructType() const { return m_constructType; }
  inline bool ConstructTypeHasBeenSet() const { return m_constructTypeHasBeenSet; }
  template <typename ConstructTypeT = Aws::String>
  void SetConstructType(ConstructTypeT&& value) {
    m_constructTypeHasBeenSet = true;
    m_constructType = std::forward<ConstructTypeT>(value);
  }
  template <typename ConstructTypeT = Aws::String>
  StartNetworkMigrationMappingUpdateConstruct& WithConstructType(ConstructTypeT&& value) {
    SetConstructType(std::forward<ConstructTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical identifier for a construct created by a create operation; other
   * operations identify the construct by constructID. Other entries in the same
   * request can reference the new construct as {"Ref":
   * "&lt;constructLogicalID&gt;"}.</p>
   */
  inline const Aws::String& GetConstructLogicalID() const { return m_constructLogicalID; }
  inline bool ConstructLogicalIDHasBeenSet() const { return m_constructLogicalIDHasBeenSet; }
  template <typename ConstructLogicalIDT = Aws::String>
  void SetConstructLogicalID(ConstructLogicalIDT&& value) {
    m_constructLogicalIDHasBeenSet = true;
    m_constructLogicalID = std::forward<ConstructLogicalIDT>(value);
  }
  template <typename ConstructLogicalIDT = Aws::String>
  StartNetworkMigrationMappingUpdateConstruct& WithConstructLogicalID(ConstructLogicalIDT&& value) {
    SetConstructLogicalID(std::forward<ConstructLogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operation to perform on the construct.</p>
   */
  inline const OperationUnion& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = OperationUnion>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = OperationUnion>
  StartNetworkMigrationMappingUpdateConstruct& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_segmentID;

  Aws::String m_segmentLogicalID;

  Aws::String m_constructID;

  Aws::String m_constructType;

  Aws::String m_constructLogicalID;

  OperationUnion m_operation;
  bool m_segmentIDHasBeenSet = false;
  bool m_segmentLogicalIDHasBeenSet = false;
  bool m_constructIDHasBeenSet = false;
  bool m_constructTypeHasBeenSet = false;
  bool m_constructLogicalIDHasBeenSet = false;
  bool m_operationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
