/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  class MeterUsageResult
  {
  public:
    AWS_MARKETPLACEMETERING_API MeterUsageResult() = default;
    AWS_MARKETPLACEMETERING_API MeterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API MeterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metering record id.</p>
     */
    inline const Aws::String& GetMeteringRecordId() const { return m_meteringRecordId; }
    template<typename MeteringRecordIdT = Aws::String>
    void SetMeteringRecordId(MeteringRecordIdT&& value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId = std::forward<MeteringRecordIdT>(value); }
    template<typename MeteringRecordIdT = Aws::String>
    MeterUsageResult& WithMeteringRecordId(MeteringRecordIdT&& value) { SetMeteringRecordId(std::forward<MeteringRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    MeterUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_meteringRecordId;
    bool m_meteringRecordIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
