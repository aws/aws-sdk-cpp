/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class CreateLongTermPricingResult
  {
  public:
    AWS_SNOWBALL_API CreateLongTermPricingResult() = default;
    AWS_SNOWBALL_API CreateLongTermPricingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateLongTermPricingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const { return m_longTermPricingId; }
    template<typename LongTermPricingIdT = Aws::String>
    void SetLongTermPricingId(LongTermPricingIdT&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::forward<LongTermPricingIdT>(value); }
    template<typename LongTermPricingIdT = Aws::String>
    CreateLongTermPricingResult& WithLongTermPricingId(LongTermPricingIdT&& value) { SetLongTermPricingId(std::forward<LongTermPricingIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLongTermPricingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
