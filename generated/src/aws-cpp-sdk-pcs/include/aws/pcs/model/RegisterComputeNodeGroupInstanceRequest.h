/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PCS
{
namespace Model
{

  /**
   */
  class RegisterComputeNodeGroupInstanceRequest : public PCSRequest
  {
  public:
    AWS_PCS_API RegisterComputeNodeGroupInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterComputeNodeGroupInstance"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster to register the compute node group instance
     * in.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    RegisterComputeNodeGroupInstanceRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-generated token to allow for retries.</p>
     */
    inline const Aws::String& GetBootstrapId() const { return m_bootstrapId; }
    inline bool BootstrapIdHasBeenSet() const { return m_bootstrapIdHasBeenSet; }
    template<typename BootstrapIdT = Aws::String>
    void SetBootstrapId(BootstrapIdT&& value) { m_bootstrapIdHasBeenSet = true; m_bootstrapId = std::forward<BootstrapIdT>(value); }
    template<typename BootstrapIdT = Aws::String>
    RegisterComputeNodeGroupInstanceRequest& WithBootstrapId(BootstrapIdT&& value) { SetBootstrapId(std::forward<BootstrapIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_bootstrapId;
    bool m_bootstrapIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
