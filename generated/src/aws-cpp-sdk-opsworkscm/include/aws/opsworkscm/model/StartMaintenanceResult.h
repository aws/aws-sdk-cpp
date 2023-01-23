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
  class StartMaintenanceResult
  {
  public:
    AWS_OPSWORKSCM_API StartMaintenanceResult();
    AWS_OPSWORKSCM_API StartMaintenanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKSCM_API StartMaintenanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline const Server& GetServer() const{ return m_server; }

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline void SetServer(const Server& value) { m_server = value; }

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline void SetServer(Server&& value) { m_server = std::move(value); }

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline StartMaintenanceResult& WithServer(const Server& value) { SetServer(value); return *this;}

    /**
     * <p>Contains the response to a <code>StartMaintenance</code> request. </p>
     */
    inline StartMaintenanceResult& WithServer(Server&& value) { SetServer(std::move(value)); return *this;}

  private:

    Server m_server;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
