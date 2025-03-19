/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rbin/model/LockState.h>
#include <aws/rbin/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

  /**
   */
  class ListRulesRequest : public RecycleBinRequest
  {
  public:
    AWS_RECYCLEBIN_API ListRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRules"; }

    AWS_RECYCLEBIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRulesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type retained by the retention rule. Only retention rules that
     * retain the specified resource type are listed. Currently, only Amazon EBS
     * snapshots and EBS-backed AMIs are supported. To list retention rules that retain
     * snapshots, specify <code>EBS_SNAPSHOT</code>. To list retention rules that
     * retain EBS-backed AMIs, specify <code>EC2_IMAGE</code>.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ListRulesRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Tag-level retention rules only] Information about the resource tags used to
     * identify resources that are retained by the retention rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    ListRulesRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    ListRulesRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The lock state of the retention rules to list. Only retention rules with the
     * specified lock state are returned.</p>
     */
    inline LockState GetLockState() const { return m_lockState; }
    inline bool LockStateHasBeenSet() const { return m_lockStateHasBeenSet; }
    inline void SetLockState(LockState value) { m_lockStateHasBeenSet = true; m_lockState = value; }
    inline ListRulesRequest& WithLockState(LockState value) { SetLockState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Region-level retention rules only] Information about the exclusion tags used
     * to identify resources that are to be excluded, or ignored, by the retention
     * rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetExcludeResourceTags() const { return m_excludeResourceTags; }
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }
    template<typename ExcludeResourceTagsT = Aws::Vector<ResourceTag>>
    void SetExcludeResourceTags(ExcludeResourceTagsT&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = std::forward<ExcludeResourceTagsT>(value); }
    template<typename ExcludeResourceTagsT = Aws::Vector<ResourceTag>>
    ListRulesRequest& WithExcludeResourceTags(ExcludeResourceTagsT&& value) { SetExcludeResourceTags(std::forward<ExcludeResourceTagsT>(value)); return *this;}
    template<typename ExcludeResourceTagsT = ResourceTag>
    ListRulesRequest& AddExcludeResourceTags(ExcludeResourceTagsT&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.emplace_back(std::forward<ExcludeResourceTagsT>(value)); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    LockState m_lockState{LockState::NOT_SET};
    bool m_lockStateHasBeenSet = false;

    Aws::Vector<ResourceTag> m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
