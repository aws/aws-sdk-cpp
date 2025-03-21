/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53-recovery-control-config/model/NetworkType.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

  /**
   * <p>The details of the cluster that you're updating.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-control-config-2020-11-02/UpdateClusterRequest">AWS
   * API Reference</a></p>
   */
  class UpdateClusterRequest : public Route53RecoveryControlConfigRequest
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    UpdateClusterRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the cluster. NetworkType can be one of the following:
     * IPV4, DUALSTACK.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline UpdateClusterRequest& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
