/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ObjectEncryption.h>

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
 * <p>With the <code>UpdateObjectEncryption</code> operation, you can atomically
 * update the server-side encryption type of an existing object in a general
 * purpose bucket without any data movement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3UpdateObjectEncryptionOperation">AWS
 * API Reference</a></p>
 */
class S3UpdateObjectEncryptionOperation {
 public:
  AWS_S3CONTROL_API S3UpdateObjectEncryptionOperation() = default;
  AWS_S3CONTROL_API S3UpdateObjectEncryptionOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API S3UpdateObjectEncryptionOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The updated server-side encryption type for this S3 object. The
   * <code>UpdateObjectEncryption</code> operation supports the SSE-KMS encryption
   * type.</p>
   */
  inline const ObjectEncryption& GetObjectEncryption() const { return m_objectEncryption; }
  inline bool ObjectEncryptionHasBeenSet() const { return m_objectEncryptionHasBeenSet; }
  template <typename ObjectEncryptionT = ObjectEncryption>
  void SetObjectEncryption(ObjectEncryptionT&& value) {
    m_objectEncryptionHasBeenSet = true;
    m_objectEncryption = std::forward<ObjectEncryptionT>(value);
  }
  template <typename ObjectEncryptionT = ObjectEncryption>
  S3UpdateObjectEncryptionOperation& WithObjectEncryption(ObjectEncryptionT&& value) {
    SetObjectEncryption(std::forward<ObjectEncryptionT>(value));
    return *this;
  }
  ///@}
 private:
  ObjectEncryption m_objectEncryption;
  bool m_objectEncryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
