/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/BucketAbacStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {

/**
 * <p>The ABAC status of the general purpose bucket. When ABAC is enabled for the
 * general purpose bucket, you can use tags to manage access to the general purpose
 * buckets as well as for cost tracking purposes. When ABAC is disabled for the
 * general purpose buckets, you can only use tags for cost tracking purposes. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/buckets-tagging.html">Using
 * tags with S3 general purpose buckets</a>. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AbacStatus">AWS API
 * Reference</a></p>
 */
class AbacStatus {
 public:
  AWS_S3CRT_API AbacStatus() = default;
  AWS_S3CRT_API AbacStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API AbacStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ABAC status of the general purpose bucket. </p>
   */
  inline BucketAbacStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BucketAbacStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AbacStatus& WithStatus(BucketAbacStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  BucketAbacStatus m_status{BucketAbacStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
