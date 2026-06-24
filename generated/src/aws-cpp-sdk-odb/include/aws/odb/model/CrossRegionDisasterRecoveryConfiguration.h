/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DisasterRecoveryType.h>

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
 * <p>The configuration for creating an Autonomous Database as a cross-Region
 * disaster recovery peer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CrossRegionDisasterRecoveryConfiguration">AWS
 * API Reference</a></p>
 */
class CrossRegionDisasterRecoveryConfiguration {
 public:
  AWS_ODB_API CrossRegionDisasterRecoveryConfiguration() = default;
  AWS_ODB_API CrossRegionDisasterRecoveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API CrossRegionDisasterRecoveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source Autonomous Database for the
   * cross-Region disaster recovery configuration.</p>
   */
  inline const Aws::String& GetSourceAutonomousDatabaseArn() const { return m_sourceAutonomousDatabaseArn; }
  inline bool SourceAutonomousDatabaseArnHasBeenSet() const { return m_sourceAutonomousDatabaseArnHasBeenSet; }
  template <typename SourceAutonomousDatabaseArnT = Aws::String>
  void SetSourceAutonomousDatabaseArn(SourceAutonomousDatabaseArnT&& value) {
    m_sourceAutonomousDatabaseArnHasBeenSet = true;
    m_sourceAutonomousDatabaseArn = std::forward<SourceAutonomousDatabaseArnT>(value);
  }
  template <typename SourceAutonomousDatabaseArnT = Aws::String>
  CrossRegionDisasterRecoveryConfiguration& WithSourceAutonomousDatabaseArn(SourceAutonomousDatabaseArnT&& value) {
    SetSourceAutonomousDatabaseArn(std::forward<SourceAutonomousDatabaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of remote disaster recovery to configure, either Autonomous Data
   * Guard or backup-based.</p>
   */
  inline DisasterRecoveryType GetRemoteDisasterRecoveryType() const { return m_remoteDisasterRecoveryType; }
  inline bool RemoteDisasterRecoveryTypeHasBeenSet() const { return m_remoteDisasterRecoveryTypeHasBeenSet; }
  inline void SetRemoteDisasterRecoveryType(DisasterRecoveryType value) {
    m_remoteDisasterRecoveryTypeHasBeenSet = true;
    m_remoteDisasterRecoveryType = value;
  }
  inline CrossRegionDisasterRecoveryConfiguration& WithRemoteDisasterRecoveryType(DisasterRecoveryType value) {
    SetRemoteDisasterRecoveryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether automatic backups are replicated to the disaster recovery
   * database.</p>
   */
  inline bool GetIsReplicateAutomaticBackups() const { return m_isReplicateAutomaticBackups; }
  inline bool IsReplicateAutomaticBackupsHasBeenSet() const { return m_isReplicateAutomaticBackupsHasBeenSet; }
  inline void SetIsReplicateAutomaticBackups(bool value) {
    m_isReplicateAutomaticBackupsHasBeenSet = true;
    m_isReplicateAutomaticBackups = value;
  }
  inline CrossRegionDisasterRecoveryConfiguration& WithIsReplicateAutomaticBackups(bool value) {
    SetIsReplicateAutomaticBackups(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceAutonomousDatabaseArn;

  DisasterRecoveryType m_remoteDisasterRecoveryType{DisasterRecoveryType::NOT_SET};

  bool m_isReplicateAutomaticBackups{false};
  bool m_sourceAutonomousDatabaseArnHasBeenSet = false;
  bool m_remoteDisasterRecoveryTypeHasBeenSet = false;
  bool m_isReplicateAutomaticBackupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
