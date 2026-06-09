/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloneType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The configuration for creating an Autonomous Database by restoring to a point
 * in time.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/PointInTimeRestoreConfiguration">AWS
 * API Reference</a></p>
 */
class PointInTimeRestoreConfiguration {
 public:
  AWS_ODB_API PointInTimeRestoreConfiguration() = default;
  AWS_ODB_API PointInTimeRestoreConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API PointInTimeRestoreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the source Autonomous Database to restore from.</p>
   */
  inline const Aws::String& GetSourceAutonomousDatabaseId() const { return m_sourceAutonomousDatabaseId; }
  inline bool SourceAutonomousDatabaseIdHasBeenSet() const { return m_sourceAutonomousDatabaseIdHasBeenSet; }
  template <typename SourceAutonomousDatabaseIdT = Aws::String>
  void SetSourceAutonomousDatabaseId(SourceAutonomousDatabaseIdT&& value) {
    m_sourceAutonomousDatabaseIdHasBeenSet = true;
    m_sourceAutonomousDatabaseId = std::forward<SourceAutonomousDatabaseIdT>(value);
  }
  template <typename SourceAutonomousDatabaseIdT = Aws::String>
  PointInTimeRestoreConfiguration& WithSourceAutonomousDatabaseId(SourceAutonomousDatabaseIdT&& value) {
    SetSourceAutonomousDatabaseId(std::forward<SourceAutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of clone to create from the point-in-time restore.</p>
   */
  inline CloneType GetCloneType() const { return m_cloneType; }
  inline bool CloneTypeHasBeenSet() const { return m_cloneTypeHasBeenSet; }
  inline void SetCloneType(CloneType value) {
    m_cloneTypeHasBeenSet = true;
    m_cloneType = value;
  }
  inline PointInTimeRestoreConfiguration& WithCloneType(CloneType value) {
    SetCloneType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time to which to restore the Autonomous Database.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  PointInTimeRestoreConfiguration& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to use the latest available backup timestamp for the
   * restore.</p>
   */
  inline bool GetUseLatestAvailableBackupTimestamp() const { return m_useLatestAvailableBackupTimestamp; }
  inline bool UseLatestAvailableBackupTimestampHasBeenSet() const { return m_useLatestAvailableBackupTimestampHasBeenSet; }
  inline void SetUseLatestAvailableBackupTimestamp(bool value) {
    m_useLatestAvailableBackupTimestampHasBeenSet = true;
    m_useLatestAvailableBackupTimestamp = value;
  }
  inline PointInTimeRestoreConfiguration& WithUseLatestAvailableBackupTimestamp(bool value) {
    SetUseLatestAvailableBackupTimestamp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tablespace identifiers to clone from the point-in-time
   * restore.</p>
   */
  inline const Aws::Vector<int>& GetCloneTableSpaceList() const { return m_cloneTableSpaceList; }
  inline bool CloneTableSpaceListHasBeenSet() const { return m_cloneTableSpaceListHasBeenSet; }
  template <typename CloneTableSpaceListT = Aws::Vector<int>>
  void SetCloneTableSpaceList(CloneTableSpaceListT&& value) {
    m_cloneTableSpaceListHasBeenSet = true;
    m_cloneTableSpaceList = std::forward<CloneTableSpaceListT>(value);
  }
  template <typename CloneTableSpaceListT = Aws::Vector<int>>
  PointInTimeRestoreConfiguration& WithCloneTableSpaceList(CloneTableSpaceListT&& value) {
    SetCloneTableSpaceList(std::forward<CloneTableSpaceListT>(value));
    return *this;
  }
  inline PointInTimeRestoreConfiguration& AddCloneTableSpaceList(int value) {
    m_cloneTableSpaceListHasBeenSet = true;
    m_cloneTableSpaceList.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAutonomousDatabaseId;

  CloneType m_cloneType{CloneType::NOT_SET};

  Aws::Utils::DateTime m_timestamp{};

  bool m_useLatestAvailableBackupTimestamp{false};

  Aws::Vector<int> m_cloneTableSpaceList;
  bool m_sourceAutonomousDatabaseIdHasBeenSet = false;
  bool m_cloneTypeHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_useLatestAvailableBackupTimestampHasBeenSet = false;
  bool m_cloneTableSpaceListHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
