/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The offering type of this node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ReservedNodesOffering">AWS
   * API Reference</a></p>
   */
  class ReservedNodesOffering
  {
  public:
    AWS_MEMORYDB_API ReservedNodesOffering();
    AWS_MEMORYDB_API ReservedNodesOffering(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ReservedNodesOffering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedNodesOfferingId() const{ return m_reservedNodesOfferingId; }

    /**
     * <p>The offering identifier.</p>
     */
    inline bool ReservedNodesOfferingIdHasBeenSet() const { return m_reservedNodesOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedNodesOfferingId(const Aws::String& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = value; }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedNodesOfferingId(Aws::String&& value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId = std::move(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline void SetReservedNodesOfferingId(const char* value) { m_reservedNodesOfferingIdHasBeenSet = true; m_reservedNodesOfferingId.assign(value); }

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedNodesOffering& WithReservedNodesOfferingId(const Aws::String& value) { SetReservedNodesOfferingId(value); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedNodesOffering& WithReservedNodesOfferingId(Aws::String&& value) { SetReservedNodesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier.</p>
     */
    inline ReservedNodesOffering& WithReservedNodesOfferingId(const char* value) { SetReservedNodesOfferingId(value); return *this;}


    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline ReservedNodesOffering& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline ReservedNodesOffering& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type for the reserved nodes. For more information, see <a
     * href="https://docs.aws.amazon.com/memorydb/latest/devguide/nodes.reserved.html#reserved-nodes-supported">Supported
     * node types</a>.</p>
     */
    inline ReservedNodesOffering& WithNodeType(const char* value) { SetNodeType(value); return *this;}


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
    inline ReservedNodesOffering& WithDuration(int value) { SetDuration(value); return *this;}


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
    inline ReservedNodesOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}


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
    inline ReservedNodesOffering& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline ReservedNodesOffering& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}

    /**
     * <p>The offering type of this reserved node.</p>
     */
    inline ReservedNodesOffering& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}


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
    inline ReservedNodesOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNodesOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNodesOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }

    /**
     * <p>The recurring price charged to run this reserved node.</p>
     */
    inline ReservedNodesOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservedNodesOfferingId;
    bool m_reservedNodesOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
