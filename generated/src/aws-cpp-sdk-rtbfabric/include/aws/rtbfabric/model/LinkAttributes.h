/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingForHttpCode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes the attributes of a link.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/LinkAttributes">AWS
 * API Reference</a></p>
 */
class LinkAttributes {
 public:
  AWS_RTBFABRIC_API LinkAttributes() = default;
  AWS_RTBFABRIC_API LinkAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API LinkAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Describes the masking for HTTP error codes.</p>
   */
  inline const Aws::Vector<ResponderErrorMaskingForHttpCode>& GetResponderErrorMasking() const { return m_responderErrorMasking; }
  inline bool ResponderErrorMaskingHasBeenSet() const { return m_responderErrorMaskingHasBeenSet; }
  template <typename ResponderErrorMaskingT = Aws::Vector<ResponderErrorMaskingForHttpCode>>
  void SetResponderErrorMasking(ResponderErrorMaskingT&& value) {
    m_responderErrorMaskingHasBeenSet = true;
    m_responderErrorMasking = std::forward<ResponderErrorMaskingT>(value);
  }
  template <typename ResponderErrorMaskingT = Aws::Vector<ResponderErrorMaskingForHttpCode>>
  LinkAttributes& WithResponderErrorMasking(ResponderErrorMaskingT&& value) {
    SetResponderErrorMasking(std::forward<ResponderErrorMaskingT>(value));
    return *this;
  }
  template <typename ResponderErrorMaskingT = ResponderErrorMaskingForHttpCode>
  LinkAttributes& AddResponderErrorMasking(ResponderErrorMaskingT&& value) {
    m_responderErrorMaskingHasBeenSet = true;
    m_responderErrorMasking.emplace_back(std::forward<ResponderErrorMaskingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-provided unique identifier of the link.</p>
   */
  inline const Aws::String& GetCustomerProvidedId() const { return m_customerProvidedId; }
  inline bool CustomerProvidedIdHasBeenSet() const { return m_customerProvidedIdHasBeenSet; }
  template <typename CustomerProvidedIdT = Aws::String>
  void SetCustomerProvidedId(CustomerProvidedIdT&& value) {
    m_customerProvidedIdHasBeenSet = true;
    m_customerProvidedId = std::forward<CustomerProvidedIdT>(value);
  }
  template <typename CustomerProvidedIdT = Aws::String>
  LinkAttributes& WithCustomerProvidedId(CustomerProvidedIdT&& value) {
    SetCustomerProvidedId(std::forward<CustomerProvidedIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ResponderErrorMaskingForHttpCode> m_responderErrorMasking;
  bool m_responderErrorMaskingHasBeenSet = false;

  Aws::String m_customerProvidedId;
  bool m_customerProvidedIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
