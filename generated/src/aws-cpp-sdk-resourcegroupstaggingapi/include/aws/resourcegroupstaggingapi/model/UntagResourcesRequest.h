/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   */
  class UntagResourcesRequest : public ResourceGroupsTaggingAPIRequest
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API UntagResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResources"; }

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String SerializePayload() const override;

    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies a list of ARNs of the resources that you want to remove tags
     * from.</p> <p>An ARN (Amazon Resource Name) uniquely identifies a resource. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a> in the
     * <i>Amazon Web Services General Reference</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceARNList() const { return m_resourceARNList; }
    inline bool ResourceARNListHasBeenSet() const { return m_resourceARNListHasBeenSet; }
    template<typename ResourceARNListT = Aws::Vector<Aws::String>>
    void SetResourceARNList(ResourceARNListT&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList = std::forward<ResourceARNListT>(value); }
    template<typename ResourceARNListT = Aws::Vector<Aws::String>>
    UntagResourcesRequest& WithResourceARNList(ResourceARNListT&& value) { SetResourceARNList(std::forward<ResourceARNListT>(value)); return *this;}
    template<typename ResourceARNListT = Aws::String>
    UntagResourcesRequest& AddResourceARNList(ResourceARNListT&& value) { m_resourceARNListHasBeenSet = true; m_resourceARNList.emplace_back(std::forward<ResourceARNListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a list of tag keys that you want to remove from the specified
     * resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    void SetTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::forward<TagKeysT>(value); }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    UntagResourcesRequest& WithTagKeys(TagKeysT&& value) { SetTagKeys(std::forward<TagKeysT>(value)); return *this;}
    template<typename TagKeysT = Aws::String>
    UntagResourcesRequest& AddTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.emplace_back(std::forward<TagKeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceARNList;
    bool m_resourceARNListHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
