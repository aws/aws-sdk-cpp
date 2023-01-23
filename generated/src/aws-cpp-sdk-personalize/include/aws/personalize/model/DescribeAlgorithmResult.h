/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Algorithm.h>
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
  class DescribeAlgorithmResult
  {
  public:
    AWS_PERSONALIZE_API DescribeAlgorithmResult();
    AWS_PERSONALIZE_API DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline const Algorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline void SetAlgorithm(const Algorithm& value) { m_algorithm = value; }

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline void SetAlgorithm(Algorithm&& value) { m_algorithm = std::move(value); }

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithm(const Algorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithm(Algorithm&& value) { SetAlgorithm(std::move(value)); return *this;}

  private:

    Algorithm m_algorithm;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
