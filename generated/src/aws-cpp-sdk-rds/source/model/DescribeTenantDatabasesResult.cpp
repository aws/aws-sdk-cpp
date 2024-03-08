/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeTenantDatabasesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeTenantDatabasesResult::DescribeTenantDatabasesResult()
{
}

DescribeTenantDatabasesResult::DescribeTenantDatabasesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeTenantDatabasesResult& DescribeTenantDatabasesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeTenantDatabasesResult"))
  {
    resultNode = rootNode.FirstChild("DescribeTenantDatabasesResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
    }
    XmlNode tenantDatabasesNode = resultNode.FirstChild("TenantDatabases");
    if(!tenantDatabasesNode.IsNull())
    {
      XmlNode tenantDatabasesMember = tenantDatabasesNode.FirstChild("TenantDatabase");
      while(!tenantDatabasesMember.IsNull())
      {
        m_tenantDatabases.push_back(tenantDatabasesMember);
        tenantDatabasesMember = tenantDatabasesMember.NextNode("TenantDatabase");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::DescribeTenantDatabasesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
