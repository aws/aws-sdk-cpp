/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Integration.h>
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
  class DescribeIntegrationsResult
  {
  public:
    AWS_RDS_API DescribeIntegrationsResult();
    AWS_RDS_API DescribeIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline DescribeIntegrationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline DescribeIntegrationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a later
     * <code>DescribeIntegrations</code> request.</p>
     */
    inline DescribeIntegrationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of integrations.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const{ return m_integrations; }

    /**
     * <p>A list of integrations.</p>
     */
    inline void SetIntegrations(const Aws::Vector<Integration>& value) { m_integrations = value; }

    /**
     * <p>A list of integrations.</p>
     */
    inline void SetIntegrations(Aws::Vector<Integration>&& value) { m_integrations = std::move(value); }

    /**
     * <p>A list of integrations.</p>
     */
    inline DescribeIntegrationsResult& WithIntegrations(const Aws::Vector<Integration>& value) { SetIntegrations(value); return *this;}

    /**
     * <p>A list of integrations.</p>
     */
    inline DescribeIntegrationsResult& WithIntegrations(Aws::Vector<Integration>&& value) { SetIntegrations(std::move(value)); return *this;}

    /**
     * <p>A list of integrations.</p>
     */
    inline DescribeIntegrationsResult& AddIntegrations(const Integration& value) { m_integrations.push_back(value); return *this; }

    /**
     * <p>A list of integrations.</p>
     */
    inline DescribeIntegrationsResult& AddIntegrations(Integration&& value) { m_integrations.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeIntegrationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeIntegrationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<Integration> m_integrations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
