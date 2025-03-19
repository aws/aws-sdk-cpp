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
    AWS_OPSWORKSCM_API ExportServerEngineAttributeResult() = default;
    AWS_OPSWORKSCM_API ExportServerEngineAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API ExportServerEngineAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested engine attribute pair with attribute name and value.</p>
     */
    inline const EngineAttribute& GetEngineAttribute() const { return m_engineAttribute; }
    template<typename EngineAttributeT = EngineAttribute>
    void SetEngineAttribute(EngineAttributeT&& value) { m_engineAttributeHasBeenSet = true; m_engineAttribute = std::forward<EngineAttributeT>(value); }
    template<typename EngineAttributeT = EngineAttribute>
    ExportServerEngineAttributeResult& WithEngineAttribute(EngineAttributeT&& value) { SetEngineAttribute(std::forward<EngineAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server name used in the request.</p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    ExportServerEngineAttributeResult& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportServerEngineAttributeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EngineAttribute m_engineAttribute;
    bool m_engineAttributeHasBeenSet = false;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
