/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Contains supported Amazon EBS volume information for an AMI fulfillment
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/AmazonMachineImageEbsVolume">AWS
 * API Reference</a></p>
 */
class AmazonMachineImageEbsVolume {
 public:
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageEbsVolume() = default;
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageEbsVolume(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API AmazonMachineImageEbsVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The supported Amazon EBS volume types.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVolumeTypes() const { return m_volumeTypes; }
  inline bool VolumeTypesHasBeenSet() const { return m_volumeTypesHasBeenSet; }
  template <typename VolumeTypesT = Aws::Vector<Aws::String>>
  void SetVolumeTypes(VolumeTypesT&& value) {
    m_volumeTypesHasBeenSet = true;
    m_volumeTypes = std::forward<VolumeTypesT>(value);
  }
  template <typename VolumeTypesT = Aws::Vector<Aws::String>>
  AmazonMachineImageEbsVolume& WithVolumeTypes(VolumeTypesT&& value) {
    SetVolumeTypes(std::forward<VolumeTypesT>(value));
    return *this;
  }
  template <typename VolumeTypesT = Aws::String>
  AmazonMachineImageEbsVolume& AddVolumeTypes(VolumeTypesT&& value) {
    m_volumeTypesHasBeenSet = true;
    m_volumeTypes.emplace_back(std::forward<VolumeTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of provisioned IOPS supported.</p>
   */
  inline int GetIops() const { return m_iops; }
  inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
  inline void SetIops(int value) {
    m_iopsHasBeenSet = true;
    m_iops = value;
  }
  inline AmazonMachineImageEbsVolume& WithIops(int value) {
    SetIops(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_volumeTypes;

  int m_iops{0};
  bool m_volumeTypesHasBeenSet = false;
  bool m_iopsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
