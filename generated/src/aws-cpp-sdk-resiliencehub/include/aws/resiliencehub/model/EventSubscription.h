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


    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline const EventType& GetEventType() const{ return m_eventType; }

    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }

    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline void SetEventType(const EventType& value) { m_eventTypeHasBeenSet = true; m_eventType = value; }

    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline void SetEventType(EventType&& value) { m_eventTypeHasBeenSet = true; m_eventType = std::move(value); }

    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline EventSubscription& WithEventType(const EventType& value) { SetEventType(value); return *this;}

    /**
     * <p>The type of event you would like to subscribe and get notification for.
     * Currently, Resilience Hub supports notifications only for <b>Drift detected</b>
     * (<code>DriftDetected</code>) and <b>Scheduled assessment failure</b>
     * (<code>ScheduledAssessmentFailure</code>) events.</p>
     */
    inline EventSubscription& WithEventType(EventType&& value) { SetEventType(std::move(value)); return *this;}


    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline EventSubscription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline EventSubscription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Unique name to identify an event subscription.</p>
     */
    inline EventSubscription& WithName(const char* value) { SetName(value); return *this;}


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

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline EventSubscription& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline EventSubscription& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Simple Notification Service topic.
     * The format for this ARN is:
     * <code>arn:partition:sns:region:account:topic-name</code>. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline EventSubscription& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}

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
