/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ClientProperties.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyClientPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyClientPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClientProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline ModifyClientPropertiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline ModifyClientPropertiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource identifiers, in the form of directory IDs.</p>
     */
    inline ModifyClientPropertiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline const ClientProperties& GetClientProperties() const{ return m_clientProperties; }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline bool ClientPropertiesHasBeenSet() const { return m_clientPropertiesHasBeenSet; }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline void SetClientProperties(const ClientProperties& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = value; }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline void SetClientProperties(ClientProperties&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = std::move(value); }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline ModifyClientPropertiesRequest& WithClientProperties(const ClientProperties& value) { SetClientProperties(value); return *this;}

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline ModifyClientPropertiesRequest& WithClientProperties(ClientProperties&& value) { SetClientProperties(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ClientProperties m_clientProperties;
    bool m_clientPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
