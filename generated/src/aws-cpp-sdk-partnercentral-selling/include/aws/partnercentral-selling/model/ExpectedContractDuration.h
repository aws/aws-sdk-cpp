/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ExpectedContractDurationTerm.h>

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
 * <p>The expected duration of a partner's contract with the customer. Used to
 * convert Total Contract Value (TCV) to Monthly Recurring Revenue (MRR) for
 * opportunity dealsizing calculations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ExpectedContractDuration">AWS
 * API Reference</a></p>
 */
class ExpectedContractDuration {
 public:
  AWS_PARTNERCENTRALSELLING_API ExpectedContractDuration() = default;
  AWS_PARTNERCENTRALSELLING_API ExpectedContractDuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ExpectedContractDuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unit of measurement for the contract duration value. Currently accepts
   * only <code>Months</code>.</p>
   */
  inline ExpectedContractDurationTerm GetTerm() const { return m_term; }
  inline bool TermHasBeenSet() const { return m_termHasBeenSet; }
  inline void SetTerm(ExpectedContractDurationTerm value) {
    m_termHasBeenSet = true;
    m_term = value;
  }
  inline ExpectedContractDuration& WithTerm(ExpectedContractDurationTerm value) {
    SetTerm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A String representation of the contract duration as an integer, expressed in
   * the unit defined by <code>Term</code>. Valid values range from <code>1</code> to
   * <code>144</code>.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ExpectedContractDuration& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  ExpectedContractDurationTerm m_term{ExpectedContractDurationTerm::NOT_SET};

  Aws::String m_value;
  bool m_termHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
