﻿/**
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
    AWS_SSM_API GetDeployablePatchSnapshotForInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployablePatchSnapshotForInstance"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the managed node for which the appropriate patch snapshot should be
     * retrieved.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetDeployablePatchSnapshotForInstanceRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot ID provided by the user when running
     * <code>AWS-RunPatchBaseline</code>.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    GetDeployablePatchSnapshotForInstanceRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the basic information about a patch baseline override.</p>
     */
    inline const BaselineOverride& GetBaselineOverride() const { return m_baselineOverride; }
    inline bool BaselineOverrideHasBeenSet() const { return m_baselineOverrideHasBeenSet; }
    template<typename BaselineOverrideT = BaselineOverride>
    void SetBaselineOverride(BaselineOverrideT&& value) { m_baselineOverrideHasBeenSet = true; m_baselineOverride = std::forward<BaselineOverrideT>(value); }
    template<typename BaselineOverrideT = BaselineOverride>
    GetDeployablePatchSnapshotForInstanceRequest& WithBaselineOverride(BaselineOverrideT&& value) { SetBaselineOverride(std::forward<BaselineOverrideT>(value)); return *this;}
    ///@}
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
