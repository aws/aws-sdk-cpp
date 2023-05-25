/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/EventSubscription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>Data returned by the <b>DescribeEventSubscriptions</b> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EventSubscriptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventSubscriptionsResult
  {
  public:
    AWS_RDS_API DescribeEventSubscriptionsResult();
    AWS_RDS_API DescribeEventSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeEventSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeEventSubscriptionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeEventSubscriptionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * DescribeOrderableDBInstanceOptions request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeEventSubscriptionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline const Aws::Vector<EventSubscription>& GetEventSubscriptionsList() const{ return m_eventSubscriptionsList; }

    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline void SetEventSubscriptionsList(const Aws::Vector<EventSubscription>& value) { m_eventSubscriptionsList = value; }

    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline void SetEventSubscriptionsList(Aws::Vector<EventSubscription>&& value) { m_eventSubscriptionsList = std::move(value); }

    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline DescribeEventSubscriptionsResult& WithEventSubscriptionsList(const Aws::Vector<EventSubscription>& value) { SetEventSubscriptionsList(value); return *this;}

    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline DescribeEventSubscriptionsResult& WithEventSubscriptionsList(Aws::Vector<EventSubscription>&& value) { SetEventSubscriptionsList(std::move(value)); return *this;}

    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline DescribeEventSubscriptionsResult& AddEventSubscriptionsList(const EventSubscription& value) { m_eventSubscriptionsList.push_back(value); return *this; }

    /**
     * <p>A list of EventSubscriptions data types.</p>
     */
    inline DescribeEventSubscriptionsResult& AddEventSubscriptionsList(EventSubscription&& value) { m_eventSubscriptionsList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEventSubscriptionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEventSubscriptionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<EventSubscription> m_eventSubscriptionsList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
