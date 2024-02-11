/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ProfileShareSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  class ListProfileSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListProfileSharesResult();
    AWS_WELLARCHITECTED_API ListProfileSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListProfileSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Profile share summaries.</p>
     */
    inline const Aws::Vector<ProfileShareSummary>& GetProfileShareSummaries() const{ return m_profileShareSummaries; }

    /**
     * <p>Profile share summaries.</p>
     */
    inline void SetProfileShareSummaries(const Aws::Vector<ProfileShareSummary>& value) { m_profileShareSummaries = value; }

    /**
     * <p>Profile share summaries.</p>
     */
    inline void SetProfileShareSummaries(Aws::Vector<ProfileShareSummary>&& value) { m_profileShareSummaries = std::move(value); }

    /**
     * <p>Profile share summaries.</p>
     */
    inline ListProfileSharesResult& WithProfileShareSummaries(const Aws::Vector<ProfileShareSummary>& value) { SetProfileShareSummaries(value); return *this;}

    /**
     * <p>Profile share summaries.</p>
     */
    inline ListProfileSharesResult& WithProfileShareSummaries(Aws::Vector<ProfileShareSummary>&& value) { SetProfileShareSummaries(std::move(value)); return *this;}

    /**
     * <p>Profile share summaries.</p>
     */
    inline ListProfileSharesResult& AddProfileShareSummaries(const ProfileShareSummary& value) { m_profileShareSummaries.push_back(value); return *this; }

    /**
     * <p>Profile share summaries.</p>
     */
    inline ListProfileSharesResult& AddProfileShareSummaries(ProfileShareSummary&& value) { m_profileShareSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListProfileSharesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfileSharesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfileSharesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProfileSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProfileSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProfileSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ProfileShareSummary> m_profileShareSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
