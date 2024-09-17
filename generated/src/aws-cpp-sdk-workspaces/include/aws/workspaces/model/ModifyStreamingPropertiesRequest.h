/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/StreamingProperties.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class ModifyStreamingPropertiesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API ModifyStreamingPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyStreamingProperties"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline ModifyStreamingPropertiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline ModifyStreamingPropertiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline ModifyStreamingPropertiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming properties to configure.</p>
     */
    inline const StreamingProperties& GetStreamingProperties() const{ return m_streamingProperties; }
    inline bool StreamingPropertiesHasBeenSet() const { return m_streamingPropertiesHasBeenSet; }
    inline void SetStreamingProperties(const StreamingProperties& value) { m_streamingPropertiesHasBeenSet = true; m_streamingProperties = value; }
    inline void SetStreamingProperties(StreamingProperties&& value) { m_streamingPropertiesHasBeenSet = true; m_streamingProperties = std::move(value); }
    inline ModifyStreamingPropertiesRequest& WithStreamingProperties(const StreamingProperties& value) { SetStreamingProperties(value); return *this;}
    inline ModifyStreamingPropertiesRequest& WithStreamingProperties(StreamingProperties&& value) { SetStreamingProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    StreamingProperties m_streamingProperties;
    bool m_streamingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
