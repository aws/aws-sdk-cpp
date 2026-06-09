/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloneType.h>
#include <aws/odb/model/OpenMode.h>
#include <aws/odb/model/RefreshableMode.h>

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
 * <p>The configuration for creating an Autonomous Database as a refreshable
 * clone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CloneToRefreshableConfiguration">AWS
 * API Reference</a></p>
 */
class CloneToRefreshableConfiguration {
 public:
  AWS_ODB_API CloneToRefreshableConfiguration() = default;
  AWS_ODB_API CloneToRefreshableConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API CloneToRefreshableConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the source Autonomous Database to create the
   * refreshable clone from.</p>
   */
  inline const Aws::String& GetSourceAutonomousDatabaseId() const { return m_sourceAutonomousDatabaseId; }
  inline bool SourceAutonomousDatabaseIdHasBeenSet() const { return m_sourceAutonomousDatabaseIdHasBeenSet; }
  template <typename SourceAutonomousDatabaseIdT = Aws::String>
  void SetSourceAutonomousDatabaseId(SourceAutonomousDatabaseIdT&& value) {
    m_sourceAutonomousDatabaseIdHasBeenSet = true;
    m_sourceAutonomousDatabaseId = std::forward<SourceAutonomousDatabaseIdT>(value);
  }
  template <typename SourceAutonomousDatabaseIdT = Aws::String>
  CloneToRefreshableConfiguration& WithSourceAutonomousDatabaseId(SourceAutonomousDatabaseIdT&& value) {
    SetSourceAutonomousDatabaseId(std::forward<SourceAutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The refresh mode of the refreshable clone, either automatic or manual.</p>
   */
  inline RefreshableMode GetRefreshableMode() const { return m_refreshableMode; }
  inline bool RefreshableModeHasBeenSet() const { return m_refreshableModeHasBeenSet; }
  inline void SetRefreshableMode(RefreshableMode value) {
    m_refreshableModeHasBeenSet = true;
    m_refreshableMode = value;
  }
  inline CloneToRefreshableConfiguration& WithRefreshableMode(RefreshableMode value) {
    SetRefreshableMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency, in seconds, at which the refreshable clone is automatically
   * refreshed.</p>
   */
  inline int GetAutoRefreshFrequencyInSeconds() const { return m_autoRefreshFrequencyInSeconds; }
  inline bool AutoRefreshFrequencyInSecondsHasBeenSet() const { return m_autoRefreshFrequencyInSecondsHasBeenSet; }
  inline void SetAutoRefreshFrequencyInSeconds(int value) {
    m_autoRefreshFrequencyInSecondsHasBeenSet = true;
    m_autoRefreshFrequencyInSeconds = value;
  }
  inline CloneToRefreshableConfiguration& WithAutoRefreshFrequencyInSeconds(int value) {
    SetAutoRefreshFrequencyInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time lag, in seconds, between the refreshable clone and its source
   * database.</p>
   */
  inline int GetAutoRefreshPointLagInSeconds() const { return m_autoRefreshPointLagInSeconds; }
  inline bool AutoRefreshPointLagInSecondsHasBeenSet() const { return m_autoRefreshPointLagInSecondsHasBeenSet; }
  inline void SetAutoRefreshPointLagInSeconds(int value) {
    m_autoRefreshPointLagInSecondsHasBeenSet = true;
    m_autoRefreshPointLagInSeconds = value;
  }
  inline CloneToRefreshableConfiguration& WithAutoRefreshPointLagInSeconds(int value) {
    SetAutoRefreshPointLagInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the automatic refresh of the refreshable clone
   * starts.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfAutoRefreshStart() const { return m_timeOfAutoRefreshStart; }
  inline bool TimeOfAutoRefreshStartHasBeenSet() const { return m_timeOfAutoRefreshStartHasBeenSet; }
  template <typename TimeOfAutoRefreshStartT = Aws::Utils::DateTime>
  void SetTimeOfAutoRefreshStart(TimeOfAutoRefreshStartT&& value) {
    m_timeOfAutoRefreshStartHasBeenSet = true;
    m_timeOfAutoRefreshStart = std::forward<TimeOfAutoRefreshStartT>(value);
  }
  template <typename TimeOfAutoRefreshStartT = Aws::Utils::DateTime>
  CloneToRefreshableConfiguration& WithTimeOfAutoRefreshStart(TimeOfAutoRefreshStartT&& value) {
    SetTimeOfAutoRefreshStart(std::forward<TimeOfAutoRefreshStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mode in which to open the refreshable clone, either read-only or
   * read/write.</p>
   */
  inline OpenMode GetOpenMode() const { return m_openMode; }
  inline bool OpenModeHasBeenSet() const { return m_openModeHasBeenSet; }
  inline void SetOpenMode(OpenMode value) {
    m_openModeHasBeenSet = true;
    m_openMode = value;
  }
  inline CloneToRefreshableConfiguration& WithOpenMode(OpenMode value) {
    SetOpenMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of clone to create.</p>
   */
  inline CloneType GetCloneType() const { return m_cloneType; }
  inline bool CloneTypeHasBeenSet() const { return m_cloneTypeHasBeenSet; }
  inline void SetCloneType(CloneType value) {
    m_cloneTypeHasBeenSet = true;
    m_cloneType = value;
  }
  inline CloneToRefreshableConfiguration& WithCloneType(CloneType value) {
    SetCloneType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAutonomousDatabaseId;

  RefreshableMode m_refreshableMode{RefreshableMode::NOT_SET};

  int m_autoRefreshFrequencyInSeconds{0};

  int m_autoRefreshPointLagInSeconds{0};

  Aws::Utils::DateTime m_timeOfAutoRefreshStart{};

  OpenMode m_openMode{OpenMode::NOT_SET};

  CloneType m_cloneType{CloneType::NOT_SET};
  bool m_sourceAutonomousDatabaseIdHasBeenSet = false;
  bool m_refreshableModeHasBeenSet = false;
  bool m_autoRefreshFrequencyInSecondsHasBeenSet = false;
  bool m_autoRefreshPointLagInSecondsHasBeenSet = false;
  bool m_timeOfAutoRefreshStartHasBeenSet = false;
  bool m_openModeHasBeenSet = false;
  bool m_cloneTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
