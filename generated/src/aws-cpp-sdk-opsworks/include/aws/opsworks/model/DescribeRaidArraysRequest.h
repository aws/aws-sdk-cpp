/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeRaidArraysRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeRaidArraysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRaidArrays"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DescribeRaidArraysRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DescribeRaidArraysRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DescribeRaidArraysRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline DescribeRaidArraysRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline DescribeRaidArraysRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline DescribeRaidArraysRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRaidArrayIds() const{ return m_raidArrayIds; }
    inline bool RaidArrayIdsHasBeenSet() const { return m_raidArrayIdsHasBeenSet; }
    inline void SetRaidArrayIds(const Aws::Vector<Aws::String>& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds = value; }
    inline void SetRaidArrayIds(Aws::Vector<Aws::String>&& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds = std::move(value); }
    inline DescribeRaidArraysRequest& WithRaidArrayIds(const Aws::Vector<Aws::String>& value) { SetRaidArrayIds(value); return *this;}
    inline DescribeRaidArraysRequest& WithRaidArrayIds(Aws::Vector<Aws::String>&& value) { SetRaidArrayIds(std::move(value)); return *this;}
    inline DescribeRaidArraysRequest& AddRaidArrayIds(const Aws::String& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.push_back(value); return *this; }
    inline DescribeRaidArraysRequest& AddRaidArrayIds(Aws::String&& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.push_back(std::move(value)); return *this; }
    inline DescribeRaidArraysRequest& AddRaidArrayIds(const char* value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_raidArrayIds;
    bool m_raidArrayIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
