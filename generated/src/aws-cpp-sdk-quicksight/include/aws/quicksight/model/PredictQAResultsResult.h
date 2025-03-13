/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QAResult.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace QuickSight
{
namespace Model
{
  class PredictQAResultsResult
  {
  public:
    AWS_QUICKSIGHT_API PredictQAResultsResult() = default;
    AWS_QUICKSIGHT_API PredictQAResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API PredictQAResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The primary visual response.</p>
     */
    inline const QAResult& GetPrimaryResult() const { return m_primaryResult; }
    template<typename PrimaryResultT = QAResult>
    void SetPrimaryResult(PrimaryResultT&& value) { m_primaryResultHasBeenSet = true; m_primaryResult = std::forward<PrimaryResultT>(value); }
    template<typename PrimaryResultT = QAResult>
    PredictQAResultsResult& WithPrimaryResult(PrimaryResultT&& value) { SetPrimaryResult(std::forward<PrimaryResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional visual responses.</p>
     */
    inline const Aws::Vector<QAResult>& GetAdditionalResults() const { return m_additionalResults; }
    template<typename AdditionalResultsT = Aws::Vector<QAResult>>
    void SetAdditionalResults(AdditionalResultsT&& value) { m_additionalResultsHasBeenSet = true; m_additionalResults = std::forward<AdditionalResultsT>(value); }
    template<typename AdditionalResultsT = Aws::Vector<QAResult>>
    PredictQAResultsResult& WithAdditionalResults(AdditionalResultsT&& value) { SetAdditionalResults(std::forward<AdditionalResultsT>(value)); return *this;}
    template<typename AdditionalResultsT = QAResult>
    PredictQAResultsResult& AddAdditionalResults(AdditionalResultsT&& value) { m_additionalResultsHasBeenSet = true; m_additionalResults.emplace_back(std::forward<AdditionalResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PredictQAResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline PredictQAResultsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    QAResult m_primaryResult;
    bool m_primaryResultHasBeenSet = false;

    Aws::Vector<QAResult> m_additionalResults;
    bool m_additionalResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
