/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon RDS event notification subscription. The subscription
   * allows Amazon RDS to post events to an SNS topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsEventSubscriptionDetails">AWS
   * API Reference</a></p>
   */
  class AwsRdsEventSubscriptionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsRdsEventSubscriptionDetails() = default;
    AWS_SECURITYHUB_API AwsRdsEventSubscriptionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsEventSubscriptionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the account that is associated with the event notification
     * subscription.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const { return m_custSubscriptionId; }
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }
    template<typename CustSubscriptionIdT = Aws::String>
    void SetCustSubscriptionId(CustSubscriptionIdT&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::forward<CustSubscriptionIdT>(value); }
    template<typename CustSubscriptionIdT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithCustSubscriptionId(CustSubscriptionIdT&& value) { SetCustSubscriptionId(std::forward<CustSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the event notification subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const { return m_customerAwsId; }
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }
    template<typename CustomerAwsIdT = Aws::String>
    void SetCustomerAwsId(CustomerAwsIdT&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::forward<CustomerAwsIdT>(value); }
    template<typename CustomerAwsIdT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithCustomerAwsId(CustomerAwsIdT&& value) { SetCustomerAwsId(std::forward<CustomerAwsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the event notification subscription is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsRdsEventSubscriptionDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of event categories for the event notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const { return m_eventCategoriesList; }
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }
    template<typename EventCategoriesListT = Aws::Vector<Aws::String>>
    void SetEventCategoriesList(EventCategoriesListT&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::forward<EventCategoriesListT>(value); }
    template<typename EventCategoriesListT = Aws::Vector<Aws::String>>
    AwsRdsEventSubscriptionDetails& WithEventCategoriesList(EventCategoriesListT&& value) { SetEventCategoriesList(std::forward<EventCategoriesListT>(value)); return *this;}
    template<typename EventCategoriesListT = Aws::String>
    AwsRdsEventSubscriptionDetails& AddEventCategoriesList(EventCategoriesListT&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.emplace_back(std::forward<EventCategoriesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the event notification subscription.</p>
     */
    inline const Aws::String& GetEventSubscriptionArn() const { return m_eventSubscriptionArn; }
    inline bool EventSubscriptionArnHasBeenSet() const { return m_eventSubscriptionArnHasBeenSet; }
    template<typename EventSubscriptionArnT = Aws::String>
    void SetEventSubscriptionArn(EventSubscriptionArnT&& value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn = std::forward<EventSubscriptionArnT>(value); }
    template<typename EventSubscriptionArnT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithEventSubscriptionArn(EventSubscriptionArnT&& value) { SetEventSubscriptionArn(std::forward<EventSubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic to post the event notifications to.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source identifiers for the event notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const { return m_sourceIdsList; }
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }
    template<typename SourceIdsListT = Aws::Vector<Aws::String>>
    void SetSourceIdsList(SourceIdsListT&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::forward<SourceIdsListT>(value); }
    template<typename SourceIdsListT = Aws::Vector<Aws::String>>
    AwsRdsEventSubscriptionDetails& WithSourceIdsList(SourceIdsListT&& value) { SetSourceIdsList(std::forward<SourceIdsListT>(value)); return *this;}
    template<typename SourceIdsListT = Aws::String>
    AwsRdsEventSubscriptionDetails& AddSourceIdsList(SourceIdsListT&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.emplace_back(std::forward<SourceIdsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the event notification subscription.</p> <p>Valid values:
     * <code>creating</code> | <code>modifying</code> | <code>deleting</code> |
     * <code>active</code> | <code>no-permission</code> | <code>topic-not-exist</code>
     * </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime when the event notification subscription was created.</p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetSubscriptionCreationTime() const { return m_subscriptionCreationTime; }
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }
    template<typename SubscriptionCreationTimeT = Aws::String>
    void SetSubscriptionCreationTime(SubscriptionCreationTimeT&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::forward<SubscriptionCreationTimeT>(value); }
    template<typename SubscriptionCreationTimeT = Aws::String>
    AwsRdsEventSubscriptionDetails& WithSubscriptionCreationTime(SubscriptionCreationTimeT&& value) { SetSubscriptionCreationTime(std::forward<SubscriptionCreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_custSubscriptionId;
    bool m_custSubscriptionIdHasBeenSet = false;

    Aws::String m_customerAwsId;
    bool m_customerAwsIdHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategoriesList;
    bool m_eventCategoriesListHasBeenSet = false;

    Aws::String m_eventSubscriptionArn;
    bool m_eventSubscriptionArnHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIdsList;
    bool m_sourceIdsListHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subscriptionCreationTime;
    bool m_subscriptionCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
