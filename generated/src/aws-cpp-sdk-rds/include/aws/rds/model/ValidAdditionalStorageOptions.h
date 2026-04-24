/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/ValidVolumeOptions.h>

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
 * <p>Contains the valid options for additional storage volumes for a DB instance.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ValidAdditionalStorageOptions">AWS
 * API Reference</a></p>
 */
class ValidAdditionalStorageOptions {
 public:
  AWS_RDS_API ValidAdditionalStorageOptions() = default;
  AWS_RDS_API ValidAdditionalStorageOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API ValidAdditionalStorageOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Indicates whether the DB instance supports additional storage volumes.</p>
   */
  inline bool GetSupportsAdditionalStorageVolumes() const { return m_supportsAdditionalStorageVolumes; }
  inline bool SupportsAdditionalStorageVolumesHasBeenSet() const { return m_supportsAdditionalStorageVolumesHasBeenSet; }
  inline void SetSupportsAdditionalStorageVolumes(bool value) {
    m_supportsAdditionalStorageVolumesHasBeenSet = true;
    m_supportsAdditionalStorageVolumes = value;
  }
  inline ValidAdditionalStorageOptions& WithSupportsAdditionalStorageVolumes(bool value) {
    SetSupportsAdditionalStorageVolumes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The valid additional storage volume options for the DB instance.</p>
   */
  inline const Aws::Vector<ValidVolumeOptions>& GetVolumes() const { return m_volumes; }
  inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
  template <typename VolumesT = Aws::Vector<ValidVolumeOptions>>
  void SetVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes = std::forward<VolumesT>(value);
  }
  template <typename VolumesT = Aws::Vector<ValidVolumeOptions>>
  ValidAdditionalStorageOptions& WithVolumes(VolumesT&& value) {
    SetVolumes(std::forward<VolumesT>(value));
    return *this;
  }
  template <typename VolumesT = ValidVolumeOptions>
  ValidAdditionalStorageOptions& AddVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes.emplace_back(std::forward<VolumesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_supportsAdditionalStorageVolumes{false};

  Aws::Vector<ValidVolumeOptions> m_volumes;
  bool m_supportsAdditionalStorageVolumesHasBeenSet = false;
  bool m_volumesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
