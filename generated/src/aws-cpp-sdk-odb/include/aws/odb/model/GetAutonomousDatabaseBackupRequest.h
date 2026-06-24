/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class GetAutonomousDatabaseBackupRequest : public OdbRequest {
 public:
  AWS_ODB_API GetAutonomousDatabaseBackupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAutonomousDatabaseBackup"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database backup to retrieve
   * information about.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseBackupId() const { return m_autonomousDatabaseBackupId; }
  inline bool AutonomousDatabaseBackupIdHasBeenSet() const { return m_autonomousDatabaseBackupIdHasBeenSet; }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  void SetAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    m_autonomousDatabaseBackupIdHasBeenSet = true;
    m_autonomousDatabaseBackupId = std::forward<AutonomousDatabaseBackupIdT>(value);
  }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  GetAutonomousDatabaseBackupRequest& WithAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    SetAutonomousDatabaseBackupId(std::forward<AutonomousDatabaseBackupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseBackupId;
  bool m_autonomousDatabaseBackupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
