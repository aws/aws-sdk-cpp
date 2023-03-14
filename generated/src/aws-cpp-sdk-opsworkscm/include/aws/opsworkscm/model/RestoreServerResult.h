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
  class RestoreServerResult
  {
  public:
    AWS_OPSWORKSCM_API RestoreServerResult();
    AWS_OPSWORKSCM_API RestoreServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API RestoreServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Server& GetServer() const{ return m_server; }

    
    inline void SetServer(const Server& value) { m_server = value; }

    
    inline void SetServer(Server&& value) { m_server = std::move(value); }

    
    inline RestoreServerResult& WithServer(const Server& value) { SetServer(value); return *this;}

    
    inline RestoreServerResult& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Server m_server;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
