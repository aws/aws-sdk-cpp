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
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult();
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline const Aws::String& GetReservedInstanceId() const{ return m_reservedInstanceId; }

    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline void SetReservedInstanceId(const Aws::String& value) { m_reservedInstanceId = value; }

    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline void SetReservedInstanceId(Aws::String&& value) { m_reservedInstanceId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline void SetReservedInstanceId(const char* value) { m_reservedInstanceId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(const Aws::String& value) { SetReservedInstanceId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(Aws::String&& value) { SetReservedInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering that was purchased.</p>
     */
    inline PurchaseReservedInstanceOfferingResult& WithReservedInstanceId(const char* value) { SetReservedInstanceId(value); return *this;}


    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }

    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline void SetReservationName(const Aws::String& value) { m_reservationName = value; }

    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline void SetReservationName(Aws::String&& value) { m_reservationName = std::move(value); }

    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline void SetReservationName(const char* value) { m_reservationName.assign(value); }

    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline PurchaseReservedInstanceOfferingResult& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline PurchaseReservedInstanceOfferingResult& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * <p>The customer-specified identifier used to track this reservation.</p>
     */
    inline PurchaseReservedInstanceOfferingResult& WithReservationName(const char* value) { SetReservationName(value); return *this;}

  private:

    Aws::String m_reservedInstanceId;

    Aws::String m_reservationName;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
