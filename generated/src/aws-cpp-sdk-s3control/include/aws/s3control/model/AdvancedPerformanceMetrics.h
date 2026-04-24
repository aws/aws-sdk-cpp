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
 * <p>The container element for S3 Storage Lens advanced performance metrics.
 * Advanced performance metrics provide insights into application performance, such
 * as request efficiency and access patterns. These metrics help you optimize your
 * S3 storage for both cost and performance by providing detailed analytics on how
 * your applications interact with S3 resources.</p> <p>For more information about
 * S3 Storage Lens, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
 * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
 * User Guide</i>. For a complete list of S3 Storage Lens metrics, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
 * Storage Lens metrics glossary</a> in the <i>Amazon S3 User
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AdvancedPerformanceMetrics">AWS
 * API Reference</a></p>
 */
class AdvancedPerformanceMetrics {
 public:
  AWS_S3CONTROL_API AdvancedPerformanceMetrics() = default;
  AWS_S3CONTROL_API AdvancedPerformanceMetrics(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API AdvancedPerformanceMetrics& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A container that indicates whether S3 Storage Lens advanced performance
   * metrics are enabled.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline AdvancedPerformanceMetrics& WithIsEnabled(bool value) {
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
