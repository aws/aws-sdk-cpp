/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/model/AssetState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Outposts
{
namespace Model
{

  /**
   */
  class ListAssetsRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListAssetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssets"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The ID or the Amazon Resource Name (ARN) of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
    inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
    template<typename OutpostIdentifierT = Aws::String>
    void SetOutpostIdentifier(OutpostIdentifierT&& value) { m_outpostIdentifierHasBeenSet = true; m_outpostIdentifier = std::forward<OutpostIdentifierT>(value); }
    template<typename OutpostIdentifierT = Aws::String>
    ListAssetsRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) { SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by the host ID of a Dedicated Host.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHostIdFilter() const { return m_hostIdFilter; }
    inline bool HostIdFilterHasBeenSet() const { return m_hostIdFilterHasBeenSet; }
    template<typename HostIdFilterT = Aws::Vector<Aws::String>>
    void SetHostIdFilter(HostIdFilterT&& value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter = std::forward<HostIdFilterT>(value); }
    template<typename HostIdFilterT = Aws::Vector<Aws::String>>
    ListAssetsRequest& WithHostIdFilter(HostIdFilterT&& value) { SetHostIdFilter(std::forward<HostIdFilterT>(value)); return *this;}
    template<typename HostIdFilterT = Aws::String>
    ListAssetsRequest& AddHostIdFilter(HostIdFilterT&& value) { m_hostIdFilterHasBeenSet = true; m_hostIdFilter.emplace_back(std::forward<HostIdFilterT>(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by state.</p>
     */
    inline const Aws::Vector<AssetState>& GetStatusFilter() const { return m_statusFilter; }
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    template<typename StatusFilterT = Aws::Vector<AssetState>>
    void SetStatusFilter(StatusFilterT&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::forward<StatusFilterT>(value); }
    template<typename StatusFilterT = Aws::Vector<AssetState>>
    ListAssetsRequest& WithStatusFilter(StatusFilterT&& value) { SetStatusFilter(std::forward<StatusFilterT>(value)); return *this;}
    inline ListAssetsRequest& AddStatusFilter(AssetState value) { m_statusFilterHasBeenSet = true; m_statusFilter.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_outpostIdentifier;
    bool m_outpostIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_hostIdFilter;
    bool m_hostIdFilterHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AssetState> m_statusFilter;
    bool m_statusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
