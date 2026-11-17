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
 * <p>A container for the selection criteria used by the S3 Storage Lens Amazon Web
 * Services Cost and Usage Reports (Amazon Web Services CUR) publish configuration.
 * The selection criteria specifies the minimum and maximum prefix depth (both
 * inclusive) for which cost data is published to Amazon Web Services CUR. You must
 * provide both <code>MinDepth</code> and <code>MaxDepth</code> together, or
 * neither; <code>MinDepth</code> must be less than or equal to
 * <code>MaxDepth</code>, and the difference must not exceed 4. If neither is
 * provided, <code>MinDepth</code> defaults to <code>1</code> and
 * <code>MaxDepth</code> defaults to <code>3</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensCostAndUsageReportsSelectionCriteria">AWS
 * API Reference</a></p>
 */
class StorageLensCostAndUsageReportsSelectionCriteria {
 public:
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsSelectionCriteria() = default;
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsSelectionCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsSelectionCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The minimum prefix depth (inclusive) for which cost data is published to
   * Amazon Web Services CUR. You must provide both <code>MinDepth</code> and
   * <code>MaxDepth</code> together, or neither. If neither is provided,
   * <code>MinDepth</code> defaults to <code>1</code>.</p>
   */
  inline int GetMinDepth() const { return m_minDepth; }
  inline bool MinDepthHasBeenSet() const { return m_minDepthHasBeenSet; }
  inline void SetMinDepth(int value) {
    m_minDepthHasBeenSet = true;
    m_minDepth = value;
  }
  inline StorageLensCostAndUsageReportsSelectionCriteria& WithMinDepth(int value) {
    SetMinDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum prefix depth (inclusive) for which cost data is published to
   * Amazon Web Services CUR. You must provide both <code>MinDepth</code> and
   * <code>MaxDepth</code> together, or neither. If neither is provided,
   * <code>MaxDepth</code> defaults to <code>3</code>.</p>
   */
  inline int GetMaxDepth() const { return m_maxDepth; }
  inline bool MaxDepthHasBeenSet() const { return m_maxDepthHasBeenSet; }
  inline void SetMaxDepth(int value) {
    m_maxDepthHasBeenSet = true;
    m_maxDepth = value;
  }
  inline StorageLensCostAndUsageReportsSelectionCriteria& WithMaxDepth(int value) {
    SetMaxDepth(value);
    return *this;
  }
  ///@}
 private:
  int m_minDepth{0};

  int m_maxDepth{0};
  bool m_minDepthHasBeenSet = false;
  bool m_maxDepthHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
