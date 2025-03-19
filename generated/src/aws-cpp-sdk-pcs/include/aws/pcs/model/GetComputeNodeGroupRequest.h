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
  class GetComputeNodeGroupRequest : public PCSRequest
  {
  public:
    AWS_PCS_API GetComputeNodeGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComputeNodeGroup"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    GetComputeNodeGroupRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the compute node group.</p>
     */
    inline const Aws::String& GetComputeNodeGroupIdentifier() const { return m_computeNodeGroupIdentifier; }
    inline bool ComputeNodeGroupIdentifierHasBeenSet() const { return m_computeNodeGroupIdentifierHasBeenSet; }
    template<typename ComputeNodeGroupIdentifierT = Aws::String>
    void SetComputeNodeGroupIdentifier(ComputeNodeGroupIdentifierT&& value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier = std::forward<ComputeNodeGroupIdentifierT>(value); }
    template<typename ComputeNodeGroupIdentifierT = Aws::String>
    GetComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(ComputeNodeGroupIdentifierT&& value) { SetComputeNodeGroupIdentifier(std::forward<ComputeNodeGroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_computeNodeGroupIdentifier;
    bool m_computeNodeGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
