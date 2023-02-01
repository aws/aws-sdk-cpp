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
    AWS_OUTPOSTS_API ListSitesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSites"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListSitesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListSitesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListSitesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListSitesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the results by country code.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingAddressCountryCodeFilter() const{ return m_operatingAddressCountryCodeFilter; }

    /**
     * <p>Filters the results by country code.</p>
     */
    inline bool OperatingAddressCountryCodeFilterHasBeenSet() const { return m_operatingAddressCountryCodeFilterHasBeenSet; }

    /**
     * <p>Filters the results by country code.</p>
     */
    inline void SetOperatingAddressCountryCodeFilter(const Aws::Vector<Aws::String>& value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter = value; }

    /**
     * <p>Filters the results by country code.</p>
     */
    inline void SetOperatingAddressCountryCodeFilter(Aws::Vector<Aws::String>&& value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter = std::move(value); }

    /**
     * <p>Filters the results by country code.</p>
     */
    inline ListSitesRequest& WithOperatingAddressCountryCodeFilter(const Aws::Vector<Aws::String>& value) { SetOperatingAddressCountryCodeFilter(value); return *this;}

    /**
     * <p>Filters the results by country code.</p>
     */
    inline ListSitesRequest& WithOperatingAddressCountryCodeFilter(Aws::Vector<Aws::String>&& value) { SetOperatingAddressCountryCodeFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by country code.</p>
     */
    inline ListSitesRequest& AddOperatingAddressCountryCodeFilter(const Aws::String& value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by country code.</p>
     */
    inline ListSitesRequest& AddOperatingAddressCountryCodeFilter(Aws::String&& value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by country code.</p>
     */
    inline ListSitesRequest& AddOperatingAddressCountryCodeFilter(const char* value) { m_operatingAddressCountryCodeFilterHasBeenSet = true; m_operatingAddressCountryCodeFilter.push_back(value); return *this; }


    /**
     * <p>Filters the results by state or region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingAddressStateOrRegionFilter() const{ return m_operatingAddressStateOrRegionFilter; }

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline bool OperatingAddressStateOrRegionFilterHasBeenSet() const { return m_operatingAddressStateOrRegionFilterHasBeenSet; }

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline void SetOperatingAddressStateOrRegionFilter(const Aws::Vector<Aws::String>& value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter = value; }

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline void SetOperatingAddressStateOrRegionFilter(Aws::Vector<Aws::String>&& value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter = std::move(value); }

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline ListSitesRequest& WithOperatingAddressStateOrRegionFilter(const Aws::Vector<Aws::String>& value) { SetOperatingAddressStateOrRegionFilter(value); return *this;}

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline ListSitesRequest& WithOperatingAddressStateOrRegionFilter(Aws::Vector<Aws::String>&& value) { SetOperatingAddressStateOrRegionFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline ListSitesRequest& AddOperatingAddressStateOrRegionFilter(const Aws::String& value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline ListSitesRequest& AddOperatingAddressStateOrRegionFilter(Aws::String&& value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by state or region.</p>
     */
    inline ListSitesRequest& AddOperatingAddressStateOrRegionFilter(const char* value) { m_operatingAddressStateOrRegionFilterHasBeenSet = true; m_operatingAddressStateOrRegionFilter.push_back(value); return *this; }


    /**
     * <p>Filters the results by city.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperatingAddressCityFilter() const{ return m_operatingAddressCityFilter; }

    /**
     * <p>Filters the results by city.</p>
     */
    inline bool OperatingAddressCityFilterHasBeenSet() const { return m_operatingAddressCityFilterHasBeenSet; }

    /**
     * <p>Filters the results by city.</p>
     */
    inline void SetOperatingAddressCityFilter(const Aws::Vector<Aws::String>& value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter = value; }

    /**
     * <p>Filters the results by city.</p>
     */
    inline void SetOperatingAddressCityFilter(Aws::Vector<Aws::String>&& value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter = std::move(value); }

    /**
     * <p>Filters the results by city.</p>
     */
    inline ListSitesRequest& WithOperatingAddressCityFilter(const Aws::Vector<Aws::String>& value) { SetOperatingAddressCityFilter(value); return *this;}

    /**
     * <p>Filters the results by city.</p>
     */
    inline ListSitesRequest& WithOperatingAddressCityFilter(Aws::Vector<Aws::String>&& value) { SetOperatingAddressCityFilter(std::move(value)); return *this;}

    /**
     * <p>Filters the results by city.</p>
     */
    inline ListSitesRequest& AddOperatingAddressCityFilter(const Aws::String& value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter.push_back(value); return *this; }

    /**
     * <p>Filters the results by city.</p>
     */
    inline ListSitesRequest& AddOperatingAddressCityFilter(Aws::String&& value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>Filters the results by city.</p>
     */
    inline ListSitesRequest& AddOperatingAddressCityFilter(const char* value) { m_operatingAddressCityFilterHasBeenSet = true; m_operatingAddressCityFilter.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
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
