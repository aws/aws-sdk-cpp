/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Filter.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeFilterResult
  {
  public:
    AWS_PERSONALIZE_API DescribeFilterResult();
    AWS_PERSONALIZE_API DescribeFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The filter's details.</p>
     */
    inline const Filter& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter's details.</p>
     */
    inline void SetFilter(const Filter& value) { m_filter = value; }

    /**
     * <p>The filter's details.</p>
     */
    inline void SetFilter(Filter&& value) { m_filter = std::move(value); }

    /**
     * <p>The filter's details.</p>
     */
    inline DescribeFilterResult& WithFilter(const Filter& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter's details.</p>
     */
    inline DescribeFilterResult& WithFilter(Filter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Filter m_filter;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
