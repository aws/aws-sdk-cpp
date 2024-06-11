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
    AWS_NETWORKMANAGER_API Via();
    AWS_NETWORKMANAGER_API Via(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Via& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of network function groups associated with the service insertion
     * action.</p>
     */
    inline const Aws::Vector<NetworkFunctionGroup>& GetNetworkFunctionGroups() const{ return m_networkFunctionGroups; }
    inline bool NetworkFunctionGroupsHasBeenSet() const { return m_networkFunctionGroupsHasBeenSet; }
    inline void SetNetworkFunctionGroups(const Aws::Vector<NetworkFunctionGroup>& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups = value; }
    inline void SetNetworkFunctionGroups(Aws::Vector<NetworkFunctionGroup>&& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups = std::move(value); }
    inline Via& WithNetworkFunctionGroups(const Aws::Vector<NetworkFunctionGroup>& value) { SetNetworkFunctionGroups(value); return *this;}
    inline Via& WithNetworkFunctionGroups(Aws::Vector<NetworkFunctionGroup>&& value) { SetNetworkFunctionGroups(std::move(value)); return *this;}
    inline Via& AddNetworkFunctionGroups(const NetworkFunctionGroup& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups.push_back(value); return *this; }
    inline Via& AddNetworkFunctionGroups(NetworkFunctionGroup&& value) { m_networkFunctionGroupsHasBeenSet = true; m_networkFunctionGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes any edge overrides. An edge override is a specific edge to be used
     * for traffic.</p>
     */
    inline const Aws::Vector<EdgeOverride>& GetWithEdgeOverrides() const{ return m_withEdgeOverrides; }
    inline bool WithEdgeOverridesHasBeenSet() const { return m_withEdgeOverridesHasBeenSet; }
    inline void SetWithEdgeOverrides(const Aws::Vector<EdgeOverride>& value) { m_withEdgeOverridesHasBeenSet = true; m_withEdgeOverrides = value; }
    inline void SetWithEdgeOverrides(Aws::Vector<EdgeOverride>&& value) { m_withEdgeOverridesHasBeenSet = true; m_withEdgeOverrides = std::move(value); }
    inline Via& WithWithEdgeOverrides(const Aws::Vector<EdgeOverride>& value) { SetWithEdgeOverrides(value); return *this;}
    inline Via& WithWithEdgeOverrides(Aws::Vector<EdgeOverride>&& value) { SetWithEdgeOverrides(std::move(value)); return *this;}
    inline Via& AddWithEdgeOverrides(const EdgeOverride& value) { m_withEdgeOverridesHasBeenSet = true; m_withEdgeOverrides.push_back(value); return *this; }
    inline Via& AddWithEdgeOverrides(EdgeOverride&& value) { m_withEdgeOverridesHasBeenSet = true; m_withEdgeOverrides.push_back(std::move(value)); return *this; }
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
