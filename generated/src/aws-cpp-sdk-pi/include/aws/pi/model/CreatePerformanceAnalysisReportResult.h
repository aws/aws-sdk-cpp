/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
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
namespace PI
{
namespace Model
{
  class CreatePerformanceAnalysisReportResult
  {
  public:
    AWS_PI_API CreatePerformanceAnalysisReportResult() = default;
    AWS_PI_API CreatePerformanceAnalysisReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API CreatePerformanceAnalysisReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline const Aws::String& GetAnalysisReportId() const { return m_analysisReportId; }
    template<typename AnalysisReportIdT = Aws::String>
    void SetAnalysisReportId(AnalysisReportIdT&& value) { m_analysisReportIdHasBeenSet = true; m_analysisReportId = std::forward<AnalysisReportIdT>(value); }
    template<typename AnalysisReportIdT = Aws::String>
    CreatePerformanceAnalysisReportResult& WithAnalysisReportId(AnalysisReportIdT&& value) { SetAnalysisReportId(std::forward<AnalysisReportIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePerformanceAnalysisReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_analysisReportId;
    bool m_analysisReportIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
