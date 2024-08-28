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
    AWS_PCS_API RegisterComputeNodeGroupInstanceRequest();

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
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline RegisterComputeNodeGroupInstanceRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline RegisterComputeNodeGroupInstanceRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline RegisterComputeNodeGroupInstanceRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-generated token to allow for retries.</p>
     */
    inline const Aws::String& GetBootstrapId() const{ return m_bootstrapId; }
    inline bool BootstrapIdHasBeenSet() const { return m_bootstrapIdHasBeenSet; }
    inline void SetBootstrapId(const Aws::String& value) { m_bootstrapIdHasBeenSet = true; m_bootstrapId = value; }
    inline void SetBootstrapId(Aws::String&& value) { m_bootstrapIdHasBeenSet = true; m_bootstrapId = std::move(value); }
    inline void SetBootstrapId(const char* value) { m_bootstrapIdHasBeenSet = true; m_bootstrapId.assign(value); }
    inline RegisterComputeNodeGroupInstanceRequest& WithBootstrapId(const Aws::String& value) { SetBootstrapId(value); return *this;}
    inline RegisterComputeNodeGroupInstanceRequest& WithBootstrapId(Aws::String&& value) { SetBootstrapId(std::move(value)); return *this;}
    inline RegisterComputeNodeGroupInstanceRequest& WithBootstrapId(const char* value) { SetBootstrapId(value); return *this;}
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
