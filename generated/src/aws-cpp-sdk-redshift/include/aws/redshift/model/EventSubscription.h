/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes event subscriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EventSubscription">AWS
   * API Reference</a></p>
   */
  class EventSubscription
  {
  public:
    AWS_REDSHIFT_API EventSubscription() = default;
    AWS_REDSHIFT_API EventSubscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EventSubscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services account associated with the Amazon Redshift event
     * notification subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const { return m_customerAwsId; }
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }
    template<typename CustomerAwsIdT = Aws::String>
    void SetCustomerAwsId(CustomerAwsIdT&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::forward<CustomerAwsIdT>(value); }
    template<typename CustomerAwsIdT = Aws::String>
    EventSubscription& WithCustomerAwsId(CustomerAwsIdT&& value) { SetCustomerAwsId(std::forward<CustomerAwsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Redshift event notification subscription.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const { return m_custSubscriptionId; }
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }
    template<typename CustSubscriptionIdT = Aws::String>
    void SetCustSubscriptionId(CustSubscriptionIdT&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::forward<CustSubscriptionIdT>(value); }
    template<typename CustSubscriptionIdT = Aws::String>
    EventSubscription& WithCustSubscriptionId(CustSubscriptionIdT&& value) { SetCustSubscriptionId(std::forward<CustSubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic used by the event
     * notification subscription.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    EventSubscription& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Redshift event notification subscription.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can be one of the following: active |
     * no-permission | topic-not-exist</p> </li> <li> <p>The status "no-permission"
     * indicates that Amazon Redshift no longer has permission to post to the Amazon
     * SNS topic. The status "topic-not-exist" indicates that the topic was deleted
     * after the subscription was created.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EventSubscription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Amazon Redshift event notification subscription was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionCreationTime() const { return m_subscriptionCreationTime; }
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }
    template<typename SubscriptionCreationTimeT = Aws::Utils::DateTime>
    void SetSubscriptionCreationTime(SubscriptionCreationTimeT&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::forward<SubscriptionCreationTimeT>(value); }
    template<typename SubscriptionCreationTimeT = Aws::Utils::DateTime>
    EventSubscription& WithSubscriptionCreationTime(SubscriptionCreationTimeT&& value) { SetSubscriptionCreationTime(std::forward<SubscriptionCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type of the events returned by the Amazon Redshift event
     * notification, such as cluster, cluster-snapshot, cluster-parameter-group,
     * cluster-security-group, or scheduled-action. </p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    EventSubscription& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the sources that publish events to the Amazon Redshift event
     * notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const { return m_sourceIdsList; }
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }
    template<typename SourceIdsListT = Aws::Vector<Aws::String>>
    void SetSourceIdsList(SourceIdsListT&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::forward<SourceIdsListT>(value); }
    template<typename SourceIdsListT = Aws::Vector<Aws::String>>
    EventSubscription& WithSourceIdsList(SourceIdsListT&& value) { SetSourceIdsList(std::forward<SourceIdsListT>(value)); return *this;}
    template<typename SourceIdsListT = Aws::String>
    EventSubscription& AddSourceIdsList(SourceIdsListT&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.emplace_back(std::forward<SourceIdsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Redshift event categories specified in the event
     * notification subscription.</p> <p>Values: Configuration, Management, Monitoring,
     * Security, Pending</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const { return m_eventCategoriesList; }
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }
    template<typename EventCategoriesListT = Aws::Vector<Aws::String>>
    void SetEventCategoriesList(EventCategoriesListT&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::forward<EventCategoriesListT>(value); }
    template<typename EventCategoriesListT = Aws::Vector<Aws::String>>
    EventSubscription& WithEventCategoriesList(EventCategoriesListT&& value) { SetEventCategoriesList(std::forward<EventCategoriesListT>(value)); return *this;}
    template<typename EventCategoriesListT = Aws::String>
    EventSubscription& AddEventCategoriesList(EventCategoriesListT&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.emplace_back(std::forward<EventCategoriesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The event severity specified in the Amazon Redshift event notification
     * subscription.</p> <p>Values: ERROR, INFO</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    EventSubscription& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether the subscription is enabled;
     * <code>true</code> indicates that the subscription is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventSubscription& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags for the event subscription.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    EventSubscription& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    EventSubscription& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_customerAwsId;
    bool m_customerAwsIdHasBeenSet = false;

    Aws::String m_custSubscriptionId;
    bool m_custSubscriptionIdHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_subscriptionCreationTime{};
    bool m_subscriptionCreationTimeHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIdsList;
    bool m_sourceIdsListHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategoriesList;
    bool m_eventCategoriesListHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
