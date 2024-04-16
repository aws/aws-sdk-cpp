/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_OUTPOSTS_API StartCapacityTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCapacityTask"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline const Aws::String& GetOutpostIdentifier() const{ return m_outpostIdentifier; }

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline void SetOutpostIdentifier(const Aws::String& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = value; }

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline void SetOutpostIdentifier(Aws::String&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::move(value); }

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline void SetOutpostIdentifier(const char* value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier.assign(value); }

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline StartCapacityTaskRequest& WithOutpostIdentifier(const Aws::String& value) { SetOutpostIdentifier(value); return *this;}

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline StartCapacityTaskRequest& WithOutpostIdentifier(Aws::String&& value) { SetOutpostIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or ARN of the Outposts associated with the specified capacity
     * task.</p>
     */
    inline StartCapacityTaskRequest& WithOutpostIdentifier(const char* value) { SetOutpostIdentifier(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline const Aws::String& GetOrderId() const{ return m_orderId; }

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline void SetOrderId(const Aws::String& value) { m_orderIdHasBeenSet = true; m_orderId = value; }

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline void SetOrderId(Aws::String&& value) { m_orderIdHasBeenSet = true; m_orderId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline void SetOrderId(const char* value) { m_orderIdHasBeenSet = true; m_orderId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline StartCapacityTaskRequest& WithOrderId(const Aws::String& value) { SetOrderId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline StartCapacityTaskRequest& WithOrderId(Aws::String&& value) { SetOrderId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Outposts order associated with the
     * specified capacity task.</p>
     */
    inline StartCapacityTaskRequest& WithOrderId(const char* value) { SetOrderId(value); return *this;}


    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline const Aws::Vector<InstanceTypeCapacity>& GetInstancePools() const{ return m_instancePools; }

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline bool InstancePoolsHasBeenSet() const { return m_instancePoolsHasBeenSet; }

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline void SetInstancePools(const Aws::Vector<InstanceTypeCapacity>& value) { m_instancePoolsHasBeenSet = true; m_instancePools = value; }

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline void SetInstancePools(Aws::Vector<InstanceTypeCapacity>&& value) { m_instancePoolsHasBeenSet = true; m_instancePools = std::move(value); }

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline StartCapacityTaskRequest& WithInstancePools(const Aws::Vector<InstanceTypeCapacity>& value) { SetInstancePools(value); return *this;}

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline StartCapacityTaskRequest& WithInstancePools(Aws::Vector<InstanceTypeCapacity>&& value) { SetInstancePools(std::move(value)); return *this;}

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline StartCapacityTaskRequest& AddInstancePools(const InstanceTypeCapacity& value) { m_instancePoolsHasBeenSet = true; m_instancePools.push_back(value); return *this; }

    /**
     * <p>The instance pools specified in the capacity task.</p>
     */
    inline StartCapacityTaskRequest& AddInstancePools(InstanceTypeCapacity&& value) { m_instancePoolsHasBeenSet = true; m_instancePools.push_back(std::move(value)); return *this; }


    /**
     * <p>You can request a dry run to determine if the instance type and instance size
     * changes is above or below available instance capacity. Requesting a dry run does
     * not make any changes to your plan.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>You can request a dry run to determine if the instance type and instance size
     * changes is above or below available instance capacity. Requesting a dry run does
     * not make any changes to your plan.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>You can request a dry run to determine if the instance type and instance size
     * changes is above or below available instance capacity. Requesting a dry run does
     * not make any changes to your plan.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>You can request a dry run to determine if the instance type and instance size
     * changes is above or below available instance capacity. Requesting a dry run does
     * not make any changes to your plan.</p>
     */
    inline StartCapacityTaskRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::String m_orderId;
    bool m_orderIdHasBeenSet = false;

    Aws::Vector<InstanceTypeCapacity> m_instancePools;
    bool m_instancePoolsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
