/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
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
namespace OpsWorksCM
{
namespace Model
{
  class ExportServerEngineAttributeResult
  {
  public:
    AWS_OPSWORKSCM_API ExportServerEngineAttributeResult();
    AWS_OPSWORKSCM_API ExportServerEngineAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API ExportServerEngineAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline const EngineAttribute& GetEngineAttribute() const{ return m_engineAttribute; }
    inline void SetEngineAttribute(const EngineAttribute& value) { m_engineAttribute = value; }
    inline void SetEngineAttribute(EngineAttribute&& value) { m_engineAttribute = std::move(value); }
    inline ExportServerEngineAttributeResult& WithEngineAttribute(const EngineAttribute& value) { SetEngineAttribute(value); return *this;}
    inline ExportServerEngineAttributeResult& WithEngineAttribute(EngineAttribute&& value) { SetEngineAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server name used in the request.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }
    inline void SetServerName(const Aws::String& value) { m_serverName = value; }
    inline void SetServerName(Aws::String&& value) { m_serverName = std::move(value); }
    inline void SetServerName(const char* value) { m_serverName.assign(value); }
    inline ExportServerEngineAttributeResult& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}
    inline ExportServerEngineAttributeResult& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}
    inline ExportServerEngineAttributeResult& WithServerName(const char* value) { SetServerName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportServerEngineAttributeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportServerEngineAttributeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportServerEngineAttributeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    EngineAttribute m_engineAttribute;

    Aws::String m_serverName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
