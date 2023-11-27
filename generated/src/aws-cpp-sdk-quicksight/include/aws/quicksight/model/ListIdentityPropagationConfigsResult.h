/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AuthorizedTargetsByService.h>
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
namespace QuickSight
{
namespace Model
{
  class ListIdentityPropagationConfigsResult
  {
  public:
    AWS_QUICKSIGHT_API ListIdentityPropagationConfigsResult();
    AWS_QUICKSIGHT_API ListIdentityPropagationConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListIdentityPropagationConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline const Aws::Vector<AuthorizedTargetsByService>& GetServices() const{ return m_services; }

    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline void SetServices(const Aws::Vector<AuthorizedTargetsByService>& value) { m_services = value; }

    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline void SetServices(Aws::Vector<AuthorizedTargetsByService>&& value) { m_services = std::move(value); }

    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline ListIdentityPropagationConfigsResult& WithServices(const Aws::Vector<AuthorizedTargetsByService>& value) { SetServices(value); return *this;}

    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline ListIdentityPropagationConfigsResult& WithServices(Aws::Vector<AuthorizedTargetsByService>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline ListIdentityPropagationConfigsResult& AddServices(const AuthorizedTargetsByService& value) { m_services.push_back(value); return *this; }

    /**
     * <p>A list of services and their authorized targets that the Amazon QuickSight
     * IAM Identity Center application can access.</p>
     */
    inline ListIdentityPropagationConfigsResult& AddServices(AuthorizedTargetsByService&& value) { m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIdentityPropagationConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIdentityPropagationConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListIdentityPropagationConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListIdentityPropagationConfigsResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIdentityPropagationConfigsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIdentityPropagationConfigsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIdentityPropagationConfigsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AuthorizedTargetsByService> m_services;

    Aws::String m_nextToken;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
