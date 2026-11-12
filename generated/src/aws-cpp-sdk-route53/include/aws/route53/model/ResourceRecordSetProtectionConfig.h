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
 * <p>A protection to create for the resource record sets in a hosted zone that
 * have the specified name and type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ResourceRecordSetProtectionConfig">AWS
 * API Reference</a></p>
 */
class ResourceRecordSetProtectionConfig {
 public:
  AWS_ROUTE53_API ResourceRecordSetProtectionConfig() = default;
  AWS_ROUTE53_API ResourceRecordSetProtectionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ResourceRecordSetProtectionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The name of the resource record sets to protect, for example,
   * <code>www.example.com</code>. The name must be the name of the hosted zone or a
   * subdomain of it.</p>
   */
  inline const Aws::String& GetRecordName() const { return m_recordName; }
  inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
  template <typename RecordNameT = Aws::String>
  void SetRecordName(RecordNameT&& value) {
    m_recordNameHasBeenSet = true;
    m_recordName = std::forward<RecordNameT>(value);
  }
  template <typename RecordNameT = Aws::String>
  ResourceRecordSetProtectionConfig& WithRecordName(RecordNameT&& value) {
    SetRecordName(std::forward<RecordNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record type of the resource record sets to protect. You can't protect
   * records of type <code>DNAME</code> or of the DNSSEC record types that Route 53
   * manages.</p>
   */
  inline RRType GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  inline void SetRecordType(RRType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline ResourceRecordSetProtectionConfig& WithRecordType(RRType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional comment about the protection, for example, the reason that the
   * resource record sets are protected. The comment can be up to 256 characters
   * long. If you don't specify a comment, the protection doesn't have a comment.
   * When Route 53 rejects a <code>ChangeResourceRecordSets</code> request because of
   * this protection, the error message includes the comment, so don't include
   * sensitive information.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  ResourceRecordSetProtectionConfig& WithComment(CommentT&& value) {
    SetComment(std::forward<CommentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordName;

  RRType m_recordType{RRType::NOT_SET};

  Aws::String m_comment;
  bool m_recordNameHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
  bool m_commentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
