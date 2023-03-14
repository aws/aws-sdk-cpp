/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/Canary.h>
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
namespace Synthetics
{
namespace Model
{
  class GetCanaryResult
  {
  public:
    AWS_SYNTHETICS_API GetCanaryResult();
    AWS_SYNTHETICS_API GetCanaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API GetCanaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the full information about the canary.</p>
     */
    inline const Canary& GetCanary() const{ return m_canary; }

    /**
     * <p>A structure that contains the full information about the canary.</p>
     */
    inline void SetCanary(const Canary& value) { m_canary = value; }

    /**
     * <p>A structure that contains the full information about the canary.</p>
     */
    inline void SetCanary(Canary&& value) { m_canary = std::move(value); }

    /**
     * <p>A structure that contains the full information about the canary.</p>
     */
    inline GetCanaryResult& WithCanary(const Canary& value) { SetCanary(value); return *this;}

    /**
     * <p>A structure that contains the full information about the canary.</p>
     */
    inline GetCanaryResult& WithCanary(Canary&& value) { SetCanary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCanaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCanaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCanaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Canary m_canary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
