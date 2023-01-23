/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensReviewReport.h>
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
   * <p>Output of a get lens review report call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewReportOutput">AWS
   * API Reference</a></p>
   */
  class GetLensReviewReportResult
  {
  public:
    AWS_WELLARCHITECTED_API GetLensReviewReportResult();
    AWS_WELLARCHITECTED_API GetLensReviewReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetLensReviewReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline GetLensReviewReportResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline GetLensReviewReportResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline GetLensReviewReportResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumber = value; }

    
    inline GetLensReviewReportResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}


    
    inline const LensReviewReport& GetLensReviewReport() const{ return m_lensReviewReport; }

    
    inline void SetLensReviewReport(const LensReviewReport& value) { m_lensReviewReport = value; }

    
    inline void SetLensReviewReport(LensReviewReport&& value) { m_lensReviewReport = std::move(value); }

    
    inline GetLensReviewReportResult& WithLensReviewReport(const LensReviewReport& value) { SetLensReviewReport(value); return *this;}

    
    inline GetLensReviewReportResult& WithLensReviewReport(LensReviewReport&& value) { SetLensReviewReport(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;

    int m_milestoneNumber;

    LensReviewReport m_lensReviewReport;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
