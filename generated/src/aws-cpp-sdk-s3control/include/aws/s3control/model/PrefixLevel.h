/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/PrefixLevelStorageMetrics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the prefix-level configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/PrefixLevel">AWS
   * API Reference</a></p>
   */
  class PrefixLevel
  {
  public:
    AWS_S3CONTROL_API PrefixLevel() = default;
    AWS_S3CONTROL_API PrefixLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API PrefixLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the prefix-level storage metrics for S3 Storage Lens.</p>
     */
    inline const PrefixLevelStorageMetrics& GetStorageMetrics() const { return m_storageMetrics; }
    inline bool StorageMetricsHasBeenSet() const { return m_storageMetricsHasBeenSet; }
    template<typename StorageMetricsT = PrefixLevelStorageMetrics>
    void SetStorageMetrics(StorageMetricsT&& value) { m_storageMetricsHasBeenSet = true; m_storageMetrics = std::forward<StorageMetricsT>(value); }
    template<typename StorageMetricsT = PrefixLevelStorageMetrics>
    PrefixLevel& WithStorageMetrics(StorageMetricsT&& value) { SetStorageMetrics(std::forward<StorageMetricsT>(value)); return *this;}
    ///@}
  private:

    PrefixLevelStorageMetrics m_storageMetrics;
    bool m_storageMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
