/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/DefaultRetention.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>The container element for an Object Lock rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ObjectLockRule">AWS
 * API Reference</a></p>
 */
class ObjectLockRule {
 public:
  AWS_S3_API ObjectLockRule() = default;
  AWS_S3_API ObjectLockRule(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API ObjectLockRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The default Object Lock retention settings for new objects in this bucket.
   * You can specify:</p> <ul> <li> <p>A default retention period, by using
   * <code>Days</code> or <code>Years</code>.</p> </li> <li> <p>A default event hold
   * duration, by using <code>DefaultEventHold</code>. This setting also uses days or
   * years.</p> </li> </ul> <p>You can set one or both. You cannot use days and years
   * in the same setting.</p>
   */
  inline const DefaultRetention& GetDefaultRetention() const { return m_defaultRetention; }
  inline bool DefaultRetentionHasBeenSet() const { return m_defaultRetentionHasBeenSet; }
  template <typename DefaultRetentionT = DefaultRetention>
  void SetDefaultRetention(DefaultRetentionT&& value) {
    m_defaultRetentionHasBeenSet = true;
    m_defaultRetention = std::forward<DefaultRetentionT>(value);
  }
  template <typename DefaultRetentionT = DefaultRetention>
  ObjectLockRule& WithDefaultRetention(DefaultRetentionT&& value) {
    SetDefaultRetention(std::forward<DefaultRetentionT>(value));
    return *this;
  }
  ///@}
 private:
  DefaultRetention m_defaultRetention;
  bool m_defaultRetentionHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
