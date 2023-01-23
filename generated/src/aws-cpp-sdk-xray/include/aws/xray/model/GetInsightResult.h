/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/Insight.h>
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
namespace XRay
{
namespace Model
{
  class GetInsightResult
  {
  public:
    AWS_XRAY_API GetInsightResult();
    AWS_XRAY_API GetInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary information of an insight.</p>
     */
    inline const Insight& GetInsight() const{ return m_insight; }

    /**
     * <p>The summary information of an insight.</p>
     */
    inline void SetInsight(const Insight& value) { m_insight = value; }

    /**
     * <p>The summary information of an insight.</p>
     */
    inline void SetInsight(Insight&& value) { m_insight = std::move(value); }

    /**
     * <p>The summary information of an insight.</p>
     */
    inline GetInsightResult& WithInsight(const Insight& value) { SetInsight(value); return *this;}

    /**
     * <p>The summary information of an insight.</p>
     */
    inline GetInsightResult& WithInsight(Insight&& value) { SetInsight(std::move(value)); return *this;}

  private:

    Insight m_insight;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
