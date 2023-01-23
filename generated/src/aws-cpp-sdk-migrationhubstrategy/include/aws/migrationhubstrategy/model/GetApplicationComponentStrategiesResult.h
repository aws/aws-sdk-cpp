/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/ApplicationComponentStrategy.h>
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
  class GetApplicationComponentStrategiesResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline const Aws::Vector<ApplicationComponentStrategy>& GetApplicationComponentStrategies() const{ return m_applicationComponentStrategies; }

    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline void SetApplicationComponentStrategies(const Aws::Vector<ApplicationComponentStrategy>& value) { m_applicationComponentStrategies = value; }

    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline void SetApplicationComponentStrategies(Aws::Vector<ApplicationComponentStrategy>&& value) { m_applicationComponentStrategies = std::move(value); }

    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline GetApplicationComponentStrategiesResult& WithApplicationComponentStrategies(const Aws::Vector<ApplicationComponentStrategy>& value) { SetApplicationComponentStrategies(value); return *this;}

    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline GetApplicationComponentStrategiesResult& WithApplicationComponentStrategies(Aws::Vector<ApplicationComponentStrategy>&& value) { SetApplicationComponentStrategies(std::move(value)); return *this;}

    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline GetApplicationComponentStrategiesResult& AddApplicationComponentStrategies(const ApplicationComponentStrategy& value) { m_applicationComponentStrategies.push_back(value); return *this; }

    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline GetApplicationComponentStrategiesResult& AddApplicationComponentStrategies(ApplicationComponentStrategy&& value) { m_applicationComponentStrategies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ApplicationComponentStrategy> m_applicationComponentStrategies;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
