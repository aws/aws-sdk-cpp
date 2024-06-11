﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfile.h>
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
  class ListLaunchProfilesResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListLaunchProfilesResult();
    AWS_NIMBLESTUDIO_API ListLaunchProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListLaunchProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of launch profiles.</p>
     */
    inline const Aws::Vector<LaunchProfile>& GetLaunchProfiles() const{ return m_launchProfiles; }
    inline void SetLaunchProfiles(const Aws::Vector<LaunchProfile>& value) { m_launchProfiles = value; }
    inline void SetLaunchProfiles(Aws::Vector<LaunchProfile>&& value) { m_launchProfiles = std::move(value); }
    inline ListLaunchProfilesResult& WithLaunchProfiles(const Aws::Vector<LaunchProfile>& value) { SetLaunchProfiles(value); return *this;}
    inline ListLaunchProfilesResult& WithLaunchProfiles(Aws::Vector<LaunchProfile>&& value) { SetLaunchProfiles(std::move(value)); return *this;}
    inline ListLaunchProfilesResult& AddLaunchProfiles(const LaunchProfile& value) { m_launchProfiles.push_back(value); return *this; }
    inline ListLaunchProfilesResult& AddLaunchProfiles(LaunchProfile&& value) { m_launchProfiles.push_back(std::move(value)); return *this; }
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
    inline ListLaunchProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLaunchProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLaunchProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLaunchProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLaunchProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLaunchProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LaunchProfile> m_launchProfiles;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
