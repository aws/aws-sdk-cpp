﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/Qualification.h>
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
namespace MTurk
{
namespace Model
{
  class ListWorkersWithQualificationTypeResult
  {
  public:
    AWS_MTURK_API ListWorkersWithQualificationTypeResult();
    AWS_MTURK_API ListWorkersWithQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API ListWorkersWithQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkersWithQualificationTypeResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkersWithQualificationTypeResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkersWithQualificationTypeResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of Qualifications on this page in the filtered results list,
     * equivalent to the number of Qualifications being returned by this call.</p>
     */
    inline int GetNumResults() const{ return m_numResults; }
    inline void SetNumResults(int value) { m_numResults = value; }
    inline ListWorkersWithQualificationTypeResult& WithNumResults(int value) { SetNumResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of Qualification elements returned by this call. </p>
     */
    inline const Aws::Vector<Qualification>& GetQualifications() const{ return m_qualifications; }
    inline void SetQualifications(const Aws::Vector<Qualification>& value) { m_qualifications = value; }
    inline void SetQualifications(Aws::Vector<Qualification>&& value) { m_qualifications = std::move(value); }
    inline ListWorkersWithQualificationTypeResult& WithQualifications(const Aws::Vector<Qualification>& value) { SetQualifications(value); return *this;}
    inline ListWorkersWithQualificationTypeResult& WithQualifications(Aws::Vector<Qualification>&& value) { SetQualifications(std::move(value)); return *this;}
    inline ListWorkersWithQualificationTypeResult& AddQualifications(const Qualification& value) { m_qualifications.push_back(value); return *this; }
    inline ListWorkersWithQualificationTypeResult& AddQualifications(Qualification&& value) { m_qualifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkersWithQualificationTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkersWithQualificationTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkersWithQualificationTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    int m_numResults;

    Aws::Vector<Qualification> m_qualifications;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
