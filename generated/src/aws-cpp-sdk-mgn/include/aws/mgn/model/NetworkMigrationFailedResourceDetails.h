/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/NetworkMigrationFailedResourceStatus.h>

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
 * <p>Details about a resource that failed to deploy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationFailedResourceDetails">AWS
 * API Reference</a></p>
 */
class NetworkMigrationFailedResourceDetails {
 public:
  AWS_MGN_API NetworkMigrationFailedResourceDetails() = default;
  AWS_MGN_API NetworkMigrationFailedResourceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationFailedResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logical ID of the failed resource.</p>
   */
  inline const Aws::String& GetLogicalID() const { return m_logicalID; }
  inline bool LogicalIDHasBeenSet() const { return m_logicalIDHasBeenSet; }
  template <typename LogicalIDT = Aws::String>
  void SetLogicalID(LogicalIDT&& value) {
    m_logicalIDHasBeenSet = true;
    m_logicalID = std::forward<LogicalIDT>(value);
  }
  template <typename LogicalIDT = Aws::String>
  NetworkMigrationFailedResourceDetails& WithLogicalID(LogicalIDT&& value) {
    SetLogicalID(std::forward<LogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the failed resource.</p>
   */
  inline NetworkMigrationFailedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NetworkMigrationFailedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NetworkMigrationFailedResourceDetails& WithStatus(NetworkMigrationFailedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the resource failed.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  NetworkMigrationFailedResourceDetails& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logicalID;

  NetworkMigrationFailedResourceStatus m_status{NetworkMigrationFailedResourceStatus::NOT_SET};

  Aws::String m_statusReason;
  bool m_logicalIDHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
