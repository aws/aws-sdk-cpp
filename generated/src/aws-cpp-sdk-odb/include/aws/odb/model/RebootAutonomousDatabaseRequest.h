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
class RebootAutonomousDatabaseRequest : public OdbRequest {
 public:
  AWS_ODB_API RebootAutonomousDatabaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RebootAutonomousDatabase"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database to reboot.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  RebootAutonomousDatabaseRequest& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to perform an online reboot of the Autonomous Database
   * without interrupting active connections.</p>
   */
  inline bool GetIsOnlineReboot() const { return m_isOnlineReboot; }
  inline bool IsOnlineRebootHasBeenSet() const { return m_isOnlineRebootHasBeenSet; }
  inline void SetIsOnlineReboot(bool value) {
    m_isOnlineRebootHasBeenSet = true;
    m_isOnlineReboot = value;
  }
  inline RebootAutonomousDatabaseRequest& WithIsOnlineReboot(bool value) {
    SetIsOnlineReboot(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  bool m_isOnlineReboot{false};
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_isOnlineRebootHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
