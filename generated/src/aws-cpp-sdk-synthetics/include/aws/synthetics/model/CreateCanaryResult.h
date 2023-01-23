/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/Canary.h>
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
namespace Synthetics
{
namespace Model
{
  class CreateCanaryResult
  {
  public:
    AWS_SYNTHETICS_API CreateCanaryResult();
    AWS_SYNTHETICS_API CreateCanaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API CreateCanaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full details about the canary you have created.</p>
     */
    inline const Canary& GetCanary() const{ return m_canary; }

    /**
     * <p>The full details about the canary you have created.</p>
     */
    inline void SetCanary(const Canary& value) { m_canary = value; }

    /**
     * <p>The full details about the canary you have created.</p>
     */
    inline void SetCanary(Canary&& value) { m_canary = std::move(value); }

    /**
     * <p>The full details about the canary you have created.</p>
     */
    inline CreateCanaryResult& WithCanary(const Canary& value) { SetCanary(value); return *this;}

    /**
     * <p>The full details about the canary you have created.</p>
     */
    inline CreateCanaryResult& WithCanary(Canary&& value) { SetCanary(std::move(value)); return *this;}

  private:

    Canary m_canary;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
