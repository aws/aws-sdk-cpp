﻿/**
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
    AWS_WELLARCHITECTED_API UpdateReviewTemplateResult();
    AWS_WELLARCHITECTED_API UpdateReviewTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API UpdateReviewTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A review template.</p>
     */
    inline const ReviewTemplate& GetReviewTemplate() const{ return m_reviewTemplate; }
    inline void SetReviewTemplate(const ReviewTemplate& value) { m_reviewTemplate = value; }
    inline void SetReviewTemplate(ReviewTemplate&& value) { m_reviewTemplate = std::move(value); }
    inline UpdateReviewTemplateResult& WithReviewTemplate(const ReviewTemplate& value) { SetReviewTemplate(value); return *this;}
    inline UpdateReviewTemplateResult& WithReviewTemplate(ReviewTemplate&& value) { SetReviewTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateReviewTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateReviewTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateReviewTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReviewTemplate m_reviewTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
