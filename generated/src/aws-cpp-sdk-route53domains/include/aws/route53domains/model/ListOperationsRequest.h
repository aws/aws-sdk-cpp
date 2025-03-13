/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/ListOperationsSortAttributeName.h>
#include <aws/route53domains/model/SortOrder.h>
#include <aws/route53domains/model/OperationStatus.h>
#include <aws/route53domains/model/OperationType.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The ListOperations request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperationsRequest">AWS
   * API Reference</a></p>
   */
  class ListOperationsRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API ListOperationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOperations"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedSince() const { return m_submittedSince; }
    inline bool SubmittedSinceHasBeenSet() const { return m_submittedSinceHasBeenSet; }
    template<typename SubmittedSinceT = Aws::Utils::DateTime>
    void SetSubmittedSince(SubmittedSinceT&& value) { m_submittedSinceHasBeenSet = true; m_submittedSince = std::forward<SubmittedSinceT>(value); }
    template<typename SubmittedSinceT = Aws::Utils::DateTime>
    ListOperationsRequest& WithSubmittedSince(SubmittedSinceT&& value) { SetSubmittedSince(std::forward<SubmittedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListOperationsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ListOperationsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the operations. </p>
     */
    inline const Aws::Vector<OperationStatus>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<OperationStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<OperationStatus>>
    ListOperationsRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline ListOperationsRequest& AddStatus(OperationStatus value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline const Aws::Vector<OperationType>& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::Vector<OperationType>>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::Vector<OperationType>>
    ListOperationsRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    inline ListOperationsRequest& AddType(OperationType value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The sort type for returned values. </p>
     */
    inline ListOperationsSortAttributeName GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ListOperationsSortAttributeName value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListOperationsRequest& WithSortBy(ListOperationsSortAttributeName value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sort order for returned values, either ascending or descending. </p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListOperationsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_submittedSince{};
    bool m_submittedSinceHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    Aws::Vector<OperationStatus> m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<OperationType> m_type;
    bool m_typeHasBeenSet = false;

    ListOperationsSortAttributeName m_sortBy{ListOperationsSortAttributeName::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
