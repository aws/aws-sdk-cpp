/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensCostAndUsageReportsSelectionCriteria.h>

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
 * <p>A container for the prefix-level configuration that determines the prefixes
 * for which S3 Storage Lens publishes cost data to Amazon Web Services Cost and
 * Usage Reports (Amazon Web Services CUR).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensCostAndUsageReportsPrefixLevel">AWS
 * API Reference</a></p>
 */
class StorageLensCostAndUsageReportsPrefixLevel {
 public:
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsPrefixLevel() = default;
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsPrefixLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsPrefixLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Indicates whether prefix-level cost data publishing to Amazon Web Services
   * CUR is enabled.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline StorageLensCostAndUsageReportsPrefixLevel& WithIsEnabled(bool value) {
    SetIsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for the selection criteria that determines the prefix depths for
   * which cost data is published to Amazon Web Services CUR.</p>
   */
  inline const StorageLensCostAndUsageReportsSelectionCriteria& GetSelectionCriteria() const { return m_selectionCriteria; }
  inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }
  template <typename SelectionCriteriaT = StorageLensCostAndUsageReportsSelectionCriteria>
  void SetSelectionCriteria(SelectionCriteriaT&& value) {
    m_selectionCriteriaHasBeenSet = true;
    m_selectionCriteria = std::forward<SelectionCriteriaT>(value);
  }
  template <typename SelectionCriteriaT = StorageLensCostAndUsageReportsSelectionCriteria>
  StorageLensCostAndUsageReportsPrefixLevel& WithSelectionCriteria(SelectionCriteriaT&& value) {
    SetSelectionCriteria(std::forward<SelectionCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_isEnabled{false};

  StorageLensCostAndUsageReportsSelectionCriteria m_selectionCriteria;
  bool m_isEnabledHasBeenSet = false;
  bool m_selectionCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
