﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class CreateGraphSnapshotRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API CreateGraphSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGraphSnapshot"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }
    inline CreateGraphSnapshotRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}
    inline CreateGraphSnapshotRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}
    inline CreateGraphSnapshotRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }
    inline CreateGraphSnapshotRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}
    inline CreateGraphSnapshotRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}
    inline CreateGraphSnapshotRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Adds metadata tags to the new graph. These tags can also be used with cost
     * allocation reporting, or used in a Condition statement in an IAM policy.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateGraphSnapshotRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateGraphSnapshotRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateGraphSnapshotRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateGraphSnapshotRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGraphSnapshotRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGraphSnapshotRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateGraphSnapshotRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateGraphSnapshotRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateGraphSnapshotRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
