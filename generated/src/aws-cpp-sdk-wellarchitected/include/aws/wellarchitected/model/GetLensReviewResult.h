/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensReview.h>
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
   * <p>Output of a get lens review call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/GetLensReviewOutput">AWS
   * API Reference</a></p>
   */
  class GetLensReviewResult
  {
  public:
    AWS_WELLARCHITECTED_API GetLensReviewResult();
    AWS_WELLARCHITECTED_API GetLensReviewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetLensReviewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadId.assign(value); }

    
    inline GetLensReviewResult& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline GetLensReviewResult& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline GetLensReviewResult& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline int GetMilestoneNumber() const{ return m_milestoneNumber; }

    
    inline void SetMilestoneNumber(int value) { m_milestoneNumber = value; }

    
    inline GetLensReviewResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}


    
    inline const LensReview& GetLensReview() const{ return m_lensReview; }

    
    inline void SetLensReview(const LensReview& value) { m_lensReview = value; }

    
    inline void SetLensReview(LensReview&& value) { m_lensReview = std::move(value); }

    
    inline GetLensReviewResult& WithLensReview(const LensReview& value) { SetLensReview(value); return *this;}

    
    inline GetLensReviewResult& WithLensReview(LensReview&& value) { SetLensReview(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;

    int m_milestoneNumber;

    LensReview m_lensReview;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
