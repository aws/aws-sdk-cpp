/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/Answer.h>
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
   * <p>Output of a get answer call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetAnswerOutput">AWS
   * API Reference</a></p>
   */
  class GetAnswerResult
  {
  public:
    AWS_WELLARCHITECTED_API GetAnswerResult();
    AWS_WELLARCHITECTED_API GetAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline GetAnswerResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline GetAnswerResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline GetAnswerResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumber = value; }

    
    inline GetAnswerResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAlias.assign(value); }

    
    inline GetAnswerResult& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline GetAnswerResult& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline GetAnswerResult& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


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
    inline GetAnswerResult& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline GetAnswerResult& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline GetAnswerResult& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    
    inline const Answer& GetAnswer() const{ return m_answer; }

    
    inline void SetAnswer(const Answer& value) { m_answer = value; }

    
    inline void SetAnswer(Answer&& value) { m_answer = std::move(value); }

    
    inline GetAnswerResult& WithAnswer(const Answer& value) { SetAnswer(value); return *this;}

    
    inline GetAnswerResult& WithAnswer(Answer&& value) { SetAnswer(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;

    int m_milestoneNumber;

    Aws::String m_lensAlias;

    Aws::String m_lensArn;

    Answer m_answer;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
