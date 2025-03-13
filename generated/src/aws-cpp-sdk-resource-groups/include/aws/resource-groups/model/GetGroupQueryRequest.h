/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class GetGroupQueryRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API GetGroupQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGroupQuery"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or the Amazon resource name (ARN) of the resource group to
     * query.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    GetGroupQueryRequest& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
