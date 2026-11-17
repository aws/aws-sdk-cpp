/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/StorageLensCostAndUsageReportsPrefixLevel.h>

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
 * <p>A container for the configuration used to publish S3 Storage Lens cost data
 * to Amazon Web Services Cost and Usage Reports (Amazon Web Services
 * CUR).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensCostAndUsageReportsPublish">AWS
 * API Reference</a></p>
 */
class StorageLensCostAndUsageReportsPublish {
 public:
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsPublish() = default;
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsPublish(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API StorageLensCostAndUsageReportsPublish& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A container for the prefix-level configuration that determines the prefixes
   * for which S3 Storage Lens publishes cost data to Amazon Web Services CUR.</p>
   */
  inline const StorageLensCostAndUsageReportsPrefixLevel& GetPrefixLevel() const { return m_prefixLevel; }
  inline bool PrefixLevelHasBeenSet() const { return m_prefixLevelHasBeenSet; }
  template <typename PrefixLevelT = StorageLensCostAndUsageReportsPrefixLevel>
  void SetPrefixLevel(PrefixLevelT&& value) {
    m_prefixLevelHasBeenSet = true;
    m_prefixLevel = std::forward<PrefixLevelT>(value);
  }
  template <typename PrefixLevelT = StorageLensCostAndUsageReportsPrefixLevel>
  StorageLensCostAndUsageReportsPublish& WithPrefixLevel(PrefixLevelT&& value) {
    SetPrefixLevel(std::forward<PrefixLevelT>(value));
    return *this;
  }
  ///@}
 private:
  StorageLensCostAndUsageReportsPrefixLevel m_prefixLevel;
  bool m_prefixLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws
