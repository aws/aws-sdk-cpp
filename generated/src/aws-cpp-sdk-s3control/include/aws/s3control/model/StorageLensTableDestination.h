/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensDataExportEncryption.h>

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
 * <p>A container for configuring your S3 Storage Lens reports to export to
 * read-only S3 table buckets. This parameter enables you to store your Storage
 * Lens metrics in a structured, queryable table format in Apache Iceberg.</p>
 * <p>For more information about S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
 * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
 * User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensTableDestination">AWS
 * API Reference</a></p>
 */
class StorageLensTableDestination {
 public:
  AWS_S3CONTROL_API StorageLensTableDestination() = default;
  AWS_S3CONTROL_API StorageLensTableDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API StorageLensTableDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A container that indicates whether the export to read-only S3 table buckets
   * is enabled for your S3 Storage Lens configuration. When set to true, Storage
   * Lens reports are automatically exported to tables in addition to other
   * configured destinations.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline StorageLensTableDestination& WithIsEnabled(bool value) {
    SetIsEnabled(value);
    return *this;
  }
  ///@}

  ///@{

  inline const StorageLensDataExportEncryption& GetEncryption() const { return m_encryption; }
  inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
  template <typename EncryptionT = StorageLensDataExportEncryption>
  void SetEncryption(EncryptionT&& value) {
    m_encryptionHasBeenSet = true;
    m_encryption = std::forward<EncryptionT>(value);
  }
  template <typename EncryptionT = StorageLensDataExportEncryption>
  StorageLensTableDestination& WithEncryption(EncryptionT&& value) {
    SetEncryption(std::forward<EncryptionT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_isEnabled{false};

  StorageLensDataExportEncryption m_encryption;
  bool m_isEnabledHasBeenSet = false;
  bool m_encryptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
