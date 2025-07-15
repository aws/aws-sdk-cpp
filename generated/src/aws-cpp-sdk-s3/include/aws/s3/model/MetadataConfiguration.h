/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/JournalTableConfiguration.h>
#include <aws/s3/model/InventoryTableConfiguration.h>
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
   * <p> The S3 Metadata configuration for a general purpose bucket. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/MetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class MetadataConfiguration
  {
  public:
    AWS_S3_API MetadataConfiguration() = default;
    AWS_S3_API MetadataConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API MetadataConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The journal table configuration for a metadata configuration. </p>
     */
    inline const JournalTableConfiguration& GetJournalTableConfiguration() const { return m_journalTableConfiguration; }
    inline bool JournalTableConfigurationHasBeenSet() const { return m_journalTableConfigurationHasBeenSet; }
    template<typename JournalTableConfigurationT = JournalTableConfiguration>
    void SetJournalTableConfiguration(JournalTableConfigurationT&& value) { m_journalTableConfigurationHasBeenSet = true; m_journalTableConfiguration = std::forward<JournalTableConfigurationT>(value); }
    template<typename JournalTableConfigurationT = JournalTableConfiguration>
    MetadataConfiguration& WithJournalTableConfiguration(JournalTableConfigurationT&& value) { SetJournalTableConfiguration(std::forward<JournalTableConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The inventory table configuration for a metadata configuration. </p>
     */
    inline const InventoryTableConfiguration& GetInventoryTableConfiguration() const { return m_inventoryTableConfiguration; }
    inline bool InventoryTableConfigurationHasBeenSet() const { return m_inventoryTableConfigurationHasBeenSet; }
    template<typename InventoryTableConfigurationT = InventoryTableConfiguration>
    void SetInventoryTableConfiguration(InventoryTableConfigurationT&& value) { m_inventoryTableConfigurationHasBeenSet = true; m_inventoryTableConfiguration = std::forward<InventoryTableConfigurationT>(value); }
    template<typename InventoryTableConfigurationT = InventoryTableConfiguration>
    MetadataConfiguration& WithInventoryTableConfiguration(InventoryTableConfigurationT&& value) { SetInventoryTableConfiguration(std::forward<InventoryTableConfigurationT>(value)); return *this;}
    ///@}
  private:

    JournalTableConfiguration m_journalTableConfiguration;
    bool m_journalTableConfigurationHasBeenSet = false;

    InventoryTableConfiguration m_inventoryTableConfiguration;
    bool m_inventoryTableConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
