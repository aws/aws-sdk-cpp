/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ClusterNetworkSettingsUpdateRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update the cluster.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateClusterRequest">AWS
   * API Reference</a></p>
   */
  class UpdateClusterRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The ID of the cluster
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    UpdateClusterRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the current name of the
     * Cluster. Specify a name that is unique in the AWS account. You can't change the
     * name. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateClusterRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Include this property only if you want to change the current connections between
     * the Nodes in the Cluster and the Networks the Cluster is associated with.
     */
    inline const ClusterNetworkSettingsUpdateRequest& GetNetworkSettings() const { return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    template<typename NetworkSettingsT = ClusterNetworkSettingsUpdateRequest>
    void SetNetworkSettings(NetworkSettingsT&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::forward<NetworkSettingsT>(value); }
    template<typename NetworkSettingsT = ClusterNetworkSettingsUpdateRequest>
    UpdateClusterRequest& WithNetworkSettings(NetworkSettingsT&& value) { SetNetworkSettings(std::forward<NetworkSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterNetworkSettingsUpdateRequest m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
