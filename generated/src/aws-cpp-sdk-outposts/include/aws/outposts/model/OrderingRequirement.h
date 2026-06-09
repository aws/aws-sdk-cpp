/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/OrderingRequirementStatus.h>
#include <aws/outposts/model/OrderingRequirementType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>A requirement that must be met before an order can be submitted for a
 * quote.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/OrderingRequirement">AWS
 * API Reference</a></p>
 */
class OrderingRequirement {
 public:
  AWS_OUTPOSTS_API OrderingRequirement() = default;
  AWS_OUTPOSTS_API OrderingRequirement(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API OrderingRequirement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A message about the ordering requirement.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  OrderingRequirement& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of ordering requirement. Indicates which check failed or passed.</p>
   * <ul> <li> <p> <code>OUTPOST_ACTIVE_CHECK_ERROR</code> - The Outpost must be in
   * an active state.</p> </li> <li> <p>
   * <code>MAXIMUM_ALLOWED_ORDERS_CHECK_ERROR</code> - The maximum number of allowed
   * orders has been reached.</p> </li> <li> <p>
   * <code>VALID_ZIP_CODE_CHECK_ERROR</code> - The site address must have a valid zip
   * code.</p> </li> <li> <p> <code>RACK_PHYSICAL_PROPERTIES_CHECK_ERROR</code> - The
   * rack physical properties do not meet requirements.</p> </li> <li> <p>
   * <code>OPERATING_ADDRESS_EXISTENCE_CHECK_ERROR</code> - The site must have an
   * operating address.</p> </li> <li> <p>
   * <code>SHIPPING_ADDRESS_EXISTENCE_CHECK_ERROR</code> - The site must have a
   * shipping address.</p> </li> <li> <p>
   * <code>COUNTRY_CODE_MISMATCH_CHECK_ERROR</code> - The country code on the quote
   * does not match the Outpost site country.</p> </li> <li> <p>
   * <code>OUTPOST_GENERATION_MISMATCH_ERROR</code> - The Outpost generation does not
   * match the requested configuration.</p> </li> <li> <p>
   * <code>OUTPOST_ID_MISSING_ON_QUOTE_ERROR</code> - The quote must be associated
   * with an Outpost before submitting an order.</p> </li> <li> <p>
   * <code>ENTERPRISE_SUPPORT_ERROR</code> - Enterprise Support is required.</p>
   * </li> <li> <p> <code>SHIPPING_ADDRESS_MISSING_CONTACT_NAME_ERROR</code> - The
   * shipping address must have a contact name.</p> </li> <li> <p>
   * <code>SHIPPING_ADDRESS_MISSING_CONTACT_NUMBER_ERROR</code> - The shipping
   * address must have a contact phone number.</p> </li> <li> <p>
   * <code>SHIPPING_ADDRESS_MISSING_CONTACT_INFO_ERROR</code> - The shipping address
   * must have contact information.</p> </li> <li> <p>
   * <code>OUTPOST_STATE_CHANGED_ERROR</code> - The Outpost state has changed since
   * the quote was created.</p> </li> <li> <p> <code>OUTPOST_NOT_FOUND_ERROR</code> -
   * The Outpost associated with the quote was not found.</p> </li> <li> <p>
   * <code>OUTPOST_RENEWAL_REQUIRED_ERROR</code> - The Outpost requires a renewal
   * before a new order can be submitted.</p> </li> <li> <p> <code>UNSUPPORTED</code>
   * - The requirement type is not recognized.</p> </li> </ul>
   */
  inline OrderingRequirementType GetOrderingRequirementType() const { return m_orderingRequirementType; }
  inline bool OrderingRequirementTypeHasBeenSet() const { return m_orderingRequirementTypeHasBeenSet; }
  inline void SetOrderingRequirementType(OrderingRequirementType value) {
    m_orderingRequirementTypeHasBeenSet = true;
    m_orderingRequirementType = value;
  }
  inline OrderingRequirement& WithOrderingRequirementType(OrderingRequirementType value) {
    SetOrderingRequirementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the ordering requirement. Valid values are <code>PASS</code>,
   * <code>FAIL</code>, and <code>EXEMPT</code>.</p>
   */
  inline OrderingRequirementStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(OrderingRequirementStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline OrderingRequirement& WithStatus(OrderingRequirementStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_statusMessage;

  OrderingRequirementType m_orderingRequirementType{OrderingRequirementType::NOT_SET};

  OrderingRequirementStatus m_status{OrderingRequirementStatus::NOT_SET};
  bool m_statusMessageHasBeenSet = false;
  bool m_orderingRequirementTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
