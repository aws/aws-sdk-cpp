/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>An organizational unit or root entry in the organizational monitoring
 * boundary, with its associated regions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/OrganizationalUnitEntry">AWS
 * API Reference</a></p>
 */
class OrganizationalUnitEntry {
 public:
  AWS_WELLARCHITECTED_API OrganizationalUnitEntry() = default;
  AWS_WELLARCHITECTED_API OrganizationalUnitEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API OrganizationalUnitEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Organizations organizational unit ID or root ID. Must match the
   * pattern <code>r-[a-z0-9]{4,32}</code> for roots or
   * <code>ou-[a-z0-9]{4,32}-[a-z0-9]{8,32}</code> for OUs.</p>
   */
  inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
  inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
  template <typename OrganizationalUnitIdT = Aws::String>
  void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    m_organizationalUnitIdHasBeenSet = true;
    m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value);
  }
  template <typename OrganizationalUnitIdT = Aws::String>
  OrganizationalUnitEntry& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of regions to monitor for this organizational unit or root.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  OrganizationalUnitEntry& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  OrganizationalUnitEntry& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationalUnitId;

  Aws::Vector<Aws::String> m_regions;
  bool m_organizationalUnitIdHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
