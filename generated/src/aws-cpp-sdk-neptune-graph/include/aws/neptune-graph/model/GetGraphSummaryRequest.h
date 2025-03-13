/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/GraphSummaryMode.h>
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
  class GetGraphSummaryRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API GetGraphSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGraphSummary"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEGRAPH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_NEPTUNEGRAPH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_NEPTUNEGRAPH_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The unique identifier of the Neptune Analytics graph.</p>
     */
    inline const Aws::String& GetGraphIdentifier() const { return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    template<typename GraphIdentifierT = Aws::String>
    void SetGraphIdentifier(GraphIdentifierT&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::forward<GraphIdentifierT>(value); }
    template<typename GraphIdentifierT = Aws::String>
    GetGraphSummaryRequest& WithGraphIdentifier(GraphIdentifierT&& value) { SetGraphIdentifier(std::forward<GraphIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary mode can take one of two values: <code>basic</code> (the
     * default), and <code>detailed</code>.</p>
     */
    inline GraphSummaryMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(GraphSummaryMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline GetGraphSummaryRequest& WithMode(GraphSummaryMode value) { SetMode(value); return *this;}
    ///@}
  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    GraphSummaryMode m_mode{GraphSummaryMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
