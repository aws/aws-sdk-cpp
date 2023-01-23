/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/RecurringCharge.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Represents the output of a <code>PurchaseReservedNodesOffering</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ReservedNode">AWS
   * API Reference</a></p>
   */
  class ReservedNode
  {
  public:
    AWS_MEMORYDB_API ReservedNode();
    AWS_MEMORYDB_API ReservedNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ReservedNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline const Aws::String& GetReservationId() const{ return m_reservationId; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline bool ReservationIdHasBeenSet() const { return m_reservationIdHasBeenSet; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationId(const Aws::String& value) { m_reservationIdHasBeenSet = true; m_reservationId = value; }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationId(Aws::String&& value) { m_reservationIdHasBeenSet = true; m_reservationId = std::move(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline void SetReservationId(const char* value) { m_reservationIdHasBeenSet = true; m_reservationId.assign(value); }

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline ReservedNode& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline ReservedNode& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline ReservedNode& WithReservationId(const char* value) { SetReservationId(value); return *this;}


    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline const Aws::String& GetReservedNodesOfferingId() const{ return m_reservedNodesOfferingId; }

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline bool ReservedNodesOfferingIdHasBeenSet() const { return m_reservedNodesOfferingIdHasBeenSet; }

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline void SetReservedNodesOfferingId(const Aws::String& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = value; }

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline void SetReservedNodesOfferingId(Aws::String&& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = std::move(value); }

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline void SetReservedNodesOfferingId(const char* value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId.assign(value); }

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline ReservedNode& WithReservedNodesOfferingId(const Aws::String& value) { SetReservedNodesOfferingId(value); return *this;}

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline ReservedNode& WithReservedNodesOfferingId(Aws::String&& value) { SetReservedNodesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline ReservedNode& WithReservedNodesOfferingId(const char* value) { SetReservedNodesOfferingId(value); return *this;}


    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline ReservedNode& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline ReservedNode& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type for the reserved nodes.</p>
     */
    inline ReservedNode& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time the reservation started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time the reservation started.</p>
     */
    inline ReservedNode& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time the reservation started.</p>
     */
    inline ReservedNode& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline ReservedNode& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The fixed price charged for this reserved node.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }

    /**
     * <p>The fixed price charged for this reserved node.</p>
     */
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }

    /**
     * <p>The fixed price charged for this reserved node.</p>
     */
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }

    /**
     * <p>The fixed price charged for this reserved node.</p>
     */
    inline ReservedNode& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


    /**
     * <p>The number of nodes that have been reserved.</p>
     */
    inline int GetNodeCount() const{ return m_nodeCount; }

    /**
     * <p>The number of nodes that have been reserved.</p>
     */
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }

    /**
     * <p>The number of nodes that have been reserved.</p>
     */
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }

    /**
     * <p>The number of nodes that have been reserved.</p>
     */
    inline ReservedNode& WithNodeCount(int value) { SetNodeCount(value); return *this;}


    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline ReservedNode& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline ReservedNode& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline ReservedNode& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}


    /**
     * <p>The state of the reserved node.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the reserved node.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the reserved node.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the reserved node.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the reserved node.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the reserved node.</p>
     */
    inline ReservedNode& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the reserved node.</p>
     */
    inline ReservedNode& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the reserved node.</p>
     */
    inline ReservedNode& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNode& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNode& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNode& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNode& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline ReservedNode& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline ReservedNode& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the reserved node.</p>
     */
    inline ReservedNode& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;

    Aws::String m_reservedNodesOfferingId;
    bool m_reservedNodesOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    int m_nodeCount;
    bool m_nodeCountHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
