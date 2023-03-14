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
  class StartAppAssessmentResult
  {
  public:
    AWS_RESILIENCEHUB_API StartAppAssessmentResult();
    AWS_RESILIENCEHUB_API StartAppAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API StartAppAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assessment created.</p>
     */
    inline const AppAssessment& GetAssessment() const{ return m_assessment; }

    /**
     * <p>The assessment created.</p>
     */
    inline void SetAssessment(const AppAssessment& value) { m_assessment = value; }

    /**
     * <p>The assessment created.</p>
     */
    inline void SetAssessment(AppAssessment&& value) { m_assessment = std::move(value); }

    /**
     * <p>The assessment created.</p>
     */
    inline StartAppAssessmentResult& WithAssessment(const AppAssessment& value) { SetAssessment(value); return *this;}

    /**
     * <p>The assessment created.</p>
     */
    inline StartAppAssessmentResult& WithAssessment(AppAssessment&& value) { SetAssessment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAppAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAppAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAppAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AppAssessment m_assessment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
