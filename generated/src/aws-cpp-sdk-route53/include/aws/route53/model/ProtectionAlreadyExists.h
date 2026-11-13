/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ProtectionError.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {

/**
 * <p>A protection already exists for every name and type in the request, so Route
 * 53 didn't create any protections. The <code>Errors</code> element lists each
 * entry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ProtectionAlreadyExists">AWS
 * API Reference</a></p>
 */
class ProtectionAlreadyExists {
 public:
  AWS_ROUTE53_API ProtectionAlreadyExists() = default;
  AWS_ROUTE53_API ProtectionAlreadyExists(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ProtectionAlreadyExists& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A message that explains that a protection already exists for every name and
   * type in the <code>CreateResourceRecordSetProtections</code> request.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ProtectionAlreadyExists& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entries that already have a protection.</p>
   */
  inline const Aws::Vector<ProtectionError>& GetErrors() const { return m_errors; }
  inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
  template <typename ErrorsT = Aws::Vector<ProtectionError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<ProtectionError>>
  ProtectionAlreadyExists& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = ProtectionError>
  ProtectionAlreadyExists& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::Vector<ProtectionError> m_errors;
  bool m_messageHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
