/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ReviewTemplateSummary.h>
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
  class ListReviewTemplatesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListReviewTemplatesResult();
    AWS_WELLARCHITECTED_API ListReviewTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListReviewTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of review templates.</p>
     */
    inline const Aws::Vector<ReviewTemplateSummary>& GetReviewTemplates() const{ return m_reviewTemplates; }

    /**
     * <p>List of review templates.</p>
     */
    inline void SetReviewTemplates(const Aws::Vector<ReviewTemplateSummary>& value) { m_reviewTemplates = value; }

    /**
     * <p>List of review templates.</p>
     */
    inline void SetReviewTemplates(Aws::Vector<ReviewTemplateSummary>&& value) { m_reviewTemplates = std::move(value); }

    /**
     * <p>List of review templates.</p>
     */
    inline ListReviewTemplatesResult& WithReviewTemplates(const Aws::Vector<ReviewTemplateSummary>& value) { SetReviewTemplates(value); return *this;}

    /**
     * <p>List of review templates.</p>
     */
    inline ListReviewTemplatesResult& WithReviewTemplates(Aws::Vector<ReviewTemplateSummary>&& value) { SetReviewTemplates(std::move(value)); return *this;}

    /**
     * <p>List of review templates.</p>
     */
    inline ListReviewTemplatesResult& AddReviewTemplates(const ReviewTemplateSummary& value) { m_reviewTemplates.push_back(value); return *this; }

    /**
     * <p>List of review templates.</p>
     */
    inline ListReviewTemplatesResult& AddReviewTemplates(ReviewTemplateSummary&& value) { m_reviewTemplates.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListReviewTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListReviewTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListReviewTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListReviewTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListReviewTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListReviewTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ReviewTemplateSummary> m_reviewTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
