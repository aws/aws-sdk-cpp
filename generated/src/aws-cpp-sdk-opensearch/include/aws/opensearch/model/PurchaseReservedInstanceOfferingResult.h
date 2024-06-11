﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>PurchaseReservedInstanceOffering</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PurchaseReservedInstanceOfferingResponse">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedInstanceOfferingResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult();
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const{ return m_reservedInstanceId; }
    inline void SetReservedInstanceId(const Aws::String& value) { m_reservedInstanceId = value; }
    inline void SetReservedInstanceId(Aws::String&& value) { m_reservedInstanceId = std::move(value); }
    inline void SetReservedInstanceId(const char* value) { m_reservedInstanceId.assign(value); }
    inline PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(const Aws::String& value) { SetReservedInstanceId(value); return *this;}
    inline PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(Aws::String&& value) { SetReservedInstanceId(std::move(value)); return *this;}
    inline PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(const char* value) { SetReservedInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }
    inline void SetReservationName(const Aws::String& value) { m_reservationName = value; }
    inline void SetReservationName(Aws::String&& value) { m_reservationName = std::move(value); }
    inline void SetReservationName(const char* value) { m_reservationName.assign(value); }
    inline PurchaseReservedInstanceOfferingResult& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}
    inline PurchaseReservedInstanceOfferingResult& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}
    inline PurchaseReservedInstanceOfferingResult& WithReservationName(const char* value) { SetReservationName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PurchaseReservedInstanceOfferingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PurchaseReservedInstanceOfferingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PurchaseReservedInstanceOfferingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstanceId;

    Aws::String m_reservationName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
