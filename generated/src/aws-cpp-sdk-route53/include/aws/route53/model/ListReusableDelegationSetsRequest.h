/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A request to get a list of the reusable delegation sets that are associated
   * with the current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListReusableDelegationSetsRequest">AWS
   * API Reference</a></p>
   */
  class ListReusableDelegationSetsRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListReusableDelegationSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReusableDelegationSets"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListReusableDelegationSetsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListReusableDelegationSetsRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
