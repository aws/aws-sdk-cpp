/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/neptune-graph/NeptuneGraphRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/QueryStateInput.h>
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
  class ListQueriesRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API ListQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueries"; }

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
    inline const Aws::String& GetGraphIdentifier() const{ return m_graphIdentifier; }
    inline bool GraphIdentifierHasBeenSet() const { return m_graphIdentifierHasBeenSet; }
    inline void SetGraphIdentifier(const Aws::String& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = value; }
    inline void SetGraphIdentifier(Aws::String&& value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier = std::move(value); }
    inline void SetGraphIdentifier(const char* value) { m_graphIdentifierHasBeenSet = true; m_graphIdentifier.assign(value); }
    inline ListQueriesRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}
    inline ListQueriesRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}
    inline ListQueriesRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be fetched by the API.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filtered list of queries based on state.</p>
     */
    inline const QueryStateInput& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const QueryStateInput& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(QueryStateInput&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ListQueriesRequest& WithState(const QueryStateInput& value) { SetState(value); return *this;}
    inline ListQueriesRequest& WithState(QueryStateInput&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    QueryStateInput m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
