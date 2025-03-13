/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/ServerStrategy.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetServerStrategiesResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline const Aws::Vector<ServerStrategy>& GetServerStrategies() const { return m_serverStrategies; }
    template<typename ServerStrategiesT = Aws::Vector<ServerStrategy>>
    void SetServerStrategies(ServerStrategiesT&& value) { m_serverStrategiesHasBeenSet = true; m_serverStrategies = std::forward<ServerStrategiesT>(value); }
    template<typename ServerStrategiesT = Aws::Vector<ServerStrategy>>
    GetServerStrategiesResult& WithServerStrategies(ServerStrategiesT&& value) { SetServerStrategies(std::forward<ServerStrategiesT>(value)); return *this;}
    template<typename ServerStrategiesT = ServerStrategy>
    GetServerStrategiesResult& AddServerStrategies(ServerStrategiesT&& value) { m_serverStrategiesHasBeenSet = true; m_serverStrategies.emplace_back(std::forward<ServerStrategiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServerStrategiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServerStrategy> m_serverStrategies;
    bool m_serverStrategiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
