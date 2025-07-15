/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/DestinationResult.h>
#include <aws/s3/model/JournalTableConfigurationResult.h>
#include <aws/s3/model/InventoryTableConfigurationResult.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/MetadataConfigurationResult">AWS
   * API Reference</a></p>
   */
  class MetadataConfigurationResult
  {
  public:
    AWS_S3_API MetadataConfigurationResult() = default;
    AWS_S3_API MetadataConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API MetadataConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The destination settings for a metadata configuration. </p>
     */
    inline const DestinationResult& GetDestinationResult() const { return m_destinationResult; }
    inline bool DestinationResultHasBeenSet() const { return m_destinationResultHasBeenSet; }
    template<typename DestinationResultT = DestinationResult>
    void SetDestinationResult(DestinationResultT&& value) { m_destinationResultHasBeenSet = true; m_destinationResult = std::forward<DestinationResultT>(value); }
    template<typename DestinationResultT = DestinationResult>
    MetadataConfigurationResult& WithDestinationResult(DestinationResultT&& value) { SetDestinationResult(std::forward<DestinationResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The journal table configuration for a metadata configuration. </p>
     */
    inline const JournalTableConfigurationResult& GetJournalTableConfigurationResult() const { return m_journalTableConfigurationResult; }
    inline bool JournalTableConfigurationResultHasBeenSet() const { return m_journalTableConfigurationResultHasBeenSet; }
    template<typename JournalTableConfigurationResultT = JournalTableConfigurationResult>
    void SetJournalTableConfigurationResult(JournalTableConfigurationResultT&& value) { m_journalTableConfigurationResultHasBeenSet = true; m_journalTableConfigurationResult = std::forward<JournalTableConfigurationResultT>(value); }
    template<typename JournalTableConfigurationResultT = JournalTableConfigurationResult>
    MetadataConfigurationResult& WithJournalTableConfigurationResult(JournalTableConfigurationResultT&& value) { SetJournalTableConfigurationResult(std::forward<JournalTableConfigurationResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The inventory table configuration for a metadata configuration. </p>
     */
    inline const InventoryTableConfigurationResult& GetInventoryTableConfigurationResult() const { return m_inventoryTableConfigurationResult; }
    inline bool InventoryTableConfigurationResultHasBeenSet() const { return m_inventoryTableConfigurationResultHasBeenSet; }
    template<typename InventoryTableConfigurationResultT = InventoryTableConfigurationResult>
    void SetInventoryTableConfigurationResult(InventoryTableConfigurationResultT&& value) { m_inventoryTableConfigurationResultHasBeenSet = true; m_inventoryTableConfigurationResult = std::forward<InventoryTableConfigurationResultT>(value); }
    template<typename InventoryTableConfigurationResultT = InventoryTableConfigurationResult>
    MetadataConfigurationResult& WithInventoryTableConfigurationResult(InventoryTableConfigurationResultT&& value) { SetInventoryTableConfigurationResult(std::forward<InventoryTableConfigurationResultT>(value)); return *this;}
    ///@}
  private:

    DestinationResult m_destinationResult;
    bool m_destinationResultHasBeenSet = false;

    JournalTableConfigurationResult m_journalTableConfigurationResult;
    bool m_journalTableConfigurationResultHasBeenSet = false;

    InventoryTableConfigurationResult m_inventoryTableConfigurationResult;
    bool m_inventoryTableConfigurationResultHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
