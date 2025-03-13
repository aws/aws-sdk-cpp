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
    AWS_WORKSPACES_API ModifyStreamingPropertiesRequest() = default;

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
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ModifyStreamingPropertiesRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming properties to configure.</p>
     */
    inline const StreamingProperties& GetStreamingProperties() const { return m_streamingProperties; }
    inline bool StreamingPropertiesHasBeenSet() const { return m_streamingPropertiesHasBeenSet; }
    template<typename StreamingPropertiesT = StreamingProperties>
    void SetStreamingProperties(StreamingPropertiesT&& value) { m_streamingPropertiesHasBeenSet = true; m_streamingProperties = std::forward<StreamingPropertiesT>(value); }
    template<typename StreamingPropertiesT = StreamingProperties>
    ModifyStreamingPropertiesRequest& WithStreamingProperties(StreamingPropertiesT&& value) { SetStreamingProperties(std::forward<StreamingPropertiesT>(value)); return *this;}
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
