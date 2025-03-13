/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/Qualification.h>
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
namespace MTurk
{
namespace Model
{
  class GetQualificationScoreResult
  {
  public:
    AWS_MTURK_API GetQualificationScoreResult() = default;
    AWS_MTURK_API GetQualificationScoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetQualificationScoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Qualification data structure of the Qualification assigned to a user,
     * including the Qualification type and the value (score). </p>
     */
    inline const Qualification& GetQualification() const { return m_qualification; }
    template<typename QualificationT = Qualification>
    void SetQualification(QualificationT&& value) { m_qualificationHasBeenSet = true; m_qualification = std::forward<QualificationT>(value); }
    template<typename QualificationT = Qualification>
    GetQualificationScoreResult& WithQualification(QualificationT&& value) { SetQualification(std::forward<QualificationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetQualificationScoreResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Qualification m_qualification;
    bool m_qualificationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
