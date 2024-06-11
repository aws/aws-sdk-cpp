/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/EventType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Indicates an event you would like to subscribe and get notification for.
   * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
   * and <b>Scheduled assessment failure</b> events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/EventSubscription">AWS
   * API Reference</a></p>
   */
  class EventSubscription
  {
  public:
    AWS_RESILIENCEHUB_API EventSubscription();
    AWS_RESILIENCEHUB_API EventSubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API EventSubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }
    inline EventSubscription& WithEventType(const EventType& value) { SetEventType(value); return *this;}
    inline EventSubscription& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EventSubscription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EventSubscription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EventSubscription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
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
  private:

    EventType m_eventType;
    bool m_eventTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
