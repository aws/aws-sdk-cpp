﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support-app/model/SlackChannelConfiguration.h>
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
  class ListSlackChannelConfigurationsResult
  {
  public:
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult();
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORTAPP_API ListSlackChannelConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The point where pagination should resume when the response returns only
     * partial results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSlackChannelConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSlackChannelConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSlackChannelConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configurations for a Slack channel.</p>
     */
    inline const Aws::Vector<SlackChannelConfiguration>& GetSlackChannelConfigurations() const{ return m_slackChannelConfigurations; }
    inline void SetSlackChannelConfigurations(const Aws::Vector<SlackChannelConfiguration>& value) { m_slackChannelConfigurations = value; }
    inline void SetSlackChannelConfigurations(Aws::Vector<SlackChannelConfiguration>&& value) { m_slackChannelConfigurations = std::move(value); }
    inline ListSlackChannelConfigurationsResult& WithSlackChannelConfigurations(const Aws::Vector<SlackChannelConfiguration>& value) { SetSlackChannelConfigurations(value); return *this;}
    inline ListSlackChannelConfigurationsResult& WithSlackChannelConfigurations(Aws::Vector<SlackChannelConfiguration>&& value) { SetSlackChannelConfigurations(std::move(value)); return *this;}
    inline ListSlackChannelConfigurationsResult& AddSlackChannelConfigurations(const SlackChannelConfiguration& value) { m_slackChannelConfigurations.push_back(value); return *this; }
    inline ListSlackChannelConfigurationsResult& AddSlackChannelConfigurations(SlackChannelConfiguration&& value) { m_slackChannelConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSlackChannelConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSlackChannelConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSlackChannelConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SlackChannelConfiguration> m_slackChannelConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
