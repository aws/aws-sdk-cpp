/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/AppAssessment.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeAppAssessmentResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppAssessmentResult();
    AWS_RESILIENCEHUB_API DescribeAppAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeAppAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assessment for an Resilience Hub application, returned as an object. This
     * object includes Amazon Resource Names (ARNs), compliance information, compliance
     * status, cost, messages, resiliency scores, and more.</p>
     */
    inline const AppAssessment& GetAssessment() const{ return m_assessment; }

    /**
     * <p>The assessment for an Resilience Hub application, returned as an object. This
     * object includes Amazon Resource Names (ARNs), compliance information, compliance
     * status, cost, messages, resiliency scores, and more.</p>
     */
    inline void SetAssessment(const AppAssessment& value) { m_assessment = value; }

    /**
     * <p>The assessment for an Resilience Hub application, returned as an object. This
     * object includes Amazon Resource Names (ARNs), compliance information, compliance
     * status, cost, messages, resiliency scores, and more.</p>
     */
    inline void SetAssessment(AppAssessment&& value) { m_assessment = std::move(value); }

    /**
     * <p>The assessment for an Resilience Hub application, returned as an object. This
     * object includes Amazon Resource Names (ARNs), compliance information, compliance
     * status, cost, messages, resiliency scores, and more.</p>
     */
    inline DescribeAppAssessmentResult& WithAssessment(const AppAssessment& value) { SetAssessment(value); return *this;}

    /**
     * <p>The assessment for an Resilience Hub application, returned as an object. This
     * object includes Amazon Resource Names (ARNs), compliance information, compliance
     * status, cost, messages, resiliency scores, and more.</p>
     */
    inline DescribeAppAssessmentResult& WithAssessment(AppAssessment&& value) { SetAssessment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppAssessment m_assessment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
