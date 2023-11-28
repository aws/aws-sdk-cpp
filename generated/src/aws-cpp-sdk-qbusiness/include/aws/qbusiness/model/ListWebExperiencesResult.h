/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListWebExperiencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListWebExperiencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token, which you can use
     * in a later request to list the next set of messages.</p>
     */
    inline ListWebExperiencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline const Aws::Vector<WebExperience>& GetWebExperiences() const{ return m_webExperiences; }

    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline void SetWebExperiences(const Aws::Vector<WebExperience>& value) { m_webExperiences = value; }

    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline void SetWebExperiences(Aws::Vector<WebExperience>&& value) { m_webExperiences = std::move(value); }

    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline ListWebExperiencesResult& WithWebExperiences(const Aws::Vector<WebExperience>& value) { SetWebExperiences(value); return *this;}

    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline ListWebExperiencesResult& WithWebExperiences(Aws::Vector<WebExperience>&& value) { SetWebExperiences(std::move(value)); return *this;}

    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline ListWebExperiencesResult& AddWebExperiences(const WebExperience& value) { m_webExperiences.push_back(value); return *this; }

    /**
     * <p>An array of summary information for one or more Amazon Q experiences.</p>
     */
    inline ListWebExperiencesResult& AddWebExperiences(WebExperience&& value) { m_webExperiences.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWebExperiencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWebExperiencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWebExperiencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<WebExperience> m_webExperiences;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
