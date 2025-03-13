/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/NetworkFunctionGroup.h>
#include <aws/networkmanager/model/EdgeOverride.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>The list of network function groups and edge overrides for the service
   * insertion action. Used for both the <code>send-to</code> and
   * <code>send-via</code> actions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Via">AWS
   * API Reference</a></p>
   */
  class Via
  {
  public:
    AWS_NETWORKMANAGER_API Via() = default;
    AWS_NETWORKMANAGER_API Via(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Via& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of network function groups associated with the service insertion
     * action.</p>
     */
    inline const Aws::Vector<NetworkFunctionGroup>& GetNetworkFunctionGroups() const { return m_networkFunctionGroups; }
    inline bool NetworkFunctionGroupsHasBeenSet() const { return m_networkFunctionGroupsHasBeenSet; }
    template<typename NetworkFunctionGroupsT = Aws::Vector<NetworkFunctionGroup>>
    void SetNetworkFunctionGroups(NetworkFunctionGroupsT&& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups = std::forward<NetworkFunctionGroupsT>(value); }
    template<typename NetworkFunctionGroupsT = Aws::Vector<NetworkFunctionGroup>>
    Via& WithNetworkFunctionGroups(NetworkFunctionGroupsT&& value) { SetNetworkFunctionGroups(std::forward<NetworkFunctionGroupsT>(value)); return *this;}
    template<typename NetworkFunctionGroupsT = NetworkFunctionGroup>
    Via& AddNetworkFunctionGroups(NetworkFunctionGroupsT&& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups.emplace_back(std::forward<NetworkFunctionGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes any edge overrides. An edge override is a specific edge to be used
     * for traffic.</p>
     */
    inline const Aws::Vector<EdgeOverride>& GetWithEdgeOverrides() const { return m_withEdgeOverrides; }
    inline bool WithEdgeOverridesHasBeenSet() const { return m_withEdgeOverridesHasBeenSet; }
    template<typename WithEdgeOverridesT = Aws::Vector<EdgeOverride>>
    void SetWithEdgeOverrides(WithEdgeOverridesT&& value) { m_withEdgeOverridesHasBeenSet = true; m_withEdgeOverrides = std::forward<WithEdgeOverridesT>(value); }
    template<typename WithEdgeOverridesT = Aws::Vector<EdgeOverride>>
    Via& WithWithEdgeOverrides(WithEdgeOverridesT&& value) { SetWithEdgeOverrides(std::forward<WithEdgeOverridesT>(value)); return *this;}
    template<typename WithEdgeOverridesT = EdgeOverride>
    Via& AddWithEdgeOverrides(WithEdgeOverridesT&& value) { m_withEdgeOverridesHasBeenSet = true; m_withEdgeOverrides.emplace_back(std::forward<WithEdgeOverridesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<NetworkFunctionGroup> m_networkFunctionGroups;
    bool m_networkFunctionGroupsHasBeenSet = false;

    Aws::Vector<EdgeOverride> m_withEdgeOverrides;
    bool m_withEdgeOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
