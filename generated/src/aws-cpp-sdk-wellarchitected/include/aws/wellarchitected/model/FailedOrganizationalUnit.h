/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>An organizational unit that was requested in an Organizational Report's
 * filters but could not be expanded into its member accounts. A failed OU means
 * the report is missing the accounts it contained.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/FailedOrganizationalUnit">AWS
 * API Reference</a></p>
 */
class FailedOrganizationalUnit {
 public:
  AWS_WELLARCHITECTED_API FailedOrganizationalUnit() = default;
  AWS_WELLARCHITECTED_API FailedOrganizationalUnit(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API FailedOrganizationalUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Organizations OU ID that could not be expanded.</p>
   */
  inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
  inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
  template <typename OrganizationalUnitIdT = Aws::String>
  void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    m_organizationalUnitIdHasBeenSet = true;
    m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value);
  }
  template <typename OrganizationalUnitIdT = Aws::String>
  FailedOrganizationalUnit& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation of why the organizational unit could not be
   * expanded.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  FailedOrganizationalUnit& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationalUnitId;

  Aws::String m_reason;
  bool m_organizationalUnitIdHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
