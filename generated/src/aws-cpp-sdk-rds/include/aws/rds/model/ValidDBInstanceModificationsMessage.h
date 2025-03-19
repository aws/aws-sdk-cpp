/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ValidStorageOptions.h>
#include <aws/rds/model/AvailableProcessorFeature.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Information about valid modifications that you can make to your DB instance.
   * Contains the result of a successful call to the
   * <code>DescribeValidDBInstanceModifications</code> action. You can use this
   * information when you call <code>ModifyDBInstance</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ValidDBInstanceModificationsMessage">AWS
   * API Reference</a></p>
   */
  class ValidDBInstanceModificationsMessage
  {
  public:
    AWS_RDS_API ValidDBInstanceModificationsMessage() = default;
    AWS_RDS_API ValidDBInstanceModificationsMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ValidDBInstanceModificationsMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline const Aws::Vector<ValidStorageOptions>& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = Aws::Vector<ValidStorageOptions>>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = Aws::Vector<ValidStorageOptions>>
    ValidDBInstanceModificationsMessage& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    template<typename StorageT = ValidStorageOptions>
    ValidDBInstanceModificationsMessage& AddStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage.emplace_back(std::forward<StorageT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Valid processor features for your DB instance.</p>
     */
    inline const Aws::Vector<AvailableProcessorFeature>& GetValidProcessorFeatures() const { return m_validProcessorFeatures; }
    inline bool ValidProcessorFeaturesHasBeenSet() const { return m_validProcessorFeaturesHasBeenSet; }
    template<typename ValidProcessorFeaturesT = Aws::Vector<AvailableProcessorFeature>>
    void SetValidProcessorFeatures(ValidProcessorFeaturesT&& value) { m_validProcessorFeaturesHasBeenSet = true; m_validProcessorFeatures = std::forward<ValidProcessorFeaturesT>(value); }
    template<typename ValidProcessorFeaturesT = Aws::Vector<AvailableProcessorFeature>>
    ValidDBInstanceModificationsMessage& WithValidProcessorFeatures(ValidProcessorFeaturesT&& value) { SetValidProcessorFeatures(std::forward<ValidProcessorFeaturesT>(value)); return *this;}
    template<typename ValidProcessorFeaturesT = AvailableProcessorFeature>
    ValidDBInstanceModificationsMessage& AddValidProcessorFeatures(ValidProcessorFeaturesT&& value) { m_validProcessorFeaturesHasBeenSet = true; m_validProcessorFeatures.emplace_back(std::forward<ValidProcessorFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports using a dedicated log volume
     * (DLV).</p>
     */
    inline bool GetSupportsDedicatedLogVolume() const { return m_supportsDedicatedLogVolume; }
    inline bool SupportsDedicatedLogVolumeHasBeenSet() const { return m_supportsDedicatedLogVolumeHasBeenSet; }
    inline void SetSupportsDedicatedLogVolume(bool value) { m_supportsDedicatedLogVolumeHasBeenSet = true; m_supportsDedicatedLogVolume = value; }
    inline ValidDBInstanceModificationsMessage& WithSupportsDedicatedLogVolume(bool value) { SetSupportsDedicatedLogVolume(value); return *this;}
    ///@}
  private:

    Aws::Vector<ValidStorageOptions> m_storage;
    bool m_storageHasBeenSet = false;

    Aws::Vector<AvailableProcessorFeature> m_validProcessorFeatures;
    bool m_validProcessorFeaturesHasBeenSet = false;

    bool m_supportsDedicatedLogVolume{false};
    bool m_supportsDedicatedLogVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
