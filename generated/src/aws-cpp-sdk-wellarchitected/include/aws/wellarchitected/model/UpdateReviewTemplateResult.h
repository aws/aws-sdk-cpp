/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ReviewTemplate.h>
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
namespace WellArchitected
{
namespace Model
{
  class UpdateReviewTemplateResult
  {
  public:
    AWS_WELLARCHITECTED_API UpdateReviewTemplateResult() = default;
    AWS_WELLARCHITECTED_API UpdateReviewTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateReviewTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A review template.</p>
     */
    inline const ReviewTemplate& GetReviewTemplate() const { return m_reviewTemplate; }
    template<typename ReviewTemplateT = ReviewTemplate>
    void SetReviewTemplate(ReviewTemplateT&& value) { m_reviewTemplateHasBeenSet = true; m_reviewTemplate = std::forward<ReviewTemplateT>(value); }
    template<typename ReviewTemplateT = ReviewTemplate>
    UpdateReviewTemplateResult& WithReviewTemplate(ReviewTemplateT&& value) { SetReviewTemplate(std::forward<ReviewTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateReviewTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReviewTemplate m_reviewTemplate;
    bool m_reviewTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
