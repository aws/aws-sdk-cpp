/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/model/Server.h>
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
  class CreateServerResult
  {
  public:
    AWS_OPSWORKSCM_API CreateServerResult();
    AWS_OPSWORKSCM_API CreateServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API CreateServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The server that is created by the request. </p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>The server that is created by the request. </p>
     */
    inline void SetServer(const Server& value) { m_server = value; }

    /**
     * <p>The server that is created by the request. </p>
     */
    inline void SetServer(Server&& value) { m_server = std::move(value); }

    /**
     * <p>The server that is created by the request. </p>
     */
    inline CreateServerResult& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>The server that is created by the request. </p>
     */
    inline CreateServerResult& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}

  private:

    Server m_server;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
