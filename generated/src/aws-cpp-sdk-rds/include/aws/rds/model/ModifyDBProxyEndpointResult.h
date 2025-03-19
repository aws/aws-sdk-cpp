/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBProxyEndpoint.h>
#include <aws/rds/model/ResponseMetadata.h>
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
  class ModifyDBProxyEndpointResult
  {
  public:
    AWS_RDS_API ModifyDBProxyEndpointResult() = default;
    AWS_RDS_API ModifyDBProxyEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyDBProxyEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The <code>DBProxyEndpoint</code> object representing the new settings for the
     * DB proxy endpoint.</p>
     */
    inline const DBProxyEndpoint& GetDBProxyEndpoint() const { return m_dBProxyEndpoint; }
    template<typename DBProxyEndpointT = DBProxyEndpoint>
    void SetDBProxyEndpoint(DBProxyEndpointT&& value) { m_dBProxyEndpointHasBeenSet = true; m_dBProxyEndpoint = std::forward<DBProxyEndpointT>(value); }
    template<typename DBProxyEndpointT = DBProxyEndpoint>
    ModifyDBProxyEndpointResult& WithDBProxyEndpoint(DBProxyEndpointT&& value) { SetDBProxyEndpoint(std::forward<DBProxyEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyDBProxyEndpointResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBProxyEndpoint m_dBProxyEndpoint;
    bool m_dBProxyEndpointHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
