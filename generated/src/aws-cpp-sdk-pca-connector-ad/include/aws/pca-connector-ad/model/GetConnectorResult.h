/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/Connector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PcaConnectorAd
{
namespace Model
{
  class GetConnectorResult
  {
  public:
    AWS_PCACONNECTORAD_API GetConnectorResult();
    AWS_PCACONNECTORAD_API GetConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API GetConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about your connector.</p>
     */
    inline const Connector& GetConnector() const{ return m_connector; }

    /**
     * <p>A structure that contains information about your connector.</p>
     */
    inline void SetConnector(const Connector& value) { m_connector = value; }

    /**
     * <p>A structure that contains information about your connector.</p>
     */
    inline void SetConnector(Connector&& value) { m_connector = std::move(value); }

    /**
     * <p>A structure that contains information about your connector.</p>
     */
    inline GetConnectorResult& WithConnector(const Connector& value) { SetConnector(value); return *this;}

    /**
     * <p>A structure that contains information about your connector.</p>
     */
    inline GetConnectorResult& WithConnector(Connector&& value) { SetConnector(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Connector m_connector;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
