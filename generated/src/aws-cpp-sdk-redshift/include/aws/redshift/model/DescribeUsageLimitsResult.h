/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/UsageLimit.h>
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
  class DescribeUsageLimitsResult
  {
  public:
    AWS_REDSHIFT_API DescribeUsageLimitsResult();
    AWS_REDSHIFT_API DescribeUsageLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeUsageLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline const Aws::Vector<UsageLimit>& GetUsageLimits() const{ return m_usageLimits; }

    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline void SetUsageLimits(const Aws::Vector<UsageLimit>& value) { m_usageLimits = value; }

    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline void SetUsageLimits(Aws::Vector<UsageLimit>&& value) { m_usageLimits = std::move(value); }

    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline DescribeUsageLimitsResult& WithUsageLimits(const Aws::Vector<UsageLimit>& value) { SetUsageLimits(value); return *this;}

    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline DescribeUsageLimitsResult& WithUsageLimits(Aws::Vector<UsageLimit>&& value) { SetUsageLimits(std::move(value)); return *this;}

    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline DescribeUsageLimitsResult& AddUsageLimits(const UsageLimit& value) { m_usageLimits.push_back(value); return *this; }

    /**
     * <p>Contains the output from the <a>DescribeUsageLimits</a> action. </p>
     */
    inline DescribeUsageLimitsResult& AddUsageLimits(UsageLimit&& value) { m_usageLimits.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeUsageLimitsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeUsageLimitsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeUsageLimitsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeUsageLimitsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeUsageLimitsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<UsageLimit> m_usageLimits;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
