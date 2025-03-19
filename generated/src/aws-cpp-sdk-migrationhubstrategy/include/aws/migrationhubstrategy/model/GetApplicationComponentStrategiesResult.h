/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of application component strategy recommendations. </p>
     */
    inline const Aws::Vector<ApplicationComponentStrategy>& GetApplicationComponentStrategies() const { return m_applicationComponentStrategies; }
    template<typename ApplicationComponentStrategiesT = Aws::Vector<ApplicationComponentStrategy>>
    void SetApplicationComponentStrategies(ApplicationComponentStrategiesT&& value) { m_applicationComponentStrategiesHasBeenSet = true; m_applicationComponentStrategies = std::forward<ApplicationComponentStrategiesT>(value); }
    template<typename ApplicationComponentStrategiesT = Aws::Vector<ApplicationComponentStrategy>>
    GetApplicationComponentStrategiesResult& WithApplicationComponentStrategies(ApplicationComponentStrategiesT&& value) { SetApplicationComponentStrategies(std::forward<ApplicationComponentStrategiesT>(value)); return *this;}
    template<typename ApplicationComponentStrategiesT = ApplicationComponentStrategy>
    GetApplicationComponentStrategiesResult& AddApplicationComponentStrategies(ApplicationComponentStrategiesT&& value) { m_applicationComponentStrategiesHasBeenSet = true; m_applicationComponentStrategies.emplace_back(std::forward<ApplicationComponentStrategiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationComponentStrategiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationComponentStrategy> m_applicationComponentStrategies;
    bool m_applicationComponentStrategiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
