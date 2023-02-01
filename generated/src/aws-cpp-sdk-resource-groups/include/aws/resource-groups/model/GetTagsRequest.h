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
  class GetTagsRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API GetTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTags"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline GetTagsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline GetTagsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource group whose tags you want to retrieve.</p>
     */
    inline GetTagsRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
