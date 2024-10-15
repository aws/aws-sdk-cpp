/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Integration.h>
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
  class DescribeIntegrationsResult
  {
  public:
    AWS_REDSHIFT_API DescribeIntegrationsResult();
    AWS_REDSHIFT_API DescribeIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeIntegrationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeIntegrationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeIntegrationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of integrations that are described.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const{ return m_integrations; }
    inline void SetIntegrations(const Aws::Vector<Integration>& value) { m_integrations = value; }
    inline void SetIntegrations(Aws::Vector<Integration>&& value) { m_integrations = std::move(value); }
    inline DescribeIntegrationsResult& WithIntegrations(const Aws::Vector<Integration>& value) { SetIntegrations(value); return *this;}
    inline DescribeIntegrationsResult& WithIntegrations(Aws::Vector<Integration>&& value) { SetIntegrations(std::move(value)); return *this;}
    inline DescribeIntegrationsResult& AddIntegrations(const Integration& value) { m_integrations.push_back(value); return *this; }
    inline DescribeIntegrationsResult& AddIntegrations(Integration&& value) { m_integrations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeIntegrationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeIntegrationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<Integration> m_integrations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
