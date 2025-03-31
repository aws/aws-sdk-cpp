/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/InstancesToExclude.h>
#include <aws/outposts/model/TaskActionOnBlockingInstances.h>
#include <aws/outposts/model/InstanceTypeCapacity.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class StartCapacityTaskRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API StartCapacityTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCapacityTask"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    template<typename OutpostIdentifierT = Aws::String>
    void SetOutpostIdentifier(OutpostIdentifierT&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::forward<OutpostIdentifierT>(value); }
    template<typename OutpostIdentifierT = Aws::String>
    StartCapacityTaskRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) { SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const { return m_orderId; }
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }
    template<typename OrderIdT = Aws::String>
    void SetOrderId(OrderIdT&& value) { m_orderIdHasBeenSet = true; m_orderId = std::forward<OrderIdT>(value); }
    template<typename OrderIdT = Aws::String>
    StartCapacityTaskRequest& WithOrderId(OrderIdT&& value) { SetOrderId(std::forward<OrderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outpost asset. An Outpost asset can be a single server within
     * an Outposts rack or an Outposts server configuration.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    StartCapacityTaskRequest& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline const Aws::Vector<InstanceTypeCapacity>& GetInstancePools() const { return m_instancePools; }
    inline bool InstancePoolsHasBeenSet() const { return m_instancePoolsHasBeenSet; }
    template<typename InstancePoolsT = Aws::Vector<InstanceTypeCapacity>>
    void SetInstancePools(InstancePoolsT&& value) { m_instancePoolsHasBeenSet = true; m_instancePools = std::forward<InstancePoolsT>(value); }
    template<typename InstancePoolsT = Aws::Vector<InstanceTypeCapacity>>
    StartCapacityTaskRequest& WithInstancePools(InstancePoolsT&& value) { SetInstancePools(std::forward<InstancePoolsT>(value)); return *this;}
    template<typename InstancePoolsT = InstanceTypeCapacity>
    StartCapacityTaskRequest& AddInstancePools(InstancePoolsT&& value) { m_instancePoolsHasBeenSet = true; m_instancePools.emplace_back(std::forward<InstancePoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of user-specified running instances that must not be stopped in order to
     * free up the capacity needed to run the capacity task.</p>
     */
    inline const InstancesToExclude& GetInstancesToExclude() const { return m_instancesToExclude; }
    inline bool InstancesToExcludeHasBeenSet() const { return m_instancesToExcludeHasBeenSet; }
    template<typename InstancesToExcludeT = InstancesToExclude>
    void SetInstancesToExclude(InstancesToExcludeT&& value) { m_instancesToExcludeHasBeenSet = true; m_instancesToExclude = std::forward<InstancesToExcludeT>(value); }
    template<typename InstancesToExcludeT = InstancesToExclude>
    StartCapacityTaskRequest& WithInstancesToExclude(InstancesToExcludeT&& value) { SetInstancesToExclude(std::forward<InstancesToExcludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can request a dry run to determine if the instance type and instance size
     * changes is above or below available instance capacity. Requesting a dry run does
     * not make any changes to your plan.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline StartCapacityTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify one of the following options in case an instance is blocking the
     * capacity task from running.</p> <ul> <li> <p> <code>WAIT_FOR_EVACUATION</code> -
     * Checks every 10 minutes over 48 hours to determine if instances have stopped and
     * capacity is available to complete the task.</p> </li> <li> <p>
     * <code>FAIL_TASK</code> - The capacity task fails.</p> </li> </ul>
     */
    inline TaskActionOnBlockingInstances GetTaskActionOnBlockingInstances() const { return m_taskActionOnBlockingInstances; }
    inline bool TaskActionOnBlockingInstancesHasBeenSet() const { return m_taskActionOnBlockingInstancesHasBeenSet; }
    inline void SetTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value) { m_taskActionOnBlockingInstancesHasBeenSet = true; m_taskActionOnBlockingInstances = value; }
    inline StartCapacityTaskRequest& WithTaskActionOnBlockingInstances(TaskActionOnBlockingInstances value) { SetTaskActionOnBlockingInstances(value); return *this;}
    ///@}
  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::Vector<InstanceTypeCapacity> m_instancePools;
    bool m_instancePoolsHasBeenSet = false;

    InstancesToExclude m_instancesToExclude;
    bool m_instancesToExcludeHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    TaskActionOnBlockingInstances m_taskActionOnBlockingInstances{TaskActionOnBlockingInstances::NOT_SET};
    bool m_taskActionOnBlockingInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
