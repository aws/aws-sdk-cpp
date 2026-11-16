/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalReportFilters.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class CreateAgentOrganizationalReportRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API CreateAgentOrganizationalReportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAgentOrganizationalReport"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>A caller-supplied idempotency token. Two create calls sharing the same token
   * within the service's idempotency window return the same reportId.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAgentOrganizationalReportRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional human-readable label (1-500 characters) that helps callers
   * distinguish reports created with the same filters. Carried through list and get
   * responses.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  CreateAgentOrganizationalReportRequest& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters narrowing the report's scope. Absent means the report covers
   * the whole organization.</p>
   */
  inline const OrganizationalReportFilters& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = OrganizationalReportFilters>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = OrganizationalReportFilters>
  CreateAgentOrganizationalReportRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_label;

  OrganizationalReportFilters m_filters;
  bool m_clientTokenHasBeenSet = true;
  bool m_labelHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
