/**
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
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult() = default;
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const { return m_reservedInstanceId; }
    template<typename ReservedInstanceIdT = Aws::String>
    void SetReservedInstanceId(ReservedInstanceIdT&& value) { m_reservedInstanceIdHasBeenSet = true; m_reservedInstanceId = std::forward<ReservedInstanceIdT>(value); }
    template<typename ReservedInstanceIdT = Aws::String>
    PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(ReservedInstanceIdT&& value) { SetReservedInstanceId(std::forward<ReservedInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const { return m_reservationName; }
    template<typename ReservationNameT = Aws::String>
    void SetReservationName(ReservationNameT&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::forward<ReservationNameT>(value); }
    template<typename ReservationNameT = Aws::String>
    PurchaseReservedInstanceOfferingResult& WithReservationName(ReservationNameT&& value) { SetReservationName(std::forward<ReservationNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PurchaseReservedInstanceOfferingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstanceId;
    bool m_reservedInstanceIdHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
