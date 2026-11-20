/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/model/LineOfBusiness.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Payments {
namespace Model {

/**
 * <p>The Amazon Web Services business unit that issued a financial record. A
 * business unit has two parts: the merchant of record, which is the Amazon Web
 * Services entity that issued the record, and the line of business within that
 * entity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payments-2026-09-23/BusinessUnit">AWS
 * API Reference</a></p>
 */
class BusinessUnit {
 public:
  AWS_PAYMENTS_API BusinessUnit() = default;
  AWS_PAYMENTS_API BusinessUnit(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API BusinessUnit& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services entity that issued the invoice and collects payment
   * for it, such as <code>Amazon Web Services, Inc.</code> or <code>Amazon Web
   * Services EMEA SARL</code>. This is the invoicing entity shown in the Amazon Web
   * Services Billing and Cost Management console. For Amazon Web Services
   * Marketplace purchases, it can differ from the seller of record.</p>
   */
  inline const Aws::String& GetMerchantOfRecord() const { return m_merchantOfRecord; }
  inline bool MerchantOfRecordHasBeenSet() const { return m_merchantOfRecordHasBeenSet; }
  template <typename MerchantOfRecordT = Aws::String>
  void SetMerchantOfRecord(MerchantOfRecordT&& value) {
    m_merchantOfRecordHasBeenSet = true;
    m_merchantOfRecord = std::forward<MerchantOfRecordT>(value);
  }
  template <typename MerchantOfRecordT = Aws::String>
  BusinessUnit& WithMerchantOfRecord(MerchantOfRecordT&& value) {
    SetMerchantOfRecord(std::forward<MerchantOfRecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The line of business within the merchant of record that issued the record.
   * This member is absent when the line of business isn't known for the record. The
   * following values are valid:</p> <ul> <li> <p> <code>AWS_CLOUD_SERVICES</code> –
   * Your usage of Amazon Web Services services.</p> </li> <li> <p>
   * <code>PROSERVE_MARKETING_AND_TRAINING</code> – Amazon Web Services Professional
   * Services, marketing, and training: consulting, events, and training that Amazon
   * Web Services sells.</p> </li> <li> <p> <code>AWS_MARKETPLACE</code> – Products
   * that you bought from sellers in Amazon Web Services Marketplace.</p> </li> </ul>
   */
  inline LineOfBusiness GetLineOfBusiness() const { return m_lineOfBusiness; }
  inline bool LineOfBusinessHasBeenSet() const { return m_lineOfBusinessHasBeenSet; }
  inline void SetLineOfBusiness(LineOfBusiness value) {
    m_lineOfBusinessHasBeenSet = true;
    m_lineOfBusiness = value;
  }
  inline BusinessUnit& WithLineOfBusiness(LineOfBusiness value) {
    SetLineOfBusiness(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_merchantOfRecord;

  LineOfBusiness m_lineOfBusiness{LineOfBusiness::NOT_SET};
  bool m_merchantOfRecordHasBeenSet = false;
  bool m_lineOfBusinessHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
