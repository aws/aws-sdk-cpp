/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class DeleteGraphRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API DeleteGraphRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGraph"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEGRAPH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline DeleteGraphRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline DeleteGraphRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline DeleteGraphRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}


    /**
     * <p>Determines whether a final graph snapshot is created before the graph is
     * deleted. If <code>true</code> is specified, no graph snapshot is created. If
     * <code>false</code> is specified, a graph snapshot is created before the graph is
     * deleted.</p>
     */
    inline bool GetSkipSnapshot() const{ return m_skipSnapshot; }

    /**
     * <p>Determines whether a final graph snapshot is created before the graph is
     * deleted. If <code>true</code> is specified, no graph snapshot is created. If
     * <code>false</code> is specified, a graph snapshot is created before the graph is
     * deleted.</p>
     */
    inline bool SkipSnapshotHasBeenSet() const { return m_skipSnapshotHasBeenSet; }

    /**
     * <p>Determines whether a final graph snapshot is created before the graph is
     * deleted. If <code>true</code> is specified, no graph snapshot is created. If
     * <code>false</code> is specified, a graph snapshot is created before the graph is
     * deleted.</p>
     */
    inline void SetSkipSnapshot(bool value) { m_skipSnapshotHasBeenSet = true; m_skipSnapshot = value; }

    /**
     * <p>Determines whether a final graph snapshot is created before the graph is
     * deleted. If <code>true</code> is specified, no graph snapshot is created. If
     * <code>false</code> is specified, a graph snapshot is created before the graph is
     * deleted.</p>
     */
    inline DeleteGraphRequest& WithSkipSnapshot(bool value) { SetSkipSnapshot(value); return *this;}

  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    bool m_skipSnapshot;
    bool m_skipSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
