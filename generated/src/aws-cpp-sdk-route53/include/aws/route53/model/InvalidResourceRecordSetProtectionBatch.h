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
 * <p>One or more entries in the request couldn't be processed, so Route 53 didn't
 * create or delete any of the protections in the request. The <code>Errors</code>
 * element lists the failing entries and the reason that each one
 * failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/InvalidResourceRecordSetProtectionBatch">AWS
 * API Reference</a></p>
 */
class InvalidResourceRecordSetProtectionBatch {
 public:
  AWS_ROUTE53_API InvalidResourceRecordSetProtectionBatch() = default;
  AWS_ROUTE53_API InvalidResourceRecordSetProtectionBatch(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API InvalidResourceRecordSetProtectionBatch& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A message that explains why Route 53 couldn't process the
   * <code>CreateResourceRecordSetProtections</code> or
   * <code>DeleteResourceRecordSetProtections</code> request.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  InvalidResourceRecordSetProtectionBatch& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entries that failed, with the reason that each one failed.</p>
   */
  inline const Aws::Vector<ProtectionError>& GetErrors() const { return m_errors; }
  inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
  template <typename ErrorsT = Aws::Vector<ProtectionError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<ProtectionError>>
  InvalidResourceRecordSetProtectionBatch& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = ProtectionError>
  InvalidResourceRecordSetProtectionBatch& AddErrors(ErrorsT&& value) {
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
