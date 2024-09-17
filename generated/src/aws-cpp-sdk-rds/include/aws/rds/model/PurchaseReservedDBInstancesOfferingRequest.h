/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PurchaseReservedDBInstancesOfferingMessage">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedDBInstancesOfferingRequest : public RDSRequest
  {
  public:
    AWS_RDS_API PurchaseReservedDBInstancesOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedDBInstancesOffering"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Reserved DB instance offering to purchase.</p> <p>Example:
     * 438012d3-4052-4cc7-b2e3-8d3372e0e706</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const{ return m_reservedDBInstancesOfferingId; }
    inline bool ReservedDBInstancesOfferingIdHasBeenSet() const { return m_reservedDBInstancesOfferingIdHasBeenSet; }
    inline void SetReservedDBInstancesOfferingId(const Aws::String& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }
    inline void SetReservedDBInstancesOfferingId(Aws::String&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = std::move(value); }
    inline void SetReservedDBInstancesOfferingId(const char* value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId.assign(value); }
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstancesOfferingId(const Aws::String& value) { SetReservedDBInstancesOfferingId(value); return *this;}
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstancesOfferingId(Aws::String&& value) { SetReservedDBInstancesOfferingId(std::move(value)); return *this;}
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstancesOfferingId(const char* value) { SetReservedDBInstancesOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer-specified identifier to track this reservation.</p> <p>Example:
     * myreservationID</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const{ return m_reservedDBInstanceId; }
    inline bool ReservedDBInstanceIdHasBeenSet() const { return m_reservedDBInstanceIdHasBeenSet; }
    inline void SetReservedDBInstanceId(const Aws::String& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }
    inline void SetReservedDBInstanceId(Aws::String&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = std::move(value); }
    inline void SetReservedDBInstanceId(const char* value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId.assign(value); }
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstanceId(const Aws::String& value) { SetReservedDBInstanceId(value); return *this;}
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstanceId(Aws::String&& value) { SetReservedDBInstanceId(std::move(value)); return *this;}
    inline PurchaseReservedDBInstancesOfferingRequest& WithReservedDBInstanceId(const char* value) { SetReservedDBInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances to reserve.</p> <p>Default: <code>1</code> </p>
     */
    inline int GetDBInstanceCount() const{ return m_dBInstanceCount; }
    inline bool DBInstanceCountHasBeenSet() const { return m_dBInstanceCountHasBeenSet; }
    inline void SetDBInstanceCount(int value) { m_dBInstanceCountHasBeenSet = true; m_dBInstanceCount = value; }
    inline PurchaseReservedDBInstancesOfferingRequest& WithDBInstanceCount(int value) { SetDBInstanceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PurchaseReservedDBInstancesOfferingRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline PurchaseReservedDBInstancesOfferingRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline PurchaseReservedDBInstancesOfferingRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline PurchaseReservedDBInstancesOfferingRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet = false;

    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet = false;

    int m_dBInstanceCount;
    bool m_dBInstanceCountHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
