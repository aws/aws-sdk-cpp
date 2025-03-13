/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>DecisionTaskStarted</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskStartedEventAttributes">AWS
   * API Reference</a></p>
   */
  class DecisionTaskStartedEventAttributes
  {
  public:
    AWS_SWF_API DecisionTaskStartedEventAttributes() = default;
    AWS_SWF_API DecisionTaskStartedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API DecisionTaskStartedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline const Aws::String& GetIdentity() const { return m_identity; }
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
    template<typename IdentityT = Aws::String>
    void SetIdentity(IdentityT&& value) { m_identityHasBeenSet = true; m_identity = std::forward<IdentityT>(value); }
    template<typename IdentityT = Aws::String>
    DecisionTaskStartedEventAttributes& WithIdentity(IdentityT&& value) { SetIdentity(std::forward<IdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const { return m_scheduledEventId; }
    inline bool ScheduledEventIdHasBeenSet() const { return m_scheduledEventIdHasBeenSet; }
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }
    inline DecisionTaskStartedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_identity;
    bool m_identityHasBeenSet = false;

    long long m_scheduledEventId{0};
    bool m_scheduledEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
