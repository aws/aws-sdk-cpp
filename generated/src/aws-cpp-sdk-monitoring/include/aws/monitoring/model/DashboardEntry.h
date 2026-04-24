/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>Represents a specific dashboard.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/DashboardEntry">AWS
 * API Reference</a></p>
 */
class DashboardEntry {
 public:
  AWS_CLOUDWATCH_API DashboardEntry() = default;
  AWS_CLOUDWATCH_API DashboardEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API DashboardEntry& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the dashboard.</p>
   */
  inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
  inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
  template <typename DashboardNameT = Aws::String>
  void SetDashboardName(DashboardNameT&& value) {
    m_dashboardNameHasBeenSet = true;
    m_dashboardName = std::forward<DashboardNameT>(value);
  }
  template <typename DashboardNameT = Aws::String>
  DashboardEntry& WithDashboardName(DashboardNameT&& value) {
    SetDashboardName(std::forward<DashboardNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
   */
  inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
  inline bool DashboardArnHasBeenSet() const { return m_dashboardArnHasBeenSet; }
  template <typename DashboardArnT = Aws::String>
  void SetDashboardArn(DashboardArnT&& value) {
    m_dashboardArnHasBeenSet = true;
    m_dashboardArn = std::forward<DashboardArnT>(value);
  }
  template <typename DashboardArnT = Aws::String>
  DashboardEntry& WithDashboardArn(DashboardArnT&& value) {
    SetDashboardArn(std::forward<DashboardArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time stamp of when the dashboard was last modified, either by an API call
   * or through the console. This number is expressed as the number of milliseconds
   * since Jan 1, 1970 00:00:00 UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  DashboardEntry& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the dashboard, in bytes.</p>
   */
  inline long long GetSize() const { return m_size; }
  inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
  inline void SetSize(long long value) {
    m_sizeHasBeenSet = true;
    m_size = value;
  }
  inline DashboardEntry& WithSize(long long value) {
    SetSize(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_dashboardName;

  Aws::String m_dashboardArn;

  Aws::Utils::DateTime m_lastModified{};

  long long m_size{0};
  bool m_dashboardNameHasBeenSet = false;
  bool m_dashboardArnHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_sizeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
