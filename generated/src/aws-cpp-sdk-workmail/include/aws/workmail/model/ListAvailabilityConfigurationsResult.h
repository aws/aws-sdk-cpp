﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AvailabilityConfiguration.h>
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
namespace WorkMail
{
namespace Model
{
  class ListAvailabilityConfigurationsResult
  {
  public:
    AWS_WORKMAIL_API ListAvailabilityConfigurationsResult();
    AWS_WORKMAIL_API ListAvailabilityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListAvailabilityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>AvailabilityConfiguration</code>'s that exist for the
     * specified WorkMail organization.</p>
     */
    inline const Aws::Vector<AvailabilityConfiguration>& GetAvailabilityConfigurations() const{ return m_availabilityConfigurations; }
    inline void SetAvailabilityConfigurations(const Aws::Vector<AvailabilityConfiguration>& value) { m_availabilityConfigurations = value; }
    inline void SetAvailabilityConfigurations(Aws::Vector<AvailabilityConfiguration>&& value) { m_availabilityConfigurations = std::move(value); }
    inline ListAvailabilityConfigurationsResult& WithAvailabilityConfigurations(const Aws::Vector<AvailabilityConfiguration>& value) { SetAvailabilityConfigurations(value); return *this;}
    inline ListAvailabilityConfigurationsResult& WithAvailabilityConfigurations(Aws::Vector<AvailabilityConfiguration>&& value) { SetAvailabilityConfigurations(std::move(value)); return *this;}
    inline ListAvailabilityConfigurationsResult& AddAvailabilityConfigurations(const AvailabilityConfiguration& value) { m_availabilityConfigurations.push_back(value); return *this; }
    inline ListAvailabilityConfigurationsResult& AddAvailabilityConfigurations(AvailabilityConfiguration&& value) { m_availabilityConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no further results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAvailabilityConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAvailabilityConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAvailabilityConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAvailabilityConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAvailabilityConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAvailabilityConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AvailabilityConfiguration> m_availabilityConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
