/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/JobEngineVersion.h>
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
namespace MediaConvert
{
namespace Model
{
  class ListVersionsResult
  {
  public:
    AWS_MEDIACONVERT_API ListVersionsResult();
    AWS_MEDIACONVERT_API ListVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Optional. Use this string, provided with the response to a previous request, to
     * request the next batch of Job engine versions.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * Retrieve a JSON array of all available Job engine versions and the date they
     * expire.
     */
    inline const Aws::Vector<JobEngineVersion>& GetVersions() const{ return m_versions; }
    inline void SetVersions(const Aws::Vector<JobEngineVersion>& value) { m_versions = value; }
    inline void SetVersions(Aws::Vector<JobEngineVersion>&& value) { m_versions = std::move(value); }
    inline ListVersionsResult& WithVersions(const Aws::Vector<JobEngineVersion>& value) { SetVersions(value); return *this;}
    inline ListVersionsResult& WithVersions(Aws::Vector<JobEngineVersion>&& value) { SetVersions(std::move(value)); return *this;}
    inline ListVersionsResult& AddVersions(const JobEngineVersion& value) { m_versions.push_back(value); return *this; }
    inline ListVersionsResult& AddVersions(JobEngineVersion&& value) { m_versions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<JobEngineVersion> m_versions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
