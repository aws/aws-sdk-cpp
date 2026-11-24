/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class StartAutonomousDatabaseRefreshRequest : public OdbRequest {
 public:
  AWS_ODB_API StartAutonomousDatabaseRefreshRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartAutonomousDatabaseRefresh"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the refreshable clone Autonomous Database to
   * refresh.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  StartAutonomousDatabaseRefreshRequest& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time up to which the refreshable clone Autonomous Database is
   * refreshed from its source database. Data committed on the source database after
   * this time isn't applied to the refreshable clone. The time must be at least 1
   * minute and at most 7 days in the past, and later than the clone's last refresh
   * point.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfRefreshCutoff() const { return m_timeOfRefreshCutoff; }
  inline bool TimeOfRefreshCutoffHasBeenSet() const { return m_timeOfRefreshCutoffHasBeenSet; }
  template <typename TimeOfRefreshCutoffT = Aws::Utils::DateTime>
  void SetTimeOfRefreshCutoff(TimeOfRefreshCutoffT&& value) {
    m_timeOfRefreshCutoffHasBeenSet = true;
    m_timeOfRefreshCutoff = std::forward<TimeOfRefreshCutoffT>(value);
  }
  template <typename TimeOfRefreshCutoffT = Aws::Utils::DateTime>
  StartAutonomousDatabaseRefreshRequest& WithTimeOfRefreshCutoff(TimeOfRefreshCutoffT&& value) {
    SetTimeOfRefreshCutoff(std::forward<TimeOfRefreshCutoffT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  Aws::Utils::DateTime m_timeOfRefreshCutoff{};
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_timeOfRefreshCutoffHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
