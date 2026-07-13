/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FindingsTrendsStringField.h>
#include <aws/securityhub/model/StringFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>A filter for string-based fields in findings trend data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingsTrendsStringFilter">AWS
 * API Reference</a></p>
 */
class FindingsTrendsStringFilter {
 public:
  AWS_SECURITYHUB_API FindingsTrendsStringFilter() = default;
  AWS_SECURITYHUB_API FindingsTrendsStringFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API FindingsTrendsStringFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the findings field to filter on. You can specify one of the
   * following fields.</p> <ul> <li> <p> <code>account_id</code> – The Amazon Web
   * Services account ID associated with the finding.</p> </li> <li> <p>
   * <code>region</code> – The Amazon Web Services Region associated with the
   * finding.</p> </li> <li> <p> <code>finding_types</code> – The finding types
   * associated with the finding.</p> </li> <li> <p> <code>finding_status</code> –
   * The status of the finding.</p> </li> <li> <p> <code>finding_cve_ids</code> – The
   * Common Vulnerabilities and Exposures (CVE) identifiers associated with the
   * finding.</p> </li> <li> <p> <code>finding_compliance_status</code> – The
   * compliance status of the finding.</p> </li> <li> <p>
   * <code>finding_control_id</code> – The identifier of the security control
   * associated with the finding.</p> </li> <li> <p> <code>finding_class_name</code>
   * – The finding class, such as <code>Compliance Finding</code>.</p> </li> <li> <p>
   * <code>finding_provider</code> – The name of the product that generated the
   * finding.</p> </li> <li> <p> <code>finding_activity_name</code> – The activity
   * name associated with the finding.</p> </li> <li> <p>
   * <code>resource_cloud_providers</code> – The cloud providers of the resources
   * that the finding is associated with. Valid values are <code>AWS</code> and
   * <code>Azure</code>.</p> </li> <li> <p> <code>resource_regions</code> – The
   * Regions of the associated resources. For an Amazon Web Services resource, this
   * is the Amazon Web Services Region. For an Azure resource, this is the Azure
   * Region, such as <code>eastus</code>.</p> </li> <li> <p>
   * <code>resource_owner_ids</code> – The identifiers of the accounts that own the
   * associated resources. For an Amazon Web Services resource, this is the Amazon
   * Web Services account ID. For an Azure resource, this is the Azure subscription
   * ID.</p> </li> <li> <p> <code>resource_owner_organization_ids</code> – The
   * identifiers of the organizations that own the associated resources. For an
   * Amazon Web Services resource, this is the Amazon Web Services organization ID.
   * For an Azure resource, this is the Azure tenant ID.</p> </li> </ul>
   */
  inline FindingsTrendsStringField GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  inline void SetFieldName(FindingsTrendsStringField value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = value;
  }
  inline FindingsTrendsStringFilter& WithFieldName(FindingsTrendsStringField value) {
    SetFieldName(value);
    return *this;
  }
  ///@}

  ///@{

  inline const StringFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = StringFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = StringFilter>
  FindingsTrendsStringFilter& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  FindingsTrendsStringField m_fieldName{FindingsTrendsStringField::NOT_SET};

  StringFilter m_filter;
  bool m_fieldNameHasBeenSet = false;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
