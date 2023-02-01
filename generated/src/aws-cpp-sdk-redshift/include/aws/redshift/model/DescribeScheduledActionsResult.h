/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ScheduledAction.h>
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
namespace Redshift
{
namespace Model
{
  class DescribeScheduledActionsResult
  {
  public:
    AWS_REDSHIFT_API DescribeScheduledActionsResult();
    AWS_REDSHIFT_API DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeScheduledActionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeScheduledActionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeScheduledActionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline const Aws::Vector<ScheduledAction>& GetScheduledActions() const{ return m_scheduledActions; }

    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline void SetScheduledActions(const Aws::Vector<ScheduledAction>& value) { m_scheduledActions = value; }

    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline void SetScheduledActions(Aws::Vector<ScheduledAction>&& value) { m_scheduledActions = std::move(value); }

    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline DescribeScheduledActionsResult& WithScheduledActions(const Aws::Vector<ScheduledAction>& value) { SetScheduledActions(value); return *this;}

    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline DescribeScheduledActionsResult& WithScheduledActions(Aws::Vector<ScheduledAction>&& value) { SetScheduledActions(std::move(value)); return *this;}

    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline DescribeScheduledActionsResult& AddScheduledActions(const ScheduledAction& value) { m_scheduledActions.push_back(value); return *this; }

    /**
     * <p>List of retrieved scheduled actions. </p>
     */
    inline DescribeScheduledActionsResult& AddScheduledActions(ScheduledAction&& value) { m_scheduledActions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeScheduledActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeScheduledActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ScheduledAction> m_scheduledActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
