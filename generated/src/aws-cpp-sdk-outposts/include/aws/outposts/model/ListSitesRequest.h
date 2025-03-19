/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListSitesRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API ListSitesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSites"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSitesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSitesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the results by country code.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingAddressCountryCodeFilter() const { return m_operatingAddressCountryCodeFilter; }
    inline bool OperatingAddressCountryCodeFilterHasBeenSet() const { return m_operatingAddressCountryCodeFilterHasBeenSet; }
    template<typename OperatingAddressCountryCodeFilterT = Aws::Vector<Aws::String>>
    void SetOperatingAddressCountryCodeFilter(OperatingAddressCountryCodeFilterT&& value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter = std::forward<OperatingAddressCountryCodeFilterT>(value); }
    template<typename OperatingAddressCountryCodeFilterT = Aws::Vector<Aws::String>>
    ListSitesRequest& WithOperatingAddressCountryCodeFilter(OperatingAddressCountryCodeFilterT&& value) { SetOperatingAddressCountryCodeFilter(std::forward<OperatingAddressCountryCodeFilterT>(value)); return *this;}
    template<typename OperatingAddressCountryCodeFilterT = Aws::String>
    ListSitesRequest& AddOperatingAddressCountryCodeFilter(OperatingAddressCountryCodeFilterT&& value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter.emplace_back(std::forward<OperatingAddressCountryCodeFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by state or region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingAddressStateOrRegionFilter() const { return m_operatingAddressStateOrRegionFilter; }
    inline bool OperatingAddressStateOrRegionFilterHasBeenSet() const { return m_operatingAddressStateOrRegionFilterHasBeenSet; }
    template<typename OperatingAddressStateOrRegionFilterT = Aws::Vector<Aws::String>>
    void SetOperatingAddressStateOrRegionFilter(OperatingAddressStateOrRegionFilterT&& value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter = std::forward<OperatingAddressStateOrRegionFilterT>(value); }
    template<typename OperatingAddressStateOrRegionFilterT = Aws::Vector<Aws::String>>
    ListSitesRequest& WithOperatingAddressStateOrRegionFilter(OperatingAddressStateOrRegionFilterT&& value) { SetOperatingAddressStateOrRegionFilter(std::forward<OperatingAddressStateOrRegionFilterT>(value)); return *this;}
    template<typename OperatingAddressStateOrRegionFilterT = Aws::String>
    ListSitesRequest& AddOperatingAddressStateOrRegionFilter(OperatingAddressStateOrRegionFilterT&& value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter.emplace_back(std::forward<OperatingAddressStateOrRegionFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the results by city.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingAddressCityFilter() const { return m_operatingAddressCityFilter; }
    inline bool OperatingAddressCityFilterHasBeenSet() const { return m_operatingAddressCityFilterHasBeenSet; }
    template<typename OperatingAddressCityFilterT = Aws::Vector<Aws::String>>
    void SetOperatingAddressCityFilter(OperatingAddressCityFilterT&& value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter = std::forward<OperatingAddressCityFilterT>(value); }
    template<typename OperatingAddressCityFilterT = Aws::Vector<Aws::String>>
    ListSitesRequest& WithOperatingAddressCityFilter(OperatingAddressCityFilterT&& value) { SetOperatingAddressCityFilter(std::forward<OperatingAddressCityFilterT>(value)); return *this;}
    template<typename OperatingAddressCityFilterT = Aws::String>
    ListSitesRequest& AddOperatingAddressCityFilter(OperatingAddressCityFilterT&& value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter.emplace_back(std::forward<OperatingAddressCityFilterT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_operatingAddressCountryCodeFilter;
    bool m_operatingAddressCountryCodeFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_operatingAddressStateOrRegionFilter;
    bool m_operatingAddressStateOrRegionFilterHasBeenSet = false;

    Aws::Vector<Aws::String> m_operatingAddressCityFilter;
    bool m_operatingAddressCityFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
