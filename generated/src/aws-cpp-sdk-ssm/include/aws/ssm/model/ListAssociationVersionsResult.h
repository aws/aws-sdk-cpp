/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationVersionInfo.h>
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
namespace SSM
{
namespace Model
{
  class ListAssociationVersionsResult
  {
  public:
    AWS_SSM_API ListAssociationVersionsResult();
    AWS_SSM_API ListAssociationVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ListAssociationVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about all versions of the association for the specified
     * association ID.</p>
     */
    inline const Aws::Vector<AssociationVersionInfo>& GetAssociationVersions() const{ return m_associationVersions; }
    inline void SetAssociationVersions(const Aws::Vector<AssociationVersionInfo>& value) { m_associationVersions = value; }
    inline void SetAssociationVersions(Aws::Vector<AssociationVersionInfo>&& value) { m_associationVersions = std::move(value); }
    inline ListAssociationVersionsResult& WithAssociationVersions(const Aws::Vector<AssociationVersionInfo>& value) { SetAssociationVersions(value); return *this;}
    inline ListAssociationVersionsResult& WithAssociationVersions(Aws::Vector<AssociationVersionInfo>&& value) { SetAssociationVersions(std::move(value)); return *this;}
    inline ListAssociationVersionsResult& AddAssociationVersions(const AssociationVersionInfo& value) { m_associationVersions.push_back(value); return *this; }
    inline ListAssociationVersionsResult& AddAssociationVersions(AssociationVersionInfo&& value) { m_associationVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssociationVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociationVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociationVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssociationVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssociationVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssociationVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationVersionInfo> m_associationVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
