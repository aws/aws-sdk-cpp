/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-quicksetup/model/ConfigurationSummary.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class ListConfigurationsResult
  {
  public:
    AWS_SSMQUICKSETUP_API ListConfigurationsResult() = default;
    AWS_SSMQUICKSETUP_API ListConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of configurations.</p>
     */
    inline const Aws::Vector<ConfigurationSummary>& GetConfigurationsList() const { return m_configurationsList; }
    template<typename ConfigurationsListT = Aws::Vector<ConfigurationSummary>>
    void SetConfigurationsList(ConfigurationsListT&& value) { m_configurationsListHasBeenSet = true; m_configurationsList = std::forward<ConfigurationsListT>(value); }
    template<typename ConfigurationsListT = Aws::Vector<ConfigurationSummary>>
    ListConfigurationsResult& WithConfigurationsList(ConfigurationsListT&& value) { SetConfigurationsList(std::forward<ConfigurationsListT>(value)); return *this;}
    template<typename ConfigurationsListT = ConfigurationSummary>
    ListConfigurationsResult& AddConfigurationsList(ConfigurationsListT&& value) { m_configurationsListHasBeenSet = true; m_configurationsList.emplace_back(std::forward<ConfigurationsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationSummary> m_configurationsList;
    bool m_configurationsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
