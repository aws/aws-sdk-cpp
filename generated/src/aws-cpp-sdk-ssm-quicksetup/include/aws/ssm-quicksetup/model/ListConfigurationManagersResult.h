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
    AWS_SSMQUICKSETUP_API ListConfigurationManagersResult();
    AWS_SSMQUICKSETUP_API ListConfigurationManagersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListConfigurationManagersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration managers returned by the request.</p>
     */
    inline const Aws::Vector<ConfigurationManagerSummary>& GetConfigurationManagersList() const{ return m_configurationManagersList; }
    inline void SetConfigurationManagersList(const Aws::Vector<ConfigurationManagerSummary>& value) { m_configurationManagersList = value; }
    inline void SetConfigurationManagersList(Aws::Vector<ConfigurationManagerSummary>&& value) { m_configurationManagersList = std::move(value); }
    inline ListConfigurationManagersResult& WithConfigurationManagersList(const Aws::Vector<ConfigurationManagerSummary>& value) { SetConfigurationManagersList(value); return *this;}
    inline ListConfigurationManagersResult& WithConfigurationManagersList(Aws::Vector<ConfigurationManagerSummary>&& value) { SetConfigurationManagersList(std::move(value)); return *this;}
    inline ListConfigurationManagersResult& AddConfigurationManagersList(const ConfigurationManagerSummary& value) { m_configurationManagersList.push_back(value); return *this; }
    inline ListConfigurationManagersResult& AddConfigurationManagersList(ConfigurationManagerSummary&& value) { m_configurationManagersList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of configuration managers. If
     * there are no additional operations to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfigurationManagersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfigurationManagersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfigurationManagersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfigurationManagersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfigurationManagersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfigurationManagersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationManagerSummary> m_configurationManagersList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
