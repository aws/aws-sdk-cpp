/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>Contains information about access-based benefit fulfillment, such as service
 * permissions or feature access.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/AccessDetails">AWS
 * API Reference</a></p>
 */
class AccessDetails {
 public:
  AWS_PARTNERCENTRALBENEFITS_API AccessDetails() = default;
  AWS_PARTNERCENTRALBENEFITS_API AccessDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API AccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the access privileges or permissions granted by this
   * benefit.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AccessDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
