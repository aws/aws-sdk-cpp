/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The configuration for creating an Autonomous Database by restoring from a
 * backup.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/RestoreFromBackupConfiguration">AWS
 * API Reference</a></p>
 */
class RestoreFromBackupConfiguration {
 public:
  AWS_ODB_API RestoreFromBackupConfiguration() = default;
  AWS_ODB_API RestoreFromBackupConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API RestoreFromBackupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database backup to restore from.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseBackupId() const { return m_autonomousDatabaseBackupId; }
  inline bool AutonomousDatabaseBackupIdHasBeenSet() const { return m_autonomousDatabaseBackupIdHasBeenSet; }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  void SetAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    m_autonomousDatabaseBackupIdHasBeenSet = true;
    m_autonomousDatabaseBackupId = std::forward<AutonomousDatabaseBackupIdT>(value);
  }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  RestoreFromBackupConfiguration& WithAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    SetAutonomousDatabaseBackupId(std::forward<AutonomousDatabaseBackupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of clone to create from the backup.</p>
   */
  inline CloneType GetCloneType() const { return m_cloneType; }
  inline bool CloneTypeHasBeenSet() const { return m_cloneTypeHasBeenSet; }
  inline void SetCloneType(CloneType value) {
    m_cloneTypeHasBeenSet = true;
    m_cloneType = value;
  }
  inline RestoreFromBackupConfiguration& WithCloneType(CloneType value) {
    SetCloneType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tablespace identifiers to clone from the backup.</p>
   */
  inline const Aws::Vector<int>& GetCloneTableSpaceList() const { return m_cloneTableSpaceList; }
  inline bool CloneTableSpaceListHasBeenSet() const { return m_cloneTableSpaceListHasBeenSet; }
  template <typename CloneTableSpaceListT = Aws::Vector<int>>
  void SetCloneTableSpaceList(CloneTableSpaceListT&& value) {
    m_cloneTableSpaceListHasBeenSet = true;
    m_cloneTableSpaceList = std::forward<CloneTableSpaceListT>(value);
  }
  template <typename CloneTableSpaceListT = Aws::Vector<int>>
  RestoreFromBackupConfiguration& WithCloneTableSpaceList(CloneTableSpaceListT&& value) {
    SetCloneTableSpaceList(std::forward<CloneTableSpaceListT>(value));
    return *this;
  }
  inline RestoreFromBackupConfiguration& AddCloneTableSpaceList(int value) {
    m_cloneTableSpaceListHasBeenSet = true;
    m_cloneTableSpaceList.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseBackupId;

  CloneType m_cloneType{CloneType::NOT_SET};

  Aws::Vector<int> m_cloneTableSpaceList;
  bool m_autonomousDatabaseBackupIdHasBeenSet = false;
  bool m_cloneTypeHasBeenSet = false;
  bool m_cloneTableSpaceListHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
