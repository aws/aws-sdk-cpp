/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ValidStorageOptions.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains the valid options for an additional storage volume.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ValidVolumeOptions">AWS
 * API Reference</a></p>
 */
class ValidVolumeOptions {
 public:
  AWS_RDS_API ValidVolumeOptions() = default;
  AWS_RDS_API ValidVolumeOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API ValidVolumeOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the additional storage volume.</p>
   */
  inline const Aws::String& GetVolumeName() const { return m_volumeName; }
  inline bool VolumeNameHasBeenSet() const { return m_volumeNameHasBeenSet; }
  template <typename VolumeNameT = Aws::String>
  void SetVolumeName(VolumeNameT&& value) {
    m_volumeNameHasBeenSet = true;
    m_volumeName = std::forward<VolumeNameT>(value);
  }
  template <typename VolumeNameT = Aws::String>
  ValidVolumeOptions& WithVolumeName(VolumeNameT&& value) {
    SetVolumeName(std::forward<VolumeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The valid storage options for the additional storage volume.</p>
   */
  inline const Aws::Vector<ValidStorageOptions>& GetStorage() const { return m_storage; }
  inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
  template <typename StorageT = Aws::Vector<ValidStorageOptions>>
  void SetStorage(StorageT&& value) {
    m_storageHasBeenSet = true;
    m_storage = std::forward<StorageT>(value);
  }
  template <typename StorageT = Aws::Vector<ValidStorageOptions>>
  ValidVolumeOptions& WithStorage(StorageT&& value) {
    SetStorage(std::forward<StorageT>(value));
    return *this;
  }
  template <typename StorageT = ValidStorageOptions>
  ValidVolumeOptions& AddStorage(StorageT&& value) {
    m_storageHasBeenSet = true;
    m_storage.emplace_back(std::forward<StorageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeName;

  Aws::Vector<ValidStorageOptions> m_storage;
  bool m_volumeNameHasBeenSet = false;
  bool m_storageHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
