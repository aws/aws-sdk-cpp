/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/AnswerSummary.h>
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
  /**
   * <p>Output of a list answers call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListAnswersOutput">AWS
   * API Reference</a></p>
   */
  class ListAnswersResult
  {
  public:
    AWS_WELLARCHITECTED_API ListAnswersResult();
    AWS_WELLARCHITECTED_API ListAnswersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListAnswersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline ListAnswersResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ListAnswersResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ListAnswersResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumber = value; }

    
    inline ListAnswersResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAlias.assign(value); }

    
    inline ListAnswersResult& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline ListAnswersResult& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline ListAnswersResult& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArn = value; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArn = std::move(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArn.assign(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ListAnswersResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ListAnswersResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ListAnswersResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    
    inline const Aws::Vector<AnswerSummary>& GetAnswerSummaries() const{ return m_answerSummaries; }

    
    inline void SetAnswerSummaries(const Aws::Vector<AnswerSummary>& value) { m_answerSummaries = value; }

    
    inline void SetAnswerSummaries(Aws::Vector<AnswerSummary>&& value) { m_answerSummaries = std::move(value); }

    
    inline ListAnswersResult& WithAnswerSummaries(const Aws::Vector<AnswerSummary>& value) { SetAnswerSummaries(value); return *this;}

    
    inline ListAnswersResult& WithAnswerSummaries(Aws::Vector<AnswerSummary>&& value) { SetAnswerSummaries(std::move(value)); return *this;}

    
    inline ListAnswersResult& AddAnswerSummaries(const AnswerSummary& value) { m_answerSummaries.push_back(value); return *this; }

    
    inline ListAnswersResult& AddAnswerSummaries(AnswerSummary&& value) { m_answerSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAnswersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAnswersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAnswersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workloadId;

    int m_milestoneNumber;

    Aws::String m_lensAlias;

    Aws::String m_lensArn;

    Aws::Vector<AnswerSummary> m_answerSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
