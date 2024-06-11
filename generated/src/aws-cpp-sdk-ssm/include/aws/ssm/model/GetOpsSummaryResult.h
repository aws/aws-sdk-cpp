/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/OpsEntity.h>
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
  class GetOpsSummaryResult
  {
  public:
    AWS_SSM_API GetOpsSummaryResult();
    AWS_SSM_API GetOpsSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetOpsSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of aggregated details and filtered OpsData.</p>
     */
    inline const Aws::Vector<OpsEntity>& GetEntities() const{ return m_entities; }
    inline void SetEntities(const Aws::Vector<OpsEntity>& value) { m_entities = value; }
    inline void SetEntities(Aws::Vector<OpsEntity>&& value) { m_entities = std::move(value); }
    inline GetOpsSummaryResult& WithEntities(const Aws::Vector<OpsEntity>& value) { SetEntities(value); return *this;}
    inline GetOpsSummaryResult& WithEntities(Aws::Vector<OpsEntity>&& value) { SetEntities(std::move(value)); return *this;}
    inline GetOpsSummaryResult& AddEntities(const OpsEntity& value) { m_entities.push_back(value); return *this; }
    inline GetOpsSummaryResult& AddEntities(OpsEntity&& value) { m_entities.push_back(std::move(value)); return *this; }
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
    inline GetOpsSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetOpsSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetOpsSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOpsSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOpsSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOpsSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OpsEntity> m_entities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
