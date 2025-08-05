/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AddClusterNodeSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class BatchAddClusterNodesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API BatchAddClusterNodesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAddClusterNodes"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the HyperPod cluster to which you want to add nodes.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    BatchAddClusterNodesRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This token is valid for 8 hours. If you retry the
     * request with the same client token within this timeframe and the same
     * parameters, the API returns the same set of <code>NodeLogicalIds</code> with
     * their latest status.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    BatchAddClusterNodesRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of instance groups and the number of nodes to add to each. You can
     * specify up to 5 instance groups in a single request, with a maximum of 50 nodes
     * total across all instance groups.</p>
     */
    inline const Aws::Vector<AddClusterNodeSpecification>& GetNodesToAdd() const { return m_nodesToAdd; }
    inline bool NodesToAddHasBeenSet() const { return m_nodesToAddHasBeenSet; }
    template<typename NodesToAddT = Aws::Vector<AddClusterNodeSpecification>>
    void SetNodesToAdd(NodesToAddT&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd = std::forward<NodesToAddT>(value); }
    template<typename NodesToAddT = Aws::Vector<AddClusterNodeSpecification>>
    BatchAddClusterNodesRequest& WithNodesToAdd(NodesToAddT&& value) { SetNodesToAdd(std::forward<NodesToAddT>(value)); return *this;}
    template<typename NodesToAddT = AddClusterNodeSpecification>
    BatchAddClusterNodesRequest& AddNodesToAdd(NodesToAddT&& value) { m_nodesToAddHasBeenSet = true; m_nodesToAdd.emplace_back(std::forward<NodesToAddT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<AddClusterNodeSpecification> m_nodesToAdd;
    bool m_nodesToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
