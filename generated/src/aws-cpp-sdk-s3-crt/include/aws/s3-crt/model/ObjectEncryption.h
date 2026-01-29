/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/SSEKMSEncryption.h>

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
 * <p> The updated server-side encryption type for this object. The
 * <code>UpdateObjectEncryption</code> operation supports the SSE-S3 and SSE-KMS
 * encryption types. </p> <p>Valid Values: <code>SSES3</code> | <code>SSEKMS</code>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ObjectEncryption">AWS
 * API Reference</a></p>
 */
class ObjectEncryption {
 public:
  AWS_S3CRT_API ObjectEncryption() = default;
  AWS_S3CRT_API ObjectEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API ObjectEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p> Specifies to update the object encryption type to server-side encryption
   * with Key Management Service (KMS) keys (SSE-KMS). </p>
   */
  inline const SSEKMSEncryption& GetSSEKMS() const { return m_sSEKMS; }
  inline bool SSEKMSHasBeenSet() const { return m_sSEKMSHasBeenSet; }
  template <typename SSEKMST = SSEKMSEncryption>
  void SetSSEKMS(SSEKMST&& value) {
    m_sSEKMSHasBeenSet = true;
    m_sSEKMS = std::forward<SSEKMST>(value);
  }
  template <typename SSEKMST = SSEKMSEncryption>
  ObjectEncryption& WithSSEKMS(SSEKMST&& value) {
    SetSSEKMS(std::forward<SSEKMST>(value));
    return *this;
  }
  ///@}
 private:
  SSEKMSEncryption m_sSEKMS;
  bool m_sSEKMSHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
