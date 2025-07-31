/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/ReputationEntityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SendingStatus.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to update the customer-managed sending status for a
   * reputation entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateReputationEntityCustomerManagedStatusRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReputationEntityCustomerManagedStatusRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateReputationEntityCustomerManagedStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReputationEntityCustomerManagedStatus"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of reputation entity. Currently, only <code>RESOURCE</code> type
     * entities are supported.</p>
     */
    inline ReputationEntityType GetReputationEntityType() const { return m_reputationEntityType; }
    inline bool ReputationEntityTypeHasBeenSet() const { return m_reputationEntityTypeHasBeenSet; }
    inline void SetReputationEntityType(ReputationEntityType value) { m_reputationEntityTypeHasBeenSet = true; m_reputationEntityType = value; }
    inline UpdateReputationEntityCustomerManagedStatusRequest& WithReputationEntityType(ReputationEntityType value) { SetReputationEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the reputation entity. For resource-type entities,
     * this is the Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetReputationEntityReference() const { return m_reputationEntityReference; }
    inline bool ReputationEntityReferenceHasBeenSet() const { return m_reputationEntityReferenceHasBeenSet; }
    template<typename ReputationEntityReferenceT = Aws::String>
    void SetReputationEntityReference(ReputationEntityReferenceT&& value) { m_reputationEntityReferenceHasBeenSet = true; m_reputationEntityReference = std::forward<ReputationEntityReferenceT>(value); }
    template<typename ReputationEntityReferenceT = Aws::String>
    UpdateReputationEntityCustomerManagedStatusRequest& WithReputationEntityReference(ReputationEntityReferenceT&& value) { SetReputationEntityReference(std::forward<ReputationEntityReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new customer-managed sending status for the reputation entity. This can
     * be one of the following:</p> <ul> <li> <p> <code>ENABLED</code> – Allow sending
     * for this entity.</p> </li> <li> <p> <code>DISABLED</code> – Prevent sending for
     * this entity.</p> </li> <li> <p> <code>REINSTATED</code> – Allow sending even if
     * there are active reputation findings.</p> </li> </ul>
     */
    inline SendingStatus GetSendingStatus() const { return m_sendingStatus; }
    inline bool SendingStatusHasBeenSet() const { return m_sendingStatusHasBeenSet; }
    inline void SetSendingStatus(SendingStatus value) { m_sendingStatusHasBeenSet = true; m_sendingStatus = value; }
    inline UpdateReputationEntityCustomerManagedStatusRequest& WithSendingStatus(SendingStatus value) { SetSendingStatus(value); return *this;}
    ///@}
  private:

    ReputationEntityType m_reputationEntityType{ReputationEntityType::NOT_SET};
    bool m_reputationEntityTypeHasBeenSet = false;

    Aws::String m_reputationEntityReference;
    bool m_reputationEntityReferenceHasBeenSet = false;

    SendingStatus m_sendingStatus{SendingStatus::NOT_SET};
    bool m_sendingStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
