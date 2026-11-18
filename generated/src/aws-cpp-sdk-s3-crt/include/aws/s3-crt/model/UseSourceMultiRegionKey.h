/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/UseSourceMultiRegionKeyStatus.h>

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
 * <p>A container for configuring the use of the related multi-Region KMS key in
 * the destination Amazon Web Services Region for replication.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/UseSourceMultiRegionKey">AWS
 * API Reference</a></p>
 */
class UseSourceMultiRegionKey {
 public:
  AWS_S3CRT_API UseSourceMultiRegionKey() = default;
  AWS_S3CRT_API UseSourceMultiRegionKey(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API UseSourceMultiRegionKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Specifies whether Amazon S3 uses the related multi-Region KMS key in the
   * destination Amazon Web Services Region to encrypt the replica.</p>
   */
  inline UseSourceMultiRegionKeyStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(UseSourceMultiRegionKeyStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UseSourceMultiRegionKey& WithStatus(UseSourceMultiRegionKeyStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  UseSourceMultiRegionKeyStatus m_status{UseSourceMultiRegionKeyStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
