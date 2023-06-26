﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Event.h>
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
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeEvents</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/EventsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventsResult
  {
  public:
    AWS_RDS_API DescribeEventsResult();
    AWS_RDS_API DescribeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous Events request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_events = std::move(value); }

    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline DescribeEventsResult& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline DescribeEventsResult& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline DescribeEventsResult& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

    /**
     * <p>A list of <code>Event</code> instances.</p>
     */
    inline DescribeEventsResult& AddEvents(Event&& value) { m_events.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEventsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEventsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Event> m_events;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
