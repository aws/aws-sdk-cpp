/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/Server.h>
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
  class UpdateServerEngineAttributesResult
  {
  public:
    AWS_OPSWORKSCM_API UpdateServerEngineAttributesResult();
    AWS_OPSWORKSCM_API UpdateServerEngineAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API UpdateServerEngineAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the response to an <code>UpdateServerEngineAttributes</code>
     * request. </p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>Contains the response to an <code>UpdateServerEngineAttributes</code>
     * request. </p>
     */
    inline void SetServer(const Server& value) { m_server = value; }

    /**
     * <p>Contains the response to an <code>UpdateServerEngineAttributes</code>
     * request. </p>
     */
    inline void SetServer(Server&& value) { m_server = std::move(value); }

    /**
     * <p>Contains the response to an <code>UpdateServerEngineAttributes</code>
     * request. </p>
     */
    inline UpdateServerEngineAttributesResult& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>Contains the response to an <code>UpdateServerEngineAttributes</code>
     * request. </p>
     */
    inline UpdateServerEngineAttributesResult& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateServerEngineAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateServerEngineAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateServerEngineAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Server m_server;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
