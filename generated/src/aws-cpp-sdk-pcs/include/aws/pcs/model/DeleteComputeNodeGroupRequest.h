/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/PCSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteComputeNodeGroupRequest : public PCSRequest
  {
  public:
    AWS_PCS_API DeleteComputeNodeGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteComputeNodeGroup"; }

    AWS_PCS_API Aws::String SerializePayload() const override;

    AWS_PCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or ID of the cluster of the compute node group.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline DeleteComputeNodeGroupRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline DeleteComputeNodeGroupRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline DeleteComputeNodeGroupRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ID of the compute node group to delete.</p>
     */
    inline const Aws::String& GetComputeNodeGroupIdentifier() const{ return m_computeNodeGroupIdentifier; }
    inline bool ComputeNodeGroupIdentifierHasBeenSet() const { return m_computeNodeGroupIdentifierHasBeenSet; }
    inline void SetComputeNodeGroupIdentifier(const Aws::String& value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier = value; }
    inline void SetComputeNodeGroupIdentifier(Aws::String&& value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier = std::move(value); }
    inline void SetComputeNodeGroupIdentifier(const char* value) { m_computeNodeGroupIdentifierHasBeenSet = true; m_computeNodeGroupIdentifier.assign(value); }
    inline DeleteComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(const Aws::String& value) { SetComputeNodeGroupIdentifier(value); return *this;}
    inline DeleteComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(Aws::String&& value) { SetComputeNodeGroupIdentifier(std::move(value)); return *this;}
    inline DeleteComputeNodeGroupRequest& WithComputeNodeGroupIdentifier(const char* value) { SetComputeNodeGroupIdentifier(value); return *this;}
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
    inline DeleteComputeNodeGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DeleteComputeNodeGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DeleteComputeNodeGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_computeNodeGroupIdentifier;
    bool m_computeNodeGroupIdentifierHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
