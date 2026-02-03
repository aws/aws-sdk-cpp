/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/RegionStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SSOAdmin {
namespace Model {
class DescribeRegionResult {
 public:
  AWS_SSOADMIN_API DescribeRegionResult() = default;
  AWS_SSOADMIN_API DescribeRegionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SSOADMIN_API DescribeRegionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Web Services Region name.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  DescribeRegionResult& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Region. Valid values are ACTIVE (Region is
   * operational), ADDING (Region replication workflow is in progress), or REMOVING
   * (Region removal workflow is in progress).</p>
   */
  inline RegionStatus GetStatus() const { return m_status; }
  inline void SetStatus(RegionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeRegionResult& WithStatus(RegionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Region was added to the IAM Identity Center instance.
   * For the primary Region, this is the IAM Identity Center instance creation
   * time.</p>
   */
  inline const Aws::Utils::DateTime& GetAddedDate() const { return m_addedDate; }
  template <typename AddedDateT = Aws::Utils::DateTime>
  void SetAddedDate(AddedDateT&& value) {
    m_addedDateHasBeenSet = true;
    m_addedDate = std::forward<AddedDateT>(value);
  }
  template <typename AddedDateT = Aws::Utils::DateTime>
  DescribeRegionResult& WithAddedDate(AddedDateT&& value) {
    SetAddedDate(std::forward<AddedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this is the primary Region where the IAM Identity Center
   * instance was originally enabled. For more information on the difference between
   * the primary Region and additional Regions, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/multi-region-iam-identity-center.html">IAM
   * Identity Center User Guide</a> </p>
   */
  inline bool GetIsPrimaryRegion() const { return m_isPrimaryRegion; }
  inline void SetIsPrimaryRegion(bool value) {
    m_isPrimaryRegionHasBeenSet = true;
    m_isPrimaryRegion = value;
  }
  inline DescribeRegionResult& WithIsPrimaryRegion(bool value) {
    SetIsPrimaryRegion(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeRegionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_regionName;

  RegionStatus m_status{RegionStatus::NOT_SET};

  Aws::Utils::DateTime m_addedDate{};

  bool m_isPrimaryRegion{false};

  Aws::String m_requestId;
  bool m_regionNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_addedDateHasBeenSet = false;
  bool m_isPrimaryRegionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
