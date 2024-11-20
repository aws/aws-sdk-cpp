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
    AWS_RECYCLEBIN_API ListRulesRequest();

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
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type retained by the retention rule. Only retention rules that
     * retain the specified resource type are listed. Currently, only Amazon EBS
     * snapshots and EBS-backed AMIs are supported. To list retention rules that retain
     * snapshots, specify <code>EBS_SNAPSHOT</code>. To list retention rules that
     * retain EBS-backed AMIs, specify <code>EC2_IMAGE</code>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ListRulesRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ListRulesRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Tag-level retention rules only] Information about the resource tags used to
     * identify resources that are retained by the retention rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline ListRulesRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}
    inline ListRulesRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline ListRulesRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline ListRulesRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The lock state of the retention rules to list. Only retention rules with the
     * specified lock state are returned.</p>
     */
    inline const LockState& GetLockState() const{ return m_lockState; }
    inline bool LockStateHasBeenSet() const { return m_lockStateHasBeenSet; }
    inline void SetLockState(const LockState& value) { m_lockStateHasBeenSet = true; m_lockState = value; }
    inline void SetLockState(LockState&& value) { m_lockStateHasBeenSet = true; m_lockState = std::move(value); }
    inline ListRulesRequest& WithLockState(const LockState& value) { SetLockState(value); return *this;}
    inline ListRulesRequest& WithLockState(LockState&& value) { SetLockState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Region-level retention rules only] Information about the exclusion tags used
     * to identify resources that are to be excluded, or ignored, by the retention
     * rule.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetExcludeResourceTags() const{ return m_excludeResourceTags; }
    inline bool ExcludeResourceTagsHasBeenSet() const { return m_excludeResourceTagsHasBeenSet; }
    inline void SetExcludeResourceTags(const Aws::Vector<ResourceTag>& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = value; }
    inline void SetExcludeResourceTags(Aws::Vector<ResourceTag>&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags = std::move(value); }
    inline ListRulesRequest& WithExcludeResourceTags(const Aws::Vector<ResourceTag>& value) { SetExcludeResourceTags(value); return *this;}
    inline ListRulesRequest& WithExcludeResourceTags(Aws::Vector<ResourceTag>&& value) { SetExcludeResourceTags(std::move(value)); return *this;}
    inline ListRulesRequest& AddExcludeResourceTags(const ResourceTag& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.push_back(value); return *this; }
    inline ListRulesRequest& AddExcludeResourceTags(ResourceTag&& value) { m_excludeResourceTagsHasBeenSet = true; m_excludeResourceTags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    LockState m_lockState;
    bool m_lockStateHasBeenSet = false;

    Aws::Vector<ResourceTag> m_excludeResourceTags;
    bool m_excludeResourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
