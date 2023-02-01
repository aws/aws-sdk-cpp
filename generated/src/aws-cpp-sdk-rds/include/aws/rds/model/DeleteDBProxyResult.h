/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBProxy.h>
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
  class DeleteDBProxyResult
  {
  public:
    AWS_RDS_API DeleteDBProxyResult();
    AWS_RDS_API DeleteDBProxyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DeleteDBProxyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The data structure representing the details of the DB proxy that you
     * delete.</p>
     */
    inline const DBProxy& GetDBProxy() const{ return m_dBProxy; }

    /**
     * <p>The data structure representing the details of the DB proxy that you
     * delete.</p>
     */
    inline void SetDBProxy(const DBProxy& value) { m_dBProxy = value; }

    /**
     * <p>The data structure representing the details of the DB proxy that you
     * delete.</p>
     */
    inline void SetDBProxy(DBProxy&& value) { m_dBProxy = std::move(value); }

    /**
     * <p>The data structure representing the details of the DB proxy that you
     * delete.</p>
     */
    inline DeleteDBProxyResult& WithDBProxy(const DBProxy& value) { SetDBProxy(value); return *this;}

    /**
     * <p>The data structure representing the details of the DB proxy that you
     * delete.</p>
     */
    inline DeleteDBProxyResult& WithDBProxy(DBProxy&& value) { SetDBProxy(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteDBProxyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDBProxyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBProxy m_dBProxy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
