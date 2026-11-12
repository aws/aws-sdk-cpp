/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/RRType.h>

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
 * <p>Describes one entry in a <code>CreateResourceRecordSetProtections</code> or
 * <code>DeleteResourceRecordSetProtections</code> request that Route 53 couldn't
 * process.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ProtectionError">AWS
 * API Reference</a></p>
 */
class ProtectionError {
 public:
  AWS_ROUTE53_API ProtectionError() = default;
  AWS_ROUTE53_API ProtectionError(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ProtectionError& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The name in the failing entry.</p>
   */
  inline const Aws::String& GetRecordName() const { return m_recordName; }
  inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
  template <typename RecordNameT = Aws::String>
  void SetRecordName(RecordNameT&& value) {
    m_recordNameHasBeenSet = true;
    m_recordName = std::forward<RecordNameT>(value);
  }
  template <typename RecordNameT = Aws::String>
  ProtectionError& WithRecordName(RecordNameT&& value) {
    SetRecordName(std::forward<RecordNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record type in the failing entry.</p>
   */
  inline RRType GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  inline void SetRecordType(RRType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline ProtectionError& WithRecordType(RRType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the entry failed. Valid values include the following:</p>
   * <ul> <li> <p> <code>InvalidInput</code> means that the entry isn't valid. For
   * example, the name isn't a valid DNS name, the name isn't in the hosted zone, the
   * record type can't be protected, or the same name and type appear more than once
   * in the request.</p> </li> <li> <p> <code>ProtectionAlreadyExists</code> means
   * that a protection already exists for the name and type.</p> </li> <li> <p>
   * <code>ProtectionNotFound</code> means that no protection exists for the name and
   * type.</p> </li> </ul>
   */
  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  ProtectionError& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that explains why Route 53 couldn't process the entry.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ProtectionError& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordName;

  RRType m_recordType{RRType::NOT_SET};

  Aws::String m_code;

  Aws::String m_message;
  bool m_recordNameHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
