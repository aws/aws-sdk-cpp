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
    AWS_WELLARCHITECTED_API GetAnswerResult() = default;
    AWS_WELLARCHITECTED_API GetAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    GetAnswerResult& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMilestoneNumber() const { return m_milestoneNumber; }
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }
    inline GetAnswerResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    GetAnswerResult& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    GetAnswerResult& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Answer& GetAnswer() const { return m_answer; }
    template<typename AnswerT = Answer>
    void SetAnswer(AnswerT&& value) { m_answerHasBeenSet = true; m_answer = std::forward<AnswerT>(value); }
    template<typename AnswerT = Answer>
    GetAnswerResult& WithAnswer(AnswerT&& value) { SetAnswer(std::forward<AnswerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAnswerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    int m_milestoneNumber{0};
    bool m_milestoneNumberHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Answer m_answer;
    bool m_answerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
