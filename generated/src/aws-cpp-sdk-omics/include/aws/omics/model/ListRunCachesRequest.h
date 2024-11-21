/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListRunCachesRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListRunCachesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRunCaches"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRunCachesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional pagination token returned from a prior call to the
     * <code>ListRunCaches</code> API operation.</p>
     */
    inline const Aws::String& GetStartingToken() const{ return m_startingToken; }
    inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
    inline void SetStartingToken(const Aws::String& value) { m_startingTokenHasBeenSet = true; m_startingToken = value; }
    inline void SetStartingToken(Aws::String&& value) { m_startingTokenHasBeenSet = true; m_startingToken = std::move(value); }
    inline void SetStartingToken(const char* value) { m_startingTokenHasBeenSet = true; m_startingToken.assign(value); }
    inline ListRunCachesRequest& WithStartingToken(const Aws::String& value) { SetStartingToken(value); return *this;}
    inline ListRunCachesRequest& WithStartingToken(Aws::String&& value) { SetStartingToken(std::move(value)); return *this;}
    inline ListRunCachesRequest& WithStartingToken(const char* value) { SetStartingToken(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_startingToken;
    bool m_startingTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
