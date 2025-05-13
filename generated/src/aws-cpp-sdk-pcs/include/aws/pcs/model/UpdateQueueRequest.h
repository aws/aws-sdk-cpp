/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/ComputeNodeGroupConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PCS
{
namespace Model
{

  /**
   */
  class UpdateQueueRequest : public PCSRequest
  {
  public:
    AWS_PCS_API UpdateQueueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueue"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster of the queue.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    UpdateQueueRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the queue.</p>
     */
    inline const Aws::String& GetQueueIdentifier() const { return m_queueIdentifier; }
    inline bool QueueIdentifierHasBeenSet() const { return m_queueIdentifierHasBeenSet; }
    template<typename QueueIdentifierT = Aws::String>
    void SetQueueIdentifier(QueueIdentifierT&& value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier = std::forward<QueueIdentifierT>(value); }
    template<typename QueueIdentifierT = Aws::String>
    UpdateQueueRequest& WithQueueIdentifier(QueueIdentifierT&& value) { SetQueueIdentifier(std::forward<QueueIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of compute node group configurations to associate with the queue.
     * Queues assign jobs to associated compute node groups.</p>
     */
    inline const Aws::Vector<ComputeNodeGroupConfiguration>& GetComputeNodeGroupConfigurations() const { return m_computeNodeGroupConfigurations; }
    inline bool ComputeNodeGroupConfigurationsHasBeenSet() const { return m_computeNodeGroupConfigurationsHasBeenSet; }
    template<typename ComputeNodeGroupConfigurationsT = Aws::Vector<ComputeNodeGroupConfiguration>>
    void SetComputeNodeGroupConfigurations(ComputeNodeGroupConfigurationsT&& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations = std::forward<ComputeNodeGroupConfigurationsT>(value); }
    template<typename ComputeNodeGroupConfigurationsT = Aws::Vector<ComputeNodeGroupConfiguration>>
    UpdateQueueRequest& WithComputeNodeGroupConfigurations(ComputeNodeGroupConfigurationsT&& value) { SetComputeNodeGroupConfigurations(std::forward<ComputeNodeGroupConfigurationsT>(value)); return *this;}
    template<typename ComputeNodeGroupConfigurationsT = ComputeNodeGroupConfiguration>
    UpdateQueueRequest& AddComputeNodeGroupConfigurations(ComputeNodeGroupConfigurationsT&& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations.emplace_back(std::forward<ComputeNodeGroupConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional effect.
     * If you don't specify a client token, the CLI and SDK automatically generate 1
     * for you.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateQueueRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_queueIdentifier;
    bool m_queueIdentifierHasBeenSet = false;

    Aws::Vector<ComputeNodeGroupConfiguration> m_computeNodeGroupConfigurations;
    bool m_computeNodeGroupConfigurationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
