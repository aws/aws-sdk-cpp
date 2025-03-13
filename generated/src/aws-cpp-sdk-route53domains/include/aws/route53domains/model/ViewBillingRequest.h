/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ViewBilling request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBillingRequest">AWS
   * API Reference</a></p>
   */
  class ViewBillingRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API ViewBillingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ViewBilling"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The beginning date and time for the time period for which you want a list of
     * billing records. Specify the date and time in Unix time format and Coordinated
     * Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    ViewBillingRequest& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date and time for the time period for which you want a list of
     * billing records. Specify the date and time in Unix time format and Coordinated
     * Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    ViewBillingRequest& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an initial request for a list of billing records, omit this element. If
     * the number of billing records that are associated with the current Amazon Web
     * Services account during the specified period is greater than the value that you
     * specified for <code>MaxItems</code>, you can use <code>Marker</code> to return
     * additional billing records. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element. </p>
     * <p>Constraints: The marker must match the value of <code>NextPageMarker</code>
     * that was returned in the previous response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ViewBillingRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of billing records to be returned.</p> <p>Default: 20</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ViewBillingRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
    bool m_endHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
