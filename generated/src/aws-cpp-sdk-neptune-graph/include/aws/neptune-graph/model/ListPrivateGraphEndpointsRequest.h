﻿/**
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
  class ListPrivateGraphEndpointsRequest : public NeptuneGraphRequest
  {
  public:
    AWS_NEPTUNEGRAPH_API ListPrivateGraphEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrivateGraphEndpoints"; }

    AWS_NEPTUNEGRAPH_API Aws::String SerializePayload() const override;

    AWS_NEPTUNEGRAPH_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
    inline ListPrivateGraphEndpointsRequest& WithGraphIdentifier(const Aws::String& value) { SetGraphIdentifier(value); return *this;}
    inline ListPrivateGraphEndpointsRequest& WithGraphIdentifier(Aws::String&& value) { SetGraphIdentifier(std::move(value)); return *this;}
    inline ListPrivateGraphEndpointsRequest& WithGraphIdentifier(const char* value) { SetGraphIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPrivateGraphEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPrivateGraphEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPrivateGraphEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of records to return in the command's output.</p> <p>If the
     * total number of records available is more than the value specified,
     * <code>nextToken</code> is provided in the command's output. To resume
     * pagination, provide the <code>nextToken</code> output value in the
     * <code>nextToken</code> argument of a subsequent command. Do not use the
     * <code>nextToken</code> response element directly outside of the Amazon CLI.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPrivateGraphEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_graphIdentifier;
    bool m_graphIdentifierHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
