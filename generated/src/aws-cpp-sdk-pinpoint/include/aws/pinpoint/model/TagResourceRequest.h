/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/TagsModel.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API TagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    TagResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TagsModel& GetTagsModel() const { return m_tagsModel; }
    inline bool TagsModelHasBeenSet() const { return m_tagsModelHasBeenSet; }
    template<typename TagsModelT = TagsModel>
    void SetTagsModel(TagsModelT&& value) { m_tagsModelHasBeenSet = true; m_tagsModel = std::forward<TagsModelT>(value); }
    template<typename TagsModelT = TagsModel>
    TagResourceRequest& WithTagsModel(TagsModelT&& value) { SetTagsModel(std::forward<TagsModelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    TagsModel m_tagsModel;
    bool m_tagsModelHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
