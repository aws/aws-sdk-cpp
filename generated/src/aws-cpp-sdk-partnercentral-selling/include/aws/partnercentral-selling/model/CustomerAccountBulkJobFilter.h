/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkJobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The criteria that limit which bulk jobs
 * <code>ListCustomerAccountBulkJobs</code> returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerAccountBulkJobFilter">AWS
 * API Reference</a></p>
 */
class CustomerAccountBulkJobFilter {
 public:
  AWS_PARTNERCENTRALSELLING_API CustomerAccountBulkJobFilter() = default;
  AWS_PARTNERCENTRALSELLING_API CustomerAccountBulkJobFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CustomerAccountBulkJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters the results to the bulk job with the specified ARN or identifier.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  CustomerAccountBulkJobFilter& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to bulk jobs with the specified status.</p>
   */
  inline BulkJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BulkJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CustomerAccountBulkJobFilter& WithStatus(BulkJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  BulkJobStatus m_status{BulkJobStatus::NOT_SET};
  bool m_identifierHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
