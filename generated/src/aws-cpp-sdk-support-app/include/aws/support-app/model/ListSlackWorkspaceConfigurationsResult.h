﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support-app/model/SlackWorkspaceConfiguration.h>
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
namespace SupportApp
{
namespace Model
{
  class ListSlackWorkspaceConfigurationsResult
  {
  public:
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsResult();
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API ListSlackWorkspaceConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSlackWorkspaceConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSlackWorkspaceConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSlackWorkspaceConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for a Slack workspace.</p>
     */
    inline const Aws::Vector<SlackWorkspaceConfiguration>& GetSlackWorkspaceConfigurations() const{ return m_slackWorkspaceConfigurations; }
    inline void SetSlackWorkspaceConfigurations(const Aws::Vector<SlackWorkspaceConfiguration>& value) { m_slackWorkspaceConfigurations = value; }
    inline void SetSlackWorkspaceConfigurations(Aws::Vector<SlackWorkspaceConfiguration>&& value) { m_slackWorkspaceConfigurations = std::move(value); }
    inline ListSlackWorkspaceConfigurationsResult& WithSlackWorkspaceConfigurations(const Aws::Vector<SlackWorkspaceConfiguration>& value) { SetSlackWorkspaceConfigurations(value); return *this;}
    inline ListSlackWorkspaceConfigurationsResult& WithSlackWorkspaceConfigurations(Aws::Vector<SlackWorkspaceConfiguration>&& value) { SetSlackWorkspaceConfigurations(std::move(value)); return *this;}
    inline ListSlackWorkspaceConfigurationsResult& AddSlackWorkspaceConfigurations(const SlackWorkspaceConfiguration& value) { m_slackWorkspaceConfigurations.push_back(value); return *this; }
    inline ListSlackWorkspaceConfigurationsResult& AddSlackWorkspaceConfigurations(SlackWorkspaceConfiguration&& value) { m_slackWorkspaceConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSlackWorkspaceConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSlackWorkspaceConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSlackWorkspaceConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SlackWorkspaceConfiguration> m_slackWorkspaceConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
