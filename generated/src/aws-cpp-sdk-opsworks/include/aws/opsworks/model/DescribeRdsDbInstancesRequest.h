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
  class DescribeRdsDbInstancesRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeRdsDbInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRdsDbInstances"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the stack with which the instances are registered. The operation
     * returns descriptions of all registered Amazon RDS instances.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeRdsDbInstancesRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the ARNs of the instances to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRdsDbInstanceArns() const { return m_rdsDbInstanceArns; }
    inline bool RdsDbInstanceArnsHasBeenSet() const { return m_rdsDbInstanceArnsHasBeenSet; }
    template<typename RdsDbInstanceArnsT = Aws::Vector<Aws::String>>
    void SetRdsDbInstanceArns(RdsDbInstanceArnsT&& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns = std::forward<RdsDbInstanceArnsT>(value); }
    template<typename RdsDbInstanceArnsT = Aws::Vector<Aws::String>>
    DescribeRdsDbInstancesRequest& WithRdsDbInstanceArns(RdsDbInstanceArnsT&& value) { SetRdsDbInstanceArns(std::forward<RdsDbInstanceArnsT>(value)); return *this;}
    template<typename RdsDbInstanceArnsT = Aws::String>
    DescribeRdsDbInstancesRequest& AddRdsDbInstanceArns(RdsDbInstanceArnsT&& value) { m_rdsDbInstanceArnsHasBeenSet = true; m_rdsDbInstanceArns.emplace_back(std::forward<RdsDbInstanceArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_rdsDbInstanceArns;
    bool m_rdsDbInstanceArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
