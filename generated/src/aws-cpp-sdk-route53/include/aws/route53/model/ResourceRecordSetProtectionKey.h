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
 * <p>The name and type that identify a resource record set
 * protection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ResourceRecordSetProtectionKey">AWS
 * API Reference</a></p>
 */
class ResourceRecordSetProtectionKey {
 public:
  AWS_ROUTE53_API ResourceRecordSetProtectionKey() = default;
  AWS_ROUTE53_API ResourceRecordSetProtectionKey(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ResourceRecordSetProtectionKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
  ResourceRecordSetProtectionKey& WithRecordName(RecordNameT&& value) {
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
  inline ResourceRecordSetProtectionKey& WithRecordType(RRType value) {
    SetRecordType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordName;

  RRType m_recordType{RRType::NOT_SET};
  bool m_recordNameHasBeenSet = false;
  bool m_recordTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
