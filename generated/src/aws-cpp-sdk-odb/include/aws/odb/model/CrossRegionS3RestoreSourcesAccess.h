/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ManagedResourceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The configuration access for the cross-Region Amazon S3 database restore
 * source for the ODB network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CrossRegionS3RestoreSourcesAccess">AWS
 * API Reference</a></p>
 */
class CrossRegionS3RestoreSourcesAccess {
 public:
  AWS_ODB_API CrossRegionS3RestoreSourcesAccess() = default;
  AWS_ODB_API CrossRegionS3RestoreSourcesAccess(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API CrossRegionS3RestoreSourcesAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region for cross-Region Amazon S3 restore access.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  CrossRegionS3RestoreSourcesAccess& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 addresses allowed for cross-Region Amazon S3 restore access.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
  inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  void SetIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses = std::forward<Ipv4AddressesT>(value);
  }
  template <typename Ipv4AddressesT = Aws::Vector<Aws::String>>
  CrossRegionS3RestoreSourcesAccess& WithIpv4Addresses(Ipv4AddressesT&& value) {
    SetIpv4Addresses(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  template <typename Ipv4AddressesT = Aws::String>
  CrossRegionS3RestoreSourcesAccess& AddIpv4Addresses(Ipv4AddressesT&& value) {
    m_ipv4AddressesHasBeenSet = true;
    m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the cross-Region Amazon S3 restore access
   * configuration.</p>
   */
  inline ManagedResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ManagedResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CrossRegionS3RestoreSourcesAccess& WithStatus(ManagedResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::Vector<Aws::String> m_ipv4Addresses;

  ManagedResourceStatus m_status{ManagedResourceStatus::NOT_SET};
  bool m_regionHasBeenSet = false;
  bool m_ipv4AddressesHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
