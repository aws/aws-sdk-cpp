/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/InventoryConfigurationState.h>
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
   * <p> The specified updates to the S3 Metadata inventory table configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InventoryTableConfigurationUpdates">AWS
   * API Reference</a></p>
   */
  class InventoryTableConfigurationUpdates
  {
  public:
    AWS_S3_API InventoryTableConfigurationUpdates() = default;
    AWS_S3_API InventoryTableConfigurationUpdates(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API InventoryTableConfigurationUpdates& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The configuration state of the inventory table, indicating whether the
     * inventory table is enabled or disabled. </p>
     */
    inline InventoryConfigurationState GetConfigurationState() const { return m_configurationState; }
    inline bool ConfigurationStateHasBeenSet() const { return m_configurationStateHasBeenSet; }
    inline void SetConfigurationState(InventoryConfigurationState value) { m_configurationStateHasBeenSet = true; m_configurationState = value; }
    inline InventoryTableConfigurationUpdates& WithConfigurationState(InventoryConfigurationState value) { SetConfigurationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The encryption configuration for the inventory table. </p>
     */
    inline const MetadataTableEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = MetadataTableEncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = MetadataTableEncryptionConfiguration>
    InventoryTableConfigurationUpdates& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    InventoryConfigurationState m_configurationState{InventoryConfigurationState::NOT_SET};
    bool m_configurationStateHasBeenSet = false;

    MetadataTableEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
