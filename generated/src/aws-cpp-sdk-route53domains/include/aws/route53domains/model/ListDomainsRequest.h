/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/SortCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/FilterCondition.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ListDomains request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListDomainsRequest">AWS
   * API Reference</a></p>
   */
  class ListDomainsRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API ListDomainsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomains"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A complex type that contains information about the filters applied during the
     * <code>ListDomains</code> request. The filter conditions can include domain name
     * and domain expiration.</p>
     */
    inline const Aws::Vector<FilterCondition>& GetFilterConditions() const{ return m_filterConditions; }
    inline bool FilterConditionsHasBeenSet() const { return m_filterConditionsHasBeenSet; }
    inline void SetFilterConditions(const Aws::Vector<FilterCondition>& value) { m_filterConditionsHasBeenSet = true; m_filterConditions = value; }
    inline void SetFilterConditions(Aws::Vector<FilterCondition>&& value) { m_filterConditionsHasBeenSet = true; m_filterConditions = std::move(value); }
    inline ListDomainsRequest& WithFilterConditions(const Aws::Vector<FilterCondition>& value) { SetFilterConditions(value); return *this;}
    inline ListDomainsRequest& WithFilterConditions(Aws::Vector<FilterCondition>&& value) { SetFilterConditions(std::move(value)); return *this;}
    inline ListDomainsRequest& AddFilterConditions(const FilterCondition& value) { m_filterConditionsHasBeenSet = true; m_filterConditions.push_back(value); return *this; }
    inline ListDomainsRequest& AddFilterConditions(FilterCondition&& value) { m_filterConditionsHasBeenSet = true; m_filterConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the requested ordering of
     * domains in the returned list.</p>
     */
    inline const SortCondition& GetSortCondition() const{ return m_sortCondition; }
    inline bool SortConditionHasBeenSet() const { return m_sortConditionHasBeenSet; }
    inline void SetSortCondition(const SortCondition& value) { m_sortConditionHasBeenSet = true; m_sortCondition = value; }
    inline void SetSortCondition(SortCondition&& value) { m_sortConditionHasBeenSet = true; m_sortCondition = std::move(value); }
    inline ListDomainsRequest& WithSortCondition(const SortCondition& value) { SetSortCondition(value); return *this;}
    inline ListDomainsRequest& WithSortCondition(SortCondition&& value) { SetSortCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an initial request for a list of domains, omit this element. If the
     * number of domains that are associated with the current Amazon Web Services
     * account is greater than the value that you specified for <code>MaxItems</code>,
     * you can use <code>Marker</code> to return additional domains. Get the value of
     * <code>NextPageMarker</code> from the previous response, and submit another
     * request that includes the value of <code>NextPageMarker</code> in the
     * <code>Marker</code> element.</p> <p>Constraints: The marker must match the value
     * specified in the previous request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline ListDomainsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListDomainsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListDomainsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListDomainsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::Vector<FilterCondition> m_filterConditions;
    bool m_filterConditionsHasBeenSet = false;

    SortCondition m_sortCondition;
    bool m_sortConditionHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
