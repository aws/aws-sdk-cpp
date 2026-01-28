/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3UpdateObjectEncryptionSSEKMS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Control {
namespace Model {

/**
 * <p>The updated server-side encryption type for this object. The
 * <code>UpdateObjectEncryption</code> operation supports the SSE-KMS encryption
 * type.</p> <p>Valid Values: <code>SSEKMS</code> </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/ObjectEncryption">AWS
 * API Reference</a></p>
 */
class ObjectEncryption {
 public:
  AWS_S3CONTROL_API ObjectEncryption() = default;
  AWS_S3CONTROL_API ObjectEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API ObjectEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Specifies to update the object encryption type to server-side encryption with
   * Key Management Service (KMS) keys (SSE-KMS).</p>
   */
  inline const S3UpdateObjectEncryptionSSEKMS& GetSSEKMS() const { return m_sSEKMS; }
  inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }
  template <typename SSEKMST = S3UpdateObjectEncryptionSSEKMS>
  void SetSSEKMS(SSEKMST&& value) {
    m_sSEKMSHasBeenSet = true;
    m_sSEKMS = std::forward<SSEKMST>(value);
  }
  template <typename SSEKMST = S3UpdateObjectEncryptionSSEKMS>
  ObjectEncryption& WithSSEKMS(SSEKMST&& value) {
    SetSSEKMS(std::forward<SSEKMST>(value));
    return *this;
  }
  ///@}
 private:
  S3UpdateObjectEncryptionSSEKMS m_sSEKMS;
  bool m_sSEKMSHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
