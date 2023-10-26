/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/InboundIntegration.h>
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
  class DescribeInboundIntegrationsResult
  {
  public:
    AWS_REDSHIFT_API DescribeInboundIntegrationsResult();
    AWS_REDSHIFT_API DescribeInboundIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeInboundIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DescribeInboundIntegrationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeInboundIntegrationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeInboundIntegrationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline const Aws::Vector<InboundIntegration>& GetInboundIntegrations() const{ return m_inboundIntegrations; }

    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline void SetInboundIntegrations(const Aws::Vector<InboundIntegration>& value) { m_inboundIntegrations = value; }

    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline void SetInboundIntegrations(Aws::Vector<InboundIntegration>&& value) { m_inboundIntegrations = std::move(value); }

    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline DescribeInboundIntegrationsResult& WithInboundIntegrations(const Aws::Vector<InboundIntegration>& value) { SetInboundIntegrations(value); return *this;}

    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline DescribeInboundIntegrationsResult& WithInboundIntegrations(Aws::Vector<InboundIntegration>&& value) { SetInboundIntegrations(std::move(value)); return *this;}

    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline DescribeInboundIntegrationsResult& AddInboundIntegrations(const InboundIntegration& value) { m_inboundIntegrations.push_back(value); return *this; }

    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline DescribeInboundIntegrationsResult& AddInboundIntegrations(InboundIntegration&& value) { m_inboundIntegrations.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInboundIntegrationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInboundIntegrationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<InboundIntegration> m_inboundIntegrations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
