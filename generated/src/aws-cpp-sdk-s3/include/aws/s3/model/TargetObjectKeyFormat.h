/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/SimplePrefix.h>
#include <aws/s3/model/PartitionedPrefix.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Amazon S3 key format for log objects. Only one format, PartitionedPrefix or
   * SimplePrefix, is allowed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/TargetObjectKeyFormat">AWS
   * API Reference</a></p>
   */
  class TargetObjectKeyFormat
  {
  public:
    AWS_S3_API TargetObjectKeyFormat() = default;
    AWS_S3_API TargetObjectKeyFormat(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API TargetObjectKeyFormat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>To use the simple format for S3 keys for log objects. To specify SimplePrefix
     * format, set SimplePrefix to {}.</p>
     */
    inline const SimplePrefix& GetSimplePrefix() const { return m_simplePrefix; }
    inline bool SimplePrefixHasBeenSet() const { return m_simplePrefixHasBeenSet; }
    template<typename SimplePrefixT = SimplePrefix>
    void SetSimplePrefix(SimplePrefixT&& value) { m_simplePrefixHasBeenSet = true; m_simplePrefix = std::forward<SimplePrefixT>(value); }
    template<typename SimplePrefixT = SimplePrefix>
    TargetObjectKeyFormat& WithSimplePrefix(SimplePrefixT&& value) { SetSimplePrefix(std::forward<SimplePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Partitioned S3 key for log objects.</p>
     */
    inline const PartitionedPrefix& GetPartitionedPrefix() const { return m_partitionedPrefix; }
    inline bool PartitionedPrefixHasBeenSet() const { return m_partitionedPrefixHasBeenSet; }
    template<typename PartitionedPrefixT = PartitionedPrefix>
    void SetPartitionedPrefix(PartitionedPrefixT&& value) { m_partitionedPrefixHasBeenSet = true; m_partitionedPrefix = std::forward<PartitionedPrefixT>(value); }
    template<typename PartitionedPrefixT = PartitionedPrefix>
    TargetObjectKeyFormat& WithPartitionedPrefix(PartitionedPrefixT&& value) { SetPartitionedPrefix(std::forward<PartitionedPrefixT>(value)); return *this;}
    ///@}
  private:

    SimplePrefix m_simplePrefix;
    bool m_simplePrefixHasBeenSet = false;

    PartitionedPrefix m_partitionedPrefix;
    bool m_partitionedPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
