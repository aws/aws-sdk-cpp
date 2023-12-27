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
namespace NeptuneGraph
{
namespace Model
{

  /**
   */
  class ResetGraphRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API ResetGraphRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetGraph"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline ResetGraphRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline ResetGraphRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}

    /**
     * <p>ID of the graph to reset.</p>
     */
    inline ResetGraphRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}


    /**
     * <p>Determines whether a final graph snapshot is created before the graph data is
     * deleted. If set to <code>true</code>, no graph snapshot is created. If set to
     * <code>false</code>, a graph snapshot is created before the data is deleted.</p>
     */
    inline bool GetSkipSnapshot() const{ return m_skipSnapshot; }

    /**
     * <p>Determines whether a final graph snapshot is created before the graph data is
     * deleted. If set to <code>true</code>, no graph snapshot is created. If set to
     * <code>false</code>, a graph snapshot is created before the data is deleted.</p>
     */
    inline bool SkipSnapshotHasBeenSet() const { return m_skipSnapshotHasBeenSet; }

    /**
     * <p>Determines whether a final graph snapshot is created before the graph data is
     * deleted. If set to <code>true</code>, no graph snapshot is created. If set to
     * <code>false</code>, a graph snapshot is created before the data is deleted.</p>
     */
    inline void SetSkipSnapshot(bool value) { m_skipSnapshotHasBeenSet = true; m_skipSnapshot = value; }

    /**
     * <p>Determines whether a final graph snapshot is created before the graph data is
     * deleted. If set to <code>true</code>, no graph snapshot is created. If set to
     * <code>false</code>, a graph snapshot is created before the data is deleted.</p>
     */
    inline ResetGraphRequest& WithSkipSnapshot(bool value) { SetSkipSnapshot(value); return *this;}

  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    bool m_skipSnapshot;
    bool m_skipSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
