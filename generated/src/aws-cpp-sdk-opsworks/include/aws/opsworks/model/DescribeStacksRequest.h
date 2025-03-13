/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeStacksRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeStacksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStacks"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of stack IDs that specify the stacks to be described. If you omit
     * this parameter, and have permissions to get information about all stacks,
     * <code>DescribeStacks</code> returns a description of every stack. If the IAM
     * policy that is attached to an IAM user limits the <code>DescribeStacks</code>
     * action to specific stack ARNs, this parameter is required, and the user must
     * specify a stack ARN that is allowed by the policy. Otherwise,
     * <code>DescribeStacks</code> returns an <code>AccessDenied</code> error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStackIds() const { return m_stackIds; }
    inline bool StackIdsHasBeenSet() const { return m_stackIdsHasBeenSet; }
    template<typename StackIdsT = Aws::Vector<Aws::String>>
    void SetStackIds(StackIdsT&& value) { m_stackIdsHasBeenSet = true; m_stackIds = std::forward<StackIdsT>(value); }
    template<typename StackIdsT = Aws::Vector<Aws::String>>
    DescribeStacksRequest& WithStackIds(StackIdsT&& value) { SetStackIds(std::forward<StackIdsT>(value)); return *this;}
    template<typename StackIdsT = Aws::String>
    DescribeStacksRequest& AddStackIds(StackIdsT&& value) { m_stackIdsHasBeenSet = true; m_stackIds.emplace_back(std::forward<StackIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_stackIds;
    bool m_stackIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
