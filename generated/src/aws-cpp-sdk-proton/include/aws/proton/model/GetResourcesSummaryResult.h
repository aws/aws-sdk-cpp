/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/model/CountsSummary.h>
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
namespace Proton
{
namespace Model
{
  class GetResourcesSummaryResult
  {
  public:
    AWS_PROTON_API GetResourcesSummaryResult();
    AWS_PROTON_API GetResourcesSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API GetResourcesSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary counts of each Proton resource type.</p>
     */
    inline const CountsSummary& GetCounts() const{ return m_counts; }

    /**
     * <p>Summary counts of each Proton resource type.</p>
     */
    inline void SetCounts(const CountsSummary& value) { m_counts = value; }

    /**
     * <p>Summary counts of each Proton resource type.</p>
     */
    inline void SetCounts(CountsSummary&& value) { m_counts = std::move(value); }

    /**
     * <p>Summary counts of each Proton resource type.</p>
     */
    inline GetResourcesSummaryResult& WithCounts(const CountsSummary& value) { SetCounts(value); return *this;}

    /**
     * <p>Summary counts of each Proton resource type.</p>
     */
    inline GetResourcesSummaryResult& WithCounts(CountsSummary&& value) { SetCounts(std::move(value)); return *this;}

  private:

    CountsSummary m_counts;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
