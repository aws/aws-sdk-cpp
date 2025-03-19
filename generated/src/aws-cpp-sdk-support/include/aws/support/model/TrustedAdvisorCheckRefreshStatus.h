/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The refresh status of a Trusted Advisor check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCheckRefreshStatus">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorCheckRefreshStatus
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorCheckRefreshStatus() = default;
    AWS_SUPPORT_API TrustedAdvisorCheckRefreshStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorCheckRefreshStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const { return m_checkId; }
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }
    template<typename CheckIdT = Aws::String>
    void SetCheckId(CheckIdT&& value) { m_checkIdHasBeenSet = true; m_checkId = std::forward<CheckIdT>(value); }
    template<typename CheckIdT = Aws::String>
    TrustedAdvisorCheckRefreshStatus& WithCheckId(CheckIdT&& value) { SetCheckId(std::forward<CheckIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Trusted Advisor check for which a refresh has been
     * requested: </p> <ul> <li> <p> <code>none</code> - The check is not refreshed or
     * the non-success status exceeds the timeout</p> </li> <li> <p>
     * <code>enqueued</code> - The check refresh requests has entered the refresh
     * queue</p> </li> <li> <p> <code>processing</code> - The check refresh request is
     * picked up by the rule processing engine</p> </li> <li> <p> <code>success</code>
     * - The check is successfully refreshed</p> </li> <li> <p> <code>abandoned</code>
     * - The check refresh has failed</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TrustedAdvisorCheckRefreshStatus& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in milliseconds, until the Trusted Advisor check is
     * eligible for refresh.</p>
     */
    inline long long GetMillisUntilNextRefreshable() const { return m_millisUntilNextRefreshable; }
    inline bool MillisUntilNextRefreshableHasBeenSet() const { return m_millisUntilNextRefreshableHasBeenSet; }
    inline void SetMillisUntilNextRefreshable(long long value) { m_millisUntilNextRefreshableHasBeenSet = true; m_millisUntilNextRefreshable = value; }
    inline TrustedAdvisorCheckRefreshStatus& WithMillisUntilNextRefreshable(long long value) { SetMillisUntilNextRefreshable(value); return *this;}
    ///@}
  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    long long m_millisUntilNextRefreshable{0};
    bool m_millisUntilNextRefreshableHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
