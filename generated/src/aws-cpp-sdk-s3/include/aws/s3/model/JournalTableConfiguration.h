/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/RecordExpiration.h>
#include <aws/s3/model/MetadataTableEncryptionConfiguration.h>
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
   * <p> The journal table configuration for an S3 Metadata configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/JournalTableConfiguration">AWS
   * API Reference</a></p>
   */
  class JournalTableConfiguration
  {
  public:
    AWS_S3_API JournalTableConfiguration() = default;
    AWS_S3_API JournalTableConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API JournalTableConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The journal table record expiration settings for the journal table. </p>
     */
    inline const RecordExpiration& GetRecordExpiration() const { return m_recordExpiration; }
    inline bool RecordExpirationHasBeenSet() const { return m_recordExpirationHasBeenSet; }
    template<typename RecordExpirationT = RecordExpiration>
    void SetRecordExpiration(RecordExpirationT&& value) { m_recordExpirationHasBeenSet = true; m_recordExpiration = std::forward<RecordExpirationT>(value); }
    template<typename RecordExpirationT = RecordExpiration>
    JournalTableConfiguration& WithRecordExpiration(RecordExpirationT&& value) { SetRecordExpiration(std::forward<RecordExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The encryption configuration for the journal table. </p>
     */
    inline const MetadataTableEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = MetadataTableEncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = MetadataTableEncryptionConfiguration>
    JournalTableConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    RecordExpiration m_recordExpiration;
    bool m_recordExpirationHasBeenSet = false;

    MetadataTableEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
