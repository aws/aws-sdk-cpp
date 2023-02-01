/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/AppAssessment.h>
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

  private:

    AppAssessment m_assessment;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
