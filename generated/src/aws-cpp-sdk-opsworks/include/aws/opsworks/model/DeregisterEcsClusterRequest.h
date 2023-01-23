/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DeregisterEcsClusterRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DeregisterEcsClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterEcsCluster"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetEcsClusterArn() const{ return m_ecsClusterArn; }

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline void SetEcsClusterArn(const Aws::String& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = value; }

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline void SetEcsClusterArn(Aws::String&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::move(value); }

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline void SetEcsClusterArn(const char* value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn.assign(value); }

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline DeregisterEcsClusterRequest& WithEcsClusterArn(const Aws::String& value) { SetEcsClusterArn(value); return *this;}

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline DeregisterEcsClusterRequest& WithEcsClusterArn(Aws::String&& value) { SetEcsClusterArn(std::move(value)); return *this;}

    /**
     * <p>The cluster's Amazon Resource Number (ARN).</p>
     */
    inline DeregisterEcsClusterRequest& WithEcsClusterArn(const char* value) { SetEcsClusterArn(value); return *this;}

  private:

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
