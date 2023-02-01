/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class TerminateTargetInstancesRequest : public MgnRequest
  {
  public:
    AWS_MGN_API TerminateTargetInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateTargetInstances"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const{ return m_sourceServerIDs; }

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline void SetSourceServerIDs(const Aws::Vector<Aws::String>& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = value; }

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline void SetSourceServerIDs(Aws::Vector<Aws::String>&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::move(value); }

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline TerminateTargetInstancesRequest& WithSourceServerIDs(const Aws::Vector<Aws::String>& value) { SetSourceServerIDs(value); return *this;}

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline TerminateTargetInstancesRequest& WithSourceServerIDs(Aws::Vector<Aws::String>&& value) { SetSourceServerIDs(std::move(value)); return *this;}

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline TerminateTargetInstancesRequest& AddSourceServerIDs(const Aws::String& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline TerminateTargetInstancesRequest& AddSourceServerIDs(Aws::String&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Terminate Target instance by Source Server IDs.</p>
     */
    inline TerminateTargetInstancesRequest& AddSourceServerIDs(const char* value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.push_back(value); return *this; }


    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Terminate Target instance by Tags.</p>
     */
    inline TerminateTargetInstancesRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
