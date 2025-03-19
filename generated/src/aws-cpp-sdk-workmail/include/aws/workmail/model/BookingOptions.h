/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>

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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>At least one delegate must be associated to the resource to disable automatic
   * replies from the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/BookingOptions">AWS
   * API Reference</a></p>
   */
  class BookingOptions
  {
  public:
    AWS_WORKMAIL_API BookingOptions() = default;
    AWS_WORKMAIL_API BookingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API BookingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource's ability to automatically reply to requests. If disabled,
     * delegates must be associated to the resource.</p>
     */
    inline bool GetAutoAcceptRequests() const { return m_autoAcceptRequests; }
    inline bool AutoAcceptRequestsHasBeenSet() const { return m_autoAcceptRequestsHasBeenSet; }
    inline void SetAutoAcceptRequests(bool value) { m_autoAcceptRequestsHasBeenSet = true; m_autoAcceptRequests = value; }
    inline BookingOptions& WithAutoAcceptRequests(bool value) { SetAutoAcceptRequests(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's ability to automatically decline any recurring requests.</p>
     */
    inline bool GetAutoDeclineRecurringRequests() const { return m_autoDeclineRecurringRequests; }
    inline bool AutoDeclineRecurringRequestsHasBeenSet() const { return m_autoDeclineRecurringRequestsHasBeenSet; }
    inline void SetAutoDeclineRecurringRequests(bool value) { m_autoDeclineRecurringRequestsHasBeenSet = true; m_autoDeclineRecurringRequests = value; }
    inline BookingOptions& WithAutoDeclineRecurringRequests(bool value) { SetAutoDeclineRecurringRequests(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource's ability to automatically decline any conflicting requests.</p>
     */
    inline bool GetAutoDeclineConflictingRequests() const { return m_autoDeclineConflictingRequests; }
    inline bool AutoDeclineConflictingRequestsHasBeenSet() const { return m_autoDeclineConflictingRequestsHasBeenSet; }
    inline void SetAutoDeclineConflictingRequests(bool value) { m_autoDeclineConflictingRequestsHasBeenSet = true; m_autoDeclineConflictingRequests = value; }
    inline BookingOptions& WithAutoDeclineConflictingRequests(bool value) { SetAutoDeclineConflictingRequests(value); return *this;}
    ///@}
  private:

    bool m_autoAcceptRequests{false};
    bool m_autoAcceptRequestsHasBeenSet = false;

    bool m_autoDeclineRecurringRequests{false};
    bool m_autoDeclineRecurringRequestsHasBeenSet = false;

    bool m_autoDeclineConflictingRequests{false};
    bool m_autoDeclineConflictingRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
