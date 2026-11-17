/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Control {
namespace Model {

/**
 * <p>The container for S3 Storage Lens Intelligent-Tiering access tier metrics.
 * When enabled, S3 Storage Lens produces metrics for each individual S3
 * Intelligent-Tiering access tier instead of reporting a single aggregate value
 * for the INTELLIGENT_TIERING storage class.</p> <p>For more information about S3
 * Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
 * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
 * User Guide</i>. For a complete list of S3 Storage Lens metrics, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
 * Storage Lens metrics glossary</a> in the <i>Amazon S3 User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/IntAccessTiers">AWS
 * API Reference</a></p>
 */
class IntAccessTiers {
 public:
  AWS_S3CONTROL_API IntAccessTiers() = default;
  AWS_S3CONTROL_API IntAccessTiers(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API IntAccessTiers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A container that indicates whether S3 Storage Lens Intelligent-Tiering access
   * tier metrics are enabled.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline IntAccessTiers& WithIsEnabled(bool value) {
    SetIsEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_isEnabled{false};
  bool m_isEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
