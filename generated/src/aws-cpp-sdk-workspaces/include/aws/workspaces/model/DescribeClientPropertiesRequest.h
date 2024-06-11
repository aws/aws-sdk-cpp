﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeClientPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeClientPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClientProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The resource identifier, in the form of directory IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }
    inline DescribeClientPropertiesRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}
    inline DescribeClientPropertiesRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}
    inline DescribeClientPropertiesRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    inline DescribeClientPropertiesRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }
    inline DescribeClientPropertiesRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
