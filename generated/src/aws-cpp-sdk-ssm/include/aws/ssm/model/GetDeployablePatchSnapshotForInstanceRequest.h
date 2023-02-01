/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/BaselineOverride.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetDeployablePatchSnapshotForInstanceRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployablePatchSnapshotForInstance"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline const BaselineOverride& GetBaselineOverride() const{ return m_baselineOverride; }

    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline bool BaselineOverrideHasBeenSet() const { return m_baselineOverrideHasBeenSet; }

    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline void SetBaselineOverride(const BaselineOverride& value) { m_baselineOverrideHasBeenSet = true; m_baselineOverride = value; }

    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline void SetBaselineOverride(BaselineOverride&& value) { m_baselineOverrideHasBeenSet = true; m_baselineOverride = std::move(value); }

    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithBaselineOverride(const BaselineOverride& value) { SetBaselineOverride(value); return *this;}

    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline GetDeployablePatchSnapshotForInstanceRequest& WithBaselineOverride(BaselineOverride&& value) { SetBaselineOverride(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    BaselineOverride m_baselineOverride;
    bool m_baselineOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
