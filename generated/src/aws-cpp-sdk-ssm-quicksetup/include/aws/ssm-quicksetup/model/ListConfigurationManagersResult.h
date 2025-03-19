/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-quicksetup/model/ConfigurationManagerSummary.h>
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
  class ListConfigurationManagersResult
  {
  public:
    AWS_SSMQUICKSETUP_API ListConfigurationManagersResult() = default;
    AWS_SSMQUICKSETUP_API ListConfigurationManagersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListConfigurationManagersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration managers returned by the request.</p>
     */
    inline const Aws::Vector<ConfigurationManagerSummary>& GetConfigurationManagersList() const { return m_configurationManagersList; }
    template<typename ConfigurationManagersListT = Aws::Vector<ConfigurationManagerSummary>>
    void SetConfigurationManagersList(ConfigurationManagersListT&& value) { m_configurationManagersListHasBeenSet = true; m_configurationManagersList = std::forward<ConfigurationManagersListT>(value); }
    template<typename ConfigurationManagersListT = Aws::Vector<ConfigurationManagerSummary>>
    ListConfigurationManagersResult& WithConfigurationManagersList(ConfigurationManagersListT&& value) { SetConfigurationManagersList(std::forward<ConfigurationManagersListT>(value)); return *this;}
    template<typename ConfigurationManagersListT = ConfigurationManagerSummary>
    ListConfigurationManagersResult& AddConfigurationManagersList(ConfigurationManagersListT&& value) { m_configurationManagersListHasBeenSet = true; m_configurationManagersList.emplace_back(std::forward<ConfigurationManagersListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of configuration managers. If
     * there are no additional operations to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationManagersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationManagersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationManagerSummary> m_configurationManagersList;
    bool m_configurationManagersListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
