﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/WebExperience.h>
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
namespace QBusiness
{
namespace Model
{
  class ListWebExperiencesResult
  {
  public:
    AWS_QBUSINESS_API ListWebExperiencesResult();
    AWS_QBUSINESS_API ListWebExperiencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListWebExperiencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of summary information for one or more Amazon Q Business
     * experiences.</p>
     */
    inline const Aws::Vector<WebExperience>& GetWebExperiences() const{ return m_webExperiences; }
    inline void SetWebExperiences(const Aws::Vector<WebExperience>& value) { m_webExperiences = value; }
    inline void SetWebExperiences(Aws::Vector<WebExperience>&& value) { m_webExperiences = std::move(value); }
    inline ListWebExperiencesResult& WithWebExperiences(const Aws::Vector<WebExperience>& value) { SetWebExperiences(value); return *this;}
    inline ListWebExperiencesResult& WithWebExperiences(Aws::Vector<WebExperience>&& value) { SetWebExperiences(std::move(value)); return *this;}
    inline ListWebExperiencesResult& AddWebExperiences(const WebExperience& value) { m_webExperiences.push_back(value); return *this; }
    inline ListWebExperiencesResult& AddWebExperiences(WebExperience&& value) { m_webExperiences.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token, which you
     * can use in a later request to list the next set of messages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWebExperiencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWebExperiencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWebExperiencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWebExperiencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWebExperiencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWebExperiencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WebExperience> m_webExperiences;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
