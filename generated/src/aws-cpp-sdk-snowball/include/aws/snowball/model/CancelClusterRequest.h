/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CancelClusterRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CancelClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelCluster"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CancelClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CancelClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CancelClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
