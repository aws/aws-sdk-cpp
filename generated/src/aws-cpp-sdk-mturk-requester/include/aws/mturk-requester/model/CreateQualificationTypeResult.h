/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/model/QualificationType.h>
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
  class CreateQualificationTypeResult
  {
  public:
    AWS_MTURK_API CreateQualificationTypeResult() = default;
    AWS_MTURK_API CreateQualificationTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API CreateQualificationTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The created Qualification type, returned as a QualificationType data
     * structure.</p>
     */
    inline const QualificationType& GetQualificationType() const { return m_qualificationType; }
    template<typename QualificationTypeT = QualificationType>
    void SetQualificationType(QualificationTypeT&& value) { m_qualificationTypeHasBeenSet = true; m_qualificationType = std::forward<QualificationTypeT>(value); }
    template<typename QualificationTypeT = QualificationType>
    CreateQualificationTypeResult& WithQualificationType(QualificationTypeT&& value) { SetQualificationType(std::forward<QualificationTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateQualificationTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    QualificationType m_qualificationType;
    bool m_qualificationTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
