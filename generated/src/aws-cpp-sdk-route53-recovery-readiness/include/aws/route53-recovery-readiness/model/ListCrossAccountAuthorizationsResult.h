/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class ListCrossAccountAuthorizationsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListCrossAccountAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of cross-account authorizations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrossAccountAuthorizations() const{ return m_crossAccountAuthorizations; }
    inline void SetCrossAccountAuthorizations(const Aws::Vector<Aws::String>& value) { m_crossAccountAuthorizations = value; }
    inline void SetCrossAccountAuthorizations(Aws::Vector<Aws::String>&& value) { m_crossAccountAuthorizations = std::move(value); }
    inline ListCrossAccountAuthorizationsResult& WithCrossAccountAuthorizations(const Aws::Vector<Aws::String>& value) { SetCrossAccountAuthorizations(value); return *this;}
    inline ListCrossAccountAuthorizationsResult& WithCrossAccountAuthorizations(Aws::Vector<Aws::String>&& value) { SetCrossAccountAuthorizations(std::move(value)); return *this;}
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(const Aws::String& value) { m_crossAccountAuthorizations.push_back(value); return *this; }
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(Aws::String&& value) { m_crossAccountAuthorizations.push_back(std::move(value)); return *this; }
    inline ListCrossAccountAuthorizationsResult& AddCrossAccountAuthorizations(const char* value) { m_crossAccountAuthorizations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCrossAccountAuthorizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCrossAccountAuthorizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCrossAccountAuthorizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCrossAccountAuthorizationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCrossAccountAuthorizationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCrossAccountAuthorizationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_crossAccountAuthorizations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
