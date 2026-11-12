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
 * <p>A protection for the resource record sets in a hosted zone that have the
 * specified name and type. While the protection exists, Route 53 rejects
 * <code>ChangeResourceRecordSets</code> requests that create, update, or delete
 * those resource record sets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ResourceRecordSetProtection">AWS
 * API Reference</a></p>
 */
class ResourceRecordSetProtection {
 public:
  AWS_ROUTE53_API ResourceRecordSetProtection() = default;
  AWS_ROUTE53_API ResourceRecordSetProtection(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ResourceRecordSetProtection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The name of the protected resource record sets.</p>
   */
  inline const Aws::String& GetRecordName() const { return m_recordName; }
  inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
  template <typename RecordNameT = Aws::String>
  void SetRecordName(RecordNameT&& value) {
    m_recordNameHasBeenSet = true;
    m_recordName = std::forward<RecordNameT>(value);
  }
  template <typename RecordNameT = Aws::String>
  ResourceRecordSetProtection& WithRecordName(RecordNameT&& value) {
    SetRecordName(std::forward<RecordNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DNS record type of the protected resource record sets.</p>
   */
  inline RRType GetRecordType() const { return m_recordType; }
  inline bool RecordTypeHasBeenSet() const { return m_recordTypeHasBeenSet; }
  inline void SetRecordType(RRType value) {
    m_recordTypeHasBeenSet = true;
    m_recordType = value;
  }
  inline ResourceRecordSetProtection& WithRecordType(RRType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comment that was specified when the protection was created, if any.</p>
   */
  inline const Aws::String& GetComment() const { return m_comment; }
  inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
  template <typename CommentT = Aws::String>
  void SetComment(CommentT&& value) {
    m_commentHasBeenSet = true;
    m_comment = std::forward<CommentT>(value);
  }
  template <typename CommentT = Aws::String>
  ResourceRecordSetProtection& WithComment(CommentT&& value) {
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
