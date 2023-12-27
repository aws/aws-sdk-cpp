/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/Application.h>
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
  class ListApplicationsResult
  {
  public:
    AWS_QBUSINESS_API ListApplicationsResult();
    AWS_QBUSINESS_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applications = value; }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applications = std::move(value); }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline ListApplicationsResult& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline ListApplicationsResult& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline ListApplicationsResult& AddApplications(const Application& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>An array of summary information on the configuration of one or more Amazon Q
     * applications.</p>
     */
    inline ListApplicationsResult& AddApplications(Application&& value) { m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Q returns this token. You can use this
     * token in a subsequent request to retrieve the next set of applications.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Application> m_applications;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
