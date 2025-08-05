/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ReputationEntityType.h>
#include <aws/sesv2/model/StatusRecord.h>
#include <aws/sesv2/model/SendingStatus.h>
#include <aws/sesv2/model/RecommendationImpact.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about a reputation entity, including its
   * reference, type, policy, status records, and reputation impact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ReputationEntity">AWS
   * API Reference</a></p>
   */
  class ReputationEntity
  {
  public:
    AWS_SESV2_API ReputationEntity() = default;
    AWS_SESV2_API ReputationEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ReputationEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    ReputationEntity& WithReputationEntityReference(ReputationEntityReferenceT&& value) { SetReputationEntityReference(std::forward<ReputationEntityReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reputation entity. Currently, only <code>RESOURCE</code> type
     * entities are supported.</p>
     */
    inline ReputationEntityType GetReputationEntityType() const { return m_reputationEntityType; }
    inline bool ReputationEntityTypeHasBeenSet() const { return m_reputationEntityTypeHasBeenSet; }
    inline void SetReputationEntityType(ReputationEntityType value) { m_reputationEntityTypeHasBeenSet = true; m_reputationEntityType = value; }
    inline ReputationEntity& WithReputationEntityType(ReputationEntityType value) { SetReputationEntityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the reputation management policy applied to
     * this entity. This is an Amazon Web Services Amazon SES-managed policy.</p>
     */
    inline const Aws::String& GetReputationManagementPolicy() const { return m_reputationManagementPolicy; }
    inline bool ReputationManagementPolicyHasBeenSet() const { return m_reputationManagementPolicyHasBeenSet; }
    template<typename ReputationManagementPolicyT = Aws::String>
    void SetReputationManagementPolicy(ReputationManagementPolicyT&& value) { m_reputationManagementPolicyHasBeenSet = true; m_reputationManagementPolicy = std::forward<ReputationManagementPolicyT>(value); }
    template<typename ReputationManagementPolicyT = Aws::String>
    ReputationEntity& WithReputationManagementPolicy(ReputationManagementPolicyT&& value) { SetReputationManagementPolicy(std::forward<ReputationManagementPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The customer-managed status record for this reputation entity, including the
     * current status, cause description, and last updated timestamp.</p>
     */
    inline const StatusRecord& GetCustomerManagedStatus() const { return m_customerManagedStatus; }
    inline bool CustomerManagedStatusHasBeenSet() const { return m_customerManagedStatusHasBeenSet; }
    template<typename CustomerManagedStatusT = StatusRecord>
    void SetCustomerManagedStatus(CustomerManagedStatusT&& value) { m_customerManagedStatusHasBeenSet = true; m_customerManagedStatus = std::forward<CustomerManagedStatusT>(value); }
    template<typename CustomerManagedStatusT = StatusRecord>
    ReputationEntity& WithCustomerManagedStatus(CustomerManagedStatusT&& value) { SetCustomerManagedStatus(std::forward<CustomerManagedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Amazon SES-managed status record for this reputation
     * entity, including the current status, cause description, and last updated
     * timestamp.</p>
     */
    inline const StatusRecord& GetAwsSesManagedStatus() const { return m_awsSesManagedStatus; }
    inline bool AwsSesManagedStatusHasBeenSet() const { return m_awsSesManagedStatusHasBeenSet; }
    template<typename AwsSesManagedStatusT = StatusRecord>
    void SetAwsSesManagedStatus(AwsSesManagedStatusT&& value) { m_awsSesManagedStatusHasBeenSet = true; m_awsSesManagedStatus = std::forward<AwsSesManagedStatusT>(value); }
    template<typename AwsSesManagedStatusT = StatusRecord>
    ReputationEntity& WithAwsSesManagedStatus(AwsSesManagedStatusT&& value) { SetAwsSesManagedStatus(std::forward<AwsSesManagedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregate sending status that determines whether the entity is allowed to
     * send emails. This status is derived from both the customer-managed and Amazon
     * Web Services Amazon SES-managed statuses. If either the customer-managed status
     * or the Amazon Web Services Amazon SES-managed status is <code>DISABLED</code>,
     * the aggregate status will be <code>DISABLED</code> and the entity will not be
     * allowed to send emails. When the customer-managed status is set to
     * <code>REINSTATED</code>, the entity can continue sending even if there are
     * active reputation findings, provided the Amazon Web Services Amazon SES-managed
     * status also permits sending. The entity can only send emails when both statuses
     * permit sending.</p>
     */
    inline SendingStatus GetSendingStatusAggregate() const { return m_sendingStatusAggregate; }
    inline bool SendingStatusAggregateHasBeenSet() const { return m_sendingStatusAggregateHasBeenSet; }
    inline void SetSendingStatusAggregate(SendingStatus value) { m_sendingStatusAggregateHasBeenSet = true; m_sendingStatusAggregate = value; }
    inline ReputationEntity& WithSendingStatusAggregate(SendingStatus value) { SetSendingStatusAggregate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reputation impact level for this entity, representing the highest impact
     * reputation finding currently active. Reputation findings can be retrieved using
     * the <code>ListRecommendations</code> operation.</p>
     */
    inline RecommendationImpact GetReputationImpact() const { return m_reputationImpact; }
    inline bool ReputationImpactHasBeenSet() const { return m_reputationImpactHasBeenSet; }
    inline void SetReputationImpact(RecommendationImpact value) { m_reputationImpactHasBeenSet = true; m_reputationImpact = value; }
    inline ReputationEntity& WithReputationImpact(RecommendationImpact value) { SetReputationImpact(value); return *this;}
    ///@}
  private:

    Aws::String m_reputationEntityReference;
    bool m_reputationEntityReferenceHasBeenSet = false;

    ReputationEntityType m_reputationEntityType{ReputationEntityType::NOT_SET};
    bool m_reputationEntityTypeHasBeenSet = false;

    Aws::String m_reputationManagementPolicy;
    bool m_reputationManagementPolicyHasBeenSet = false;

    StatusRecord m_customerManagedStatus;
    bool m_customerManagedStatusHasBeenSet = false;

    StatusRecord m_awsSesManagedStatus;
    bool m_awsSesManagedStatusHasBeenSet = false;

    SendingStatus m_sendingStatusAggregate{SendingStatus::NOT_SET};
    bool m_sendingStatusAggregateHasBeenSet = false;

    RecommendationImpact m_reputationImpact{RecommendationImpact::NOT_SET};
    bool m_reputationImpactHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
