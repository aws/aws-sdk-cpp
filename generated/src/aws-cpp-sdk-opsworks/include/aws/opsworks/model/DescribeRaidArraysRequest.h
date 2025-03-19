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
    AWS_OPSWORKS_API DescribeRaidArraysRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    DescribeRaidArraysRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeRaidArraysRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRaidArrayIds() const { return m_raidArrayIds; }
    inline bool RaidArrayIdsHasBeenSet() const { return m_raidArrayIdsHasBeenSet; }
    template<typename RaidArrayIdsT = Aws::Vector<Aws::String>>
    void SetRaidArrayIds(RaidArrayIdsT&& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds = std::forward<RaidArrayIdsT>(value); }
    template<typename RaidArrayIdsT = Aws::Vector<Aws::String>>
    DescribeRaidArraysRequest& WithRaidArrayIds(RaidArrayIdsT&& value) { SetRaidArrayIds(std::forward<RaidArrayIdsT>(value)); return *this;}
    template<typename RaidArrayIdsT = Aws::String>
    DescribeRaidArraysRequest& AddRaidArrayIds(RaidArrayIdsT&& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.emplace_back(std::forward<RaidArrayIdsT>(value)); return *this; }
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
