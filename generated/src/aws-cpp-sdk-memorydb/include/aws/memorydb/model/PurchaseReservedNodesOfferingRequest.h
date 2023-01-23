/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class PurchaseReservedNodesOfferingRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API PurchaseReservedNodesOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedNodesOffering"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline PurchaseReservedNodesOfferingRequest& WithReservedNodesOfferingId(const Aws::String& value) { SetReservedNodesOfferingId(value); return *this;}

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithReservedNodesOfferingId(Aws::String&& value) { SetReservedNodesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the reserved node offering to purchase.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithReservedNodesOfferingId(const char* value) { SetReservedNodesOfferingId(value); return *this;}


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
    inline PurchaseReservedNodesOfferingRequest& WithReservationId(const Aws::String& value) { SetReservationId(value); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithReservationId(Aws::String&& value) { SetReservationId(std::move(value)); return *this;}

    /**
     * <p>A customer-specified identifier to track this reservation.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithReservationId(const char* value) { SetReservationId(value); return *this;}


    /**
     * <p>The number of node instances to reserve.</p>
     */
    inline int GetNodeCount() const{ return m_nodeCount; }

    /**
     * <p>The number of node instances to reserve.</p>
     */
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }

    /**
     * <p>The number of node instances to reserve.</p>
     */
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }

    /**
     * <p>The number of node instances to reserve.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithNodeCount(int value) { SetNodeCount(value); return *this;}


    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted.</p>
     */
    inline PurchaseReservedNodesOfferingRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reservedNodesOfferingId;
    bool m_reservedNodesOfferingIdHasBeenSet = false;

    Aws::String m_reservationId;
    bool m_reservationIdHasBeenSet = false;

    int m_nodeCount;
    bool m_nodeCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
