/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the results of a successful invocation of the
   * <a>DescribeEventSubscriptions</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/EventSubscription">AWS
   * API Reference</a></p>
   */
  class EventSubscription
  {
  public:
    AWS_NEPTUNE_API EventSubscription();
    AWS_NEPTUNE_API EventSubscription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API EventSubscription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon customer account associated with the event notification
     * subscription.</p>
     */
    inline const Aws::String& GetCustomerAwsId() const{ return m_customerAwsId; }
    inline bool CustomerAwsIdHasBeenSet() const { return m_customerAwsIdHasBeenSet; }
    inline void SetCustomerAwsId(const Aws::String& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = value; }
    inline void SetCustomerAwsId(Aws::String&& value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId = std::move(value); }
    inline void SetCustomerAwsId(const char* value) { m_customerAwsIdHasBeenSet = true; m_customerAwsId.assign(value); }
    inline EventSubscription& WithCustomerAwsId(const Aws::String& value) { SetCustomerAwsId(value); return *this;}
    inline EventSubscription& WithCustomerAwsId(Aws::String&& value) { SetCustomerAwsId(std::move(value)); return *this;}
    inline EventSubscription& WithCustomerAwsId(const char* value) { SetCustomerAwsId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event notification subscription Id.</p>
     */
    inline const Aws::String& GetCustSubscriptionId() const{ return m_custSubscriptionId; }
    inline bool CustSubscriptionIdHasBeenSet() const { return m_custSubscriptionIdHasBeenSet; }
    inline void SetCustSubscriptionId(const Aws::String& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = value; }
    inline void SetCustSubscriptionId(Aws::String&& value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId = std::move(value); }
    inline void SetCustSubscriptionId(const char* value) { m_custSubscriptionIdHasBeenSet = true; m_custSubscriptionId.assign(value); }
    inline EventSubscription& WithCustSubscriptionId(const Aws::String& value) { SetCustSubscriptionId(value); return *this;}
    inline EventSubscription& WithCustSubscriptionId(Aws::String&& value) { SetCustSubscriptionId(std::move(value)); return *this;}
    inline EventSubscription& WithCustSubscriptionId(const char* value) { SetCustSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic ARN of the event notification subscription.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }
    inline EventSubscription& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline EventSubscription& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline EventSubscription& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the event notification subscription.</p> <p>Constraints:</p>
     * <p>Can be one of the following: creating | modifying | deleting | active |
     * no-permission | topic-not-exist</p> <p>The status "no-permission" indicates that
     * Neptune no longer has permission to post to the SNS topic. The status
     * "topic-not-exist" indicates that the topic was deleted after the subscription
     * was created.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline EventSubscription& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline EventSubscription& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline EventSubscription& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the event notification subscription was created.</p>
     */
    inline const Aws::String& GetSubscriptionCreationTime() const{ return m_subscriptionCreationTime; }
    inline bool SubscriptionCreationTimeHasBeenSet() const { return m_subscriptionCreationTimeHasBeenSet; }
    inline void SetSubscriptionCreationTime(const Aws::String& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = value; }
    inline void SetSubscriptionCreationTime(Aws::String&& value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime = std::move(value); }
    inline void SetSubscriptionCreationTime(const char* value) { m_subscriptionCreationTimeHasBeenSet = true; m_subscriptionCreationTime.assign(value); }
    inline EventSubscription& WithSubscriptionCreationTime(const Aws::String& value) { SetSubscriptionCreationTime(value); return *this;}
    inline EventSubscription& WithSubscriptionCreationTime(Aws::String&& value) { SetSubscriptionCreationTime(std::move(value)); return *this;}
    inline EventSubscription& WithSubscriptionCreationTime(const char* value) { SetSubscriptionCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type for the event notification subscription.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }
    inline EventSubscription& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}
    inline EventSubscription& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}
    inline EventSubscription& WithSourceType(const char* value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source IDs for the event notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceIdsList() const{ return m_sourceIdsList; }
    inline bool SourceIdsListHasBeenSet() const { return m_sourceIdsListHasBeenSet; }
    inline void SetSourceIdsList(const Aws::Vector<Aws::String>& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = value; }
    inline void SetSourceIdsList(Aws::Vector<Aws::String>&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList = std::move(value); }
    inline EventSubscription& WithSourceIdsList(const Aws::Vector<Aws::String>& value) { SetSourceIdsList(value); return *this;}
    inline EventSubscription& WithSourceIdsList(Aws::Vector<Aws::String>&& value) { SetSourceIdsList(std::move(value)); return *this;}
    inline EventSubscription& AddSourceIdsList(const Aws::String& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }
    inline EventSubscription& AddSourceIdsList(Aws::String&& value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(std::move(value)); return *this; }
    inline EventSubscription& AddSourceIdsList(const char* value) { m_sourceIdsListHasBeenSet = true; m_sourceIdsList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of event categories for the event notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategoriesList() const{ return m_eventCategoriesList; }
    inline bool EventCategoriesListHasBeenSet() const { return m_eventCategoriesListHasBeenSet; }
    inline void SetEventCategoriesList(const Aws::Vector<Aws::String>& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = value; }
    inline void SetEventCategoriesList(Aws::Vector<Aws::String>&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList = std::move(value); }
    inline EventSubscription& WithEventCategoriesList(const Aws::Vector<Aws::String>& value) { SetEventCategoriesList(value); return *this;}
    inline EventSubscription& WithEventCategoriesList(Aws::Vector<Aws::String>&& value) { SetEventCategoriesList(std::move(value)); return *this;}
    inline EventSubscription& AddEventCategoriesList(const Aws::String& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }
    inline EventSubscription& AddEventCategoriesList(Aws::String&& value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(std::move(value)); return *this; }
    inline EventSubscription& AddEventCategoriesList(const char* value) { m_eventCategoriesListHasBeenSet = true; m_eventCategoriesList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating if the subscription is enabled. True indicates the
     * subscription is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EventSubscription& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the event subscription.</p>
     */
    inline const Aws::String& GetEventSubscriptionArn() const{ return m_eventSubscriptionArn; }
    inline bool EventSubscriptionArnHasBeenSet() const { return m_eventSubscriptionArnHasBeenSet; }
    inline void SetEventSubscriptionArn(const Aws::String& value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn = value; }
    inline void SetEventSubscriptionArn(Aws::String&& value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn = std::move(value); }
    inline void SetEventSubscriptionArn(const char* value) { m_eventSubscriptionArnHasBeenSet = true; m_eventSubscriptionArn.assign(value); }
    inline EventSubscription& WithEventSubscriptionArn(const Aws::String& value) { SetEventSubscriptionArn(value); return *this;}
    inline EventSubscription& WithEventSubscriptionArn(Aws::String&& value) { SetEventSubscriptionArn(std::move(value)); return *this;}
    inline EventSubscription& WithEventSubscriptionArn(const char* value) { SetEventSubscriptionArn(value); return *this;}
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

    Aws::String m_subscriptionCreationTime;
    bool m_subscriptionCreationTimeHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceIdsList;
    bool m_sourceIdsListHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategoriesList;
    bool m_eventCategoriesListHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_eventSubscriptionArn;
    bool m_eventSubscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
