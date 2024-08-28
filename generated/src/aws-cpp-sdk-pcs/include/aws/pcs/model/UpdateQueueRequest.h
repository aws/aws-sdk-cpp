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
    AWS_PCS_API UpdateQueueRequest();

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
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline UpdateQueueRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline UpdateQueueRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline UpdateQueueRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the queue.</p>
     */
    inline const Aws::String& GetQueueIdentifier() const{ return m_queueIdentifier; }
    inline bool QueueIdentifierHasBeenSet() const { return m_queueIdentifierHasBeenSet; }
    inline void SetQueueIdentifier(const Aws::String& value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier = value; }
    inline void SetQueueIdentifier(Aws::String&& value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier = std::move(value); }
    inline void SetQueueIdentifier(const char* value) { m_queueIdentifierHasBeenSet = true; m_queueIdentifier.assign(value); }
    inline UpdateQueueRequest& WithQueueIdentifier(const Aws::String& value) { SetQueueIdentifier(value); return *this;}
    inline UpdateQueueRequest& WithQueueIdentifier(Aws::String&& value) { SetQueueIdentifier(std::move(value)); return *this;}
    inline UpdateQueueRequest& WithQueueIdentifier(const char* value) { SetQueueIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of compute node group configurations to associate with the queue.
     * Queues assign jobs to associated compute node groups.</p>
     */
    inline const Aws::Vector<ComputeNodeGroupConfiguration>& GetComputeNodeGroupConfigurations() const{ return m_computeNodeGroupConfigurations; }
    inline bool ComputeNodeGroupConfigurationsHasBeenSet() const { return m_computeNodeGroupConfigurationsHasBeenSet; }
    inline void SetComputeNodeGroupConfigurations(const Aws::Vector<ComputeNodeGroupConfiguration>& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations = value; }
    inline void SetComputeNodeGroupConfigurations(Aws::Vector<ComputeNodeGroupConfiguration>&& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations = std::move(value); }
    inline UpdateQueueRequest& WithComputeNodeGroupConfigurations(const Aws::Vector<ComputeNodeGroupConfiguration>& value) { SetComputeNodeGroupConfigurations(value); return *this;}
    inline UpdateQueueRequest& WithComputeNodeGroupConfigurations(Aws::Vector<ComputeNodeGroupConfiguration>&& value) { SetComputeNodeGroupConfigurations(std::move(value)); return *this;}
    inline UpdateQueueRequest& AddComputeNodeGroupConfigurations(const ComputeNodeGroupConfiguration& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations.push_back(value); return *this; }
    inline UpdateQueueRequest& AddComputeNodeGroupConfigurations(ComputeNodeGroupConfiguration&& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateQueueRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateQueueRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateQueueRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_queueIdentifier;
    bool m_queueIdentifierHasBeenSet = false;

    Aws::Vector<ComputeNodeGroupConfiguration> m_computeNodeGroupConfigurations;
    bool m_computeNodeGroupConfigurationsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
