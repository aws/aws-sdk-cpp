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
    AWS_MEDIALIVE_API UpdateClusterRequest();

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
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline UpdateClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline UpdateClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this parameter only if you want to change the current name of the
     * Cluster. Specify a name that is unique in the AWS account. You can't change the
     * name. Names are case-sensitive.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * Include this property only if you want to change the current connections between
     * the Nodes in the Cluster and the Networks the Cluster is associated with.
     */
    inline const ClusterNetworkSettingsUpdateRequest& GetNetworkSettings() const{ return m_networkSettings; }
    inline bool NetworkSettingsHasBeenSet() const { return m_networkSettingsHasBeenSet; }
    inline void SetNetworkSettings(const ClusterNetworkSettingsUpdateRequest& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = value; }
    inline void SetNetworkSettings(ClusterNetworkSettingsUpdateRequest&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::move(value); }
    inline UpdateClusterRequest& WithNetworkSettings(const ClusterNetworkSettingsUpdateRequest& value) { SetNetworkSettings(value); return *this;}
    inline UpdateClusterRequest& WithNetworkSettings(ClusterNetworkSettingsUpdateRequest&& value) { SetNetworkSettings(std::move(value)); return *this;}
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
