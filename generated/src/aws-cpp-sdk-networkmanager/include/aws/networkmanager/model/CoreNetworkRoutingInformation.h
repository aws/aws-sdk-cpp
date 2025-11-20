/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/RoutingInformationNextHop.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Routing information for a core network, including route details and BGP
 * attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkRoutingInformation">AWS
 * API Reference</a></p>
 */
class CoreNetworkRoutingInformation {
 public:
  AWS_NETWORKMANAGER_API CoreNetworkRoutingInformation() = default;
  AWS_NETWORKMANAGER_API CoreNetworkRoutingInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API CoreNetworkRoutingInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The IP prefix for the route.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  CoreNetworkRoutingInformation& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next hop information for the route.</p>
   */
  inline const RoutingInformationNextHop& GetNextHop() const { return m_nextHop; }
  inline bool NextHopHasBeenSet() const { return m_nextHopHasBeenSet; }
  template <typename NextHopT = RoutingInformationNextHop>
  void SetNextHop(NextHopT&& value) {
    m_nextHopHasBeenSet = true;
    m_nextHop = std::forward<NextHopT>(value);
  }
  template <typename NextHopT = RoutingInformationNextHop>
  CoreNetworkRoutingInformation& WithNextHop(NextHopT&& value) {
    SetNextHop(std::forward<NextHopT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BGP local preference value for the route.</p>
   */
  inline const Aws::String& GetLocalPreference() const { return m_localPreference; }
  inline bool LocalPreferenceHasBeenSet() const { return m_localPreferenceHasBeenSet; }
  template <typename LocalPreferenceT = Aws::String>
  void SetLocalPreference(LocalPreferenceT&& value) {
    m_localPreferenceHasBeenSet = true;
    m_localPreference = std::forward<LocalPreferenceT>(value);
  }
  template <typename LocalPreferenceT = Aws::String>
  CoreNetworkRoutingInformation& WithLocalPreference(LocalPreferenceT&& value) {
    SetLocalPreference(std::forward<LocalPreferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BGP Multi-Exit Discriminator (MED) value for the route.</p>
   */
  inline const Aws::String& GetMed() const { return m_med; }
  inline bool MedHasBeenSet() const { return m_medHasBeenSet; }
  template <typename MedT = Aws::String>
  void SetMed(MedT&& value) {
    m_medHasBeenSet = true;
    m_med = std::forward<MedT>(value);
  }
  template <typename MedT = Aws::String>
  CoreNetworkRoutingInformation& WithMed(MedT&& value) {
    SetMed(std::forward<MedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BGP AS path for the route.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAsPath() const { return m_asPath; }
  inline bool AsPathHasBeenSet() const { return m_asPathHasBeenSet; }
  template <typename AsPathT = Aws::Vector<Aws::String>>
  void SetAsPath(AsPathT&& value) {
    m_asPathHasBeenSet = true;
    m_asPath = std::forward<AsPathT>(value);
  }
  template <typename AsPathT = Aws::Vector<Aws::String>>
  CoreNetworkRoutingInformation& WithAsPath(AsPathT&& value) {
    SetAsPath(std::forward<AsPathT>(value));
    return *this;
  }
  template <typename AsPathT = Aws::String>
  CoreNetworkRoutingInformation& AddAsPath(AsPathT&& value) {
    m_asPathHasBeenSet = true;
    m_asPath.emplace_back(std::forward<AsPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The BGP community values for the route.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommunities() const { return m_communities; }
  inline bool CommunitiesHasBeenSet() const { return m_communitiesHasBeenSet; }
  template <typename CommunitiesT = Aws::Vector<Aws::String>>
  void SetCommunities(CommunitiesT&& value) {
    m_communitiesHasBeenSet = true;
    m_communities = std::forward<CommunitiesT>(value);
  }
  template <typename CommunitiesT = Aws::Vector<Aws::String>>
  CoreNetworkRoutingInformation& WithCommunities(CommunitiesT&& value) {
    SetCommunities(std::forward<CommunitiesT>(value));
    return *this;
  }
  template <typename CommunitiesT = Aws::String>
  CoreNetworkRoutingInformation& AddCommunities(CommunitiesT&& value) {
    m_communitiesHasBeenSet = true;
    m_communities.emplace_back(std::forward<CommunitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_prefix;
  bool m_prefixHasBeenSet = false;

  RoutingInformationNextHop m_nextHop;
  bool m_nextHopHasBeenSet = false;

  Aws::String m_localPreference;
  bool m_localPreferenceHasBeenSet = false;

  Aws::String m_med;
  bool m_medHasBeenSet = false;

  Aws::Vector<Aws::String> m_asPath;
  bool m_asPathHasBeenSet = false;

  Aws::Vector<Aws::String> m_communities;
  bool m_communitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
