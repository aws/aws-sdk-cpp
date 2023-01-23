/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline const Aws::Vector<ServerStrategy>& GetServerStrategies() const{ return m_serverStrategies; }

    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline void SetServerStrategies(const Aws::Vector<ServerStrategy>& value) { m_serverStrategies = value; }

    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline void SetServerStrategies(Aws::Vector<ServerStrategy>&& value) { m_serverStrategies = std::move(value); }

    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline GetServerStrategiesResult& WithServerStrategies(const Aws::Vector<ServerStrategy>& value) { SetServerStrategies(value); return *this;}

    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline GetServerStrategiesResult& WithServerStrategies(Aws::Vector<ServerStrategy>&& value) { SetServerStrategies(std::move(value)); return *this;}

    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline GetServerStrategiesResult& AddServerStrategies(const ServerStrategy& value) { m_serverStrategies.push_back(value); return *this; }

    /**
     * <p> A list of strategy recommendations for the server. </p>
     */
    inline GetServerStrategiesResult& AddServerStrategies(ServerStrategy&& value) { m_serverStrategies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServerStrategy> m_serverStrategies;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
