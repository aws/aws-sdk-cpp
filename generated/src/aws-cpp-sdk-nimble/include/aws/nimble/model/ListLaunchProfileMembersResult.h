﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfileMembership.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListLaunchProfileMembersResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListLaunchProfileMembersResult();
    AWS_NIMBLESTUDIO_API ListLaunchProfileMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListLaunchProfileMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of members.</p>
     */
    inline const Aws::Vector<LaunchProfileMembership>& GetMembers() const{ return m_members; }
    inline void SetMembers(const Aws::Vector<LaunchProfileMembership>& value) { m_members = value; }
    inline void SetMembers(Aws::Vector<LaunchProfileMembership>&& value) { m_members = std::move(value); }
    inline ListLaunchProfileMembersResult& WithMembers(const Aws::Vector<LaunchProfileMembership>& value) { SetMembers(value); return *this;}
    inline ListLaunchProfileMembersResult& WithMembers(Aws::Vector<LaunchProfileMembership>&& value) { SetMembers(std::move(value)); return *this;}
    inline ListLaunchProfileMembersResult& AddMembers(const LaunchProfileMembership& value) { m_members.push_back(value); return *this; }
    inline ListLaunchProfileMembersResult& AddMembers(LaunchProfileMembership&& value) { m_members.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLaunchProfileMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLaunchProfileMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLaunchProfileMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLaunchProfileMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLaunchProfileMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLaunchProfileMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchProfileMembership> m_members;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
