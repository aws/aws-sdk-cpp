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
    AWS_ROUTE53DOMAINS_API ListOperationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOperations"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedSince() const{ return m_submittedSince; }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline bool SubmittedSinceHasBeenSet() const { return m_submittedSinceHasBeenSet; }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline void SetSubmittedSince(const Aws::Utils::DateTime& value) { m_submittedSinceHasBeenSet = true; m_submittedSince = value; }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline void SetSubmittedSince(Aws::Utils::DateTime&& value) { m_submittedSinceHasBeenSet = true; m_submittedSince = std::move(value); }

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline ListOperationsRequest& WithSubmittedSince(const Aws::Utils::DateTime& value) { SetSubmittedSince(value); return *this;}

    /**
     * <p>An optional parameter that lets you get information about all the operations
     * that you submitted after a specified date and time. Specify the date and time in
     * Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline ListOperationsRequest& WithSubmittedSince(Aws::Utils::DateTime&& value) { SetSubmittedSince(std::move(value)); return *this;}


    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline ListOperationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline ListOperationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>For an initial request for a list of operations, omit this element. If the
     * number of operations that are not yet complete is greater than the value that
     * you specified for <code>MaxItems</code>, you can use <code>Marker</code> to
     * return additional operations. Get the value of <code>NextPageMarker</code> from
     * the previous response, and submit another request that includes the value of
     * <code>NextPageMarker</code> in the <code>Marker</code> element.</p>
     */
    inline ListOperationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Number of domains to be returned.</p> <p>Default: 20</p>
     */
    inline ListOperationsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}


    /**
     * <p> The status of the operations. </p>
     */
    inline const Aws::Vector<OperationStatus>& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the operations. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the operations. </p>
     */
    inline void SetStatus(const Aws::Vector<OperationStatus>& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the operations. </p>
     */
    inline void SetStatus(Aws::Vector<OperationStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the operations. </p>
     */
    inline ListOperationsRequest& WithStatus(const Aws::Vector<OperationStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the operations. </p>
     */
    inline ListOperationsRequest& WithStatus(Aws::Vector<OperationStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the operations. </p>
     */
    inline ListOperationsRequest& AddStatus(const OperationStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }

    /**
     * <p> The status of the operations. </p>
     */
    inline ListOperationsRequest& AddStatus(OperationStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }


    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline const Aws::Vector<OperationType>& GetType() const{ return m_type; }

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline void SetType(const Aws::Vector<OperationType>& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline void SetType(Aws::Vector<OperationType>&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline ListOperationsRequest& WithType(const Aws::Vector<OperationType>& value) { SetType(value); return *this;}

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline ListOperationsRequest& WithType(Aws::Vector<OperationType>&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline ListOperationsRequest& AddType(const OperationType& value) { m_typeHasBeenSet = true; m_type.push_back(value); return *this; }

    /**
     * <p> An arrays of the domains operation types. </p>
     */
    inline ListOperationsRequest& AddType(OperationType&& value) { m_typeHasBeenSet = true; m_type.push_back(std::move(value)); return *this; }


    /**
     * <p> The sort type for returned values. </p>
     */
    inline const ListOperationsSortAttributeName& GetSortBy() const{ return m_sortBy; }

    /**
     * <p> The sort type for returned values. </p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p> The sort type for returned values. </p>
     */
    inline void SetSortBy(const ListOperationsSortAttributeName& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p> The sort type for returned values. </p>
     */
    inline void SetSortBy(ListOperationsSortAttributeName&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p> The sort type for returned values. </p>
     */
    inline ListOperationsRequest& WithSortBy(const ListOperationsSortAttributeName& value) { SetSortBy(value); return *this;}

    /**
     * <p> The sort type for returned values. </p>
     */
    inline ListOperationsRequest& WithSortBy(ListOperationsSortAttributeName&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p> The sort order ofr returned values, either ascending or descending. </p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p> The sort order ofr returned values, either ascending or descending. </p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p> The sort order ofr returned values, either ascending or descending. </p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p> The sort order ofr returned values, either ascending or descending. </p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p> The sort order ofr returned values, either ascending or descending. </p>
     */
    inline ListOperationsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p> The sort order ofr returned values, either ascending or descending. </p>
     */
    inline ListOperationsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_submittedSince;
    bool m_submittedSinceHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::Vector<OperationStatus> m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<OperationType> m_type;
    bool m_typeHasBeenSet = false;

    ListOperationsSortAttributeName m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
