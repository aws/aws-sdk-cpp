/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for request parameters to the
   * <code>PurchaseReservedInstanceOffering</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/PurchaseReservedInstanceOfferingRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedInstanceOfferingRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API PurchaseReservedInstanceOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedInstanceOffering"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline const Aws::String& GetReservedInstanceOfferingId() const{ return m_reservedInstanceOfferingId; }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline bool ReservedInstanceOfferingIdHasBeenSet() const { return m_reservedInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline void SetReservedInstanceOfferingId(const Aws::String& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = value; }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline void SetReservedInstanceOfferingId(Aws::String&& value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline void SetReservedInstanceOfferingId(const char* value) { m_reservedInstanceOfferingIdHasBeenSet = true; m_reservedInstanceOfferingId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithReservedInstanceOfferingId(const Aws::String& value) { SetReservedInstanceOfferingId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithReservedInstanceOfferingId(Aws::String&& value) { SetReservedInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithReservedInstanceOfferingId(const char* value) { SetReservedInstanceOfferingId(value); return *this;}


    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationName() const{ return m_reservationName; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline bool ReservationNameHasBeenSet() const { return m_reservationNameHasBeenSet; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(const Aws::String& value) { m_reservationNameHasBeenSet = true; m_reservationName = value; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(Aws::String&& value) { m_reservationNameHasBeenSet = true; m_reservationName = std::move(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationName(const char* value) { m_reservationNameHasBeenSet = true; m_reservationName.assign(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithReservationName(const Aws::String& value) { SetReservationName(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithReservationName(Aws::String&& value) { SetReservationName(std::move(value)); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithReservationName(const char* value) { SetReservationName(value); return *this;}


    /**
     * <p>The number of OpenSearch instances to reserve.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of OpenSearch instances to reserve.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of OpenSearch instances to reserve.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of OpenSearch instances to reserve.</p>
     */
    inline PurchaseReservedInstanceOfferingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}

  private:

    Aws::String m_reservedInstanceOfferingId;
    bool m_reservedInstanceOfferingIdHasBeenSet = false;

    Aws::String m_reservationName;
    bool m_reservationNameHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
