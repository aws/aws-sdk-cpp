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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSOAdmin {
namespace Model {

/**
 * <p>Contains information about an enabled Region of an IAM Identity Center
 * instance, including the Region name, status, date added, and whether it is the
 * primary Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/RegionMetadata">AWS
 * API Reference</a></p>
 */
class RegionMetadata {
 public:
  AWS_SSOADMIN_API RegionMetadata() = default;
  AWS_SSOADMIN_API RegionMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSOADMIN_API RegionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region name.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  RegionMetadata& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Region. Valid values are ACTIVE (Region is
   * operational), ADDING (Region extension workflow is in progress), or REMOVING
   * (Region removal workflow is in progress).</p>
   */
  inline RegionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RegionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RegionMetadata& WithStatus(RegionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Region was added to the IAM Identity Center instance.
   * For the primary Region, this is the instance creation time.</p>
   */
  inline const Aws::Utils::DateTime& GetAddedDate() const { return m_addedDate; }
  inline bool AddedDateHasBeenSet() const { return m_addedDateHasBeenSet; }
  template <typename AddedDateT = Aws::Utils::DateTime>
  void SetAddedDate(AddedDateT&& value) {
    m_addedDateHasBeenSet = true;
    m_addedDate = std::forward<AddedDateT>(value);
  }
  template <typename AddedDateT = Aws::Utils::DateTime>
  RegionMetadata& WithAddedDate(AddedDateT&& value) {
    SetAddedDate(std::forward<AddedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this is the primary Region where the IAM Identity Center
   * instance was originally enabled. The primary Region cannot be removed.</p>
   */
  inline bool GetIsPrimaryRegion() const { return m_isPrimaryRegion; }
  inline bool IsPrimaryRegionHasBeenSet() const { return m_isPrimaryRegionHasBeenSet; }
  inline void SetIsPrimaryRegion(bool value) {
    m_isPrimaryRegionHasBeenSet = true;
    m_isPrimaryRegion = value;
  }
  inline RegionMetadata& WithIsPrimaryRegion(bool value) {
    SetIsPrimaryRegion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_regionName;

  RegionStatus m_status{RegionStatus::NOT_SET};

  Aws::Utils::DateTime m_addedDate{};

  bool m_isPrimaryRegion{false};
  bool m_regionNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_addedDateHasBeenSet = false;
  bool m_isPrimaryRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
