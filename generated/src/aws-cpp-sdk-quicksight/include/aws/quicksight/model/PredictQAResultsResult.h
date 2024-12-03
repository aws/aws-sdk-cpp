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
    AWS_QUICKSIGHT_API PredictQAResultsResult();
    AWS_QUICKSIGHT_API PredictQAResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API PredictQAResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The primary visual response.</p>
     */
    inline const QAResult& GetPrimaryResult() const{ return m_primaryResult; }
    inline void SetPrimaryResult(const QAResult& value) { m_primaryResult = value; }
    inline void SetPrimaryResult(QAResult&& value) { m_primaryResult = std::move(value); }
    inline PredictQAResultsResult& WithPrimaryResult(const QAResult& value) { SetPrimaryResult(value); return *this;}
    inline PredictQAResultsResult& WithPrimaryResult(QAResult&& value) { SetPrimaryResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional visual responses.</p>
     */
    inline const Aws::Vector<QAResult>& GetAdditionalResults() const{ return m_additionalResults; }
    inline void SetAdditionalResults(const Aws::Vector<QAResult>& value) { m_additionalResults = value; }
    inline void SetAdditionalResults(Aws::Vector<QAResult>&& value) { m_additionalResults = std::move(value); }
    inline PredictQAResultsResult& WithAdditionalResults(const Aws::Vector<QAResult>& value) { SetAdditionalResults(value); return *this;}
    inline PredictQAResultsResult& WithAdditionalResults(Aws::Vector<QAResult>&& value) { SetAdditionalResults(std::move(value)); return *this;}
    inline PredictQAResultsResult& AddAdditionalResults(const QAResult& value) { m_additionalResults.push_back(value); return *this; }
    inline PredictQAResultsResult& AddAdditionalResults(QAResult&& value) { m_additionalResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PredictQAResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PredictQAResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PredictQAResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline PredictQAResultsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    QAResult m_primaryResult;

    Aws::Vector<QAResult> m_additionalResults;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
