/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class ListAttachedLinksRequest : public OAMRequest
  {
  public:
    AWS_OAM_API ListAttachedLinksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttachedLinks"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Limits the number of returned links to the specified number.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAttachedLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. You received this token from a
     * previous call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAttachedLinksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink that you want to retrieve links for.</p>
     */
    inline const Aws::String& GetSinkIdentifier() const { return m_sinkIdentifier; }
    inline bool SinkIdentifierHasBeenSet() const { return m_sinkIdentifierHasBeenSet; }
    template<typename SinkIdentifierT = Aws::String>
    void SetSinkIdentifier(SinkIdentifierT&& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = std::forward<SinkIdentifierT>(value); }
    template<typename SinkIdentifierT = Aws::String>
    ListAttachedLinksRequest& WithSinkIdentifier(SinkIdentifierT&& value) { SetSinkIdentifier(std::forward<SinkIdentifierT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sinkIdentifier;
    bool m_sinkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
