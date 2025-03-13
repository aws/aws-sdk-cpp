/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ScheduleAt.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the request parameters to the
   * <code>StartServiceSoftwareUpdate</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StartServiceSoftwareUpdateRequest">AWS
   * API Reference</a></p>
   */
  class StartServiceSoftwareUpdateRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API StartServiceSoftwareUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartServiceSoftwareUpdate"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain that you want to update to the latest service
     * software.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    StartServiceSoftwareUpdateRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When to start the service software update.</p> <ul> <li> <p> <code>NOW</code>
     * - Immediately schedules the update to happen in the current hour if there's
     * capacity available.</p> </li> <li> <p> <code>TIMESTAMP</code> - Lets you specify
     * a custom date and time to apply the update. If you specify this value, you must
     * also provide a value for <code>DesiredStartTime</code>.</p> </li> <li> <p>
     * <code>OFF_PEAK_WINDOW</code> - Marks the update to be picked up during an
     * upcoming off-peak window. There's no guarantee that the update will happen
     * during the next immediate window. Depending on capacity, it might happen in
     * subsequent days.</p> </li> </ul> <p>Default: <code>NOW</code> if you don't
     * specify a value for <code>DesiredStartTime</code>, and <code>TIMESTAMP</code> if
     * you do.</p>
     */
    inline ScheduleAt GetScheduleAt() const { return m_scheduleAt; }
    inline bool ScheduleAtHasBeenSet() const { return m_scheduleAtHasBeenSet; }
    inline void SetScheduleAt(ScheduleAt value) { m_scheduleAtHasBeenSet = true; m_scheduleAt = value; }
    inline StartServiceSoftwareUpdateRequest& WithScheduleAt(ScheduleAt value) { SetScheduleAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Epoch timestamp when you want the service software update to start. You
     * only need to specify this parameter if you set <code>ScheduleAt</code> to
     * <code>TIMESTAMP</code>.</p>
     */
    inline long long GetDesiredStartTime() const { return m_desiredStartTime; }
    inline bool DesiredStartTimeHasBeenSet() const { return m_desiredStartTimeHasBeenSet; }
    inline void SetDesiredStartTime(long long value) { m_desiredStartTimeHasBeenSet = true; m_desiredStartTime = value; }
    inline StartServiceSoftwareUpdateRequest& WithDesiredStartTime(long long value) { SetDesiredStartTime(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ScheduleAt m_scheduleAt{ScheduleAt::NOT_SET};
    bool m_scheduleAtHasBeenSet = false;

    long long m_desiredStartTime{0};
    bool m_desiredStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
