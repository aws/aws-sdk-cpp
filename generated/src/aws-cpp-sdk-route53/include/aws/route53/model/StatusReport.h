/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the status that one Amazon Route 53 health
   * checker reports and the time of the health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/StatusReport">AWS
   * API Reference</a></p>
   */
  class StatusReport
  {
  public:
    AWS_ROUTE53_API StatusReport() = default;
    AWS_ROUTE53_API StatusReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API StatusReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A description of the status of the health check endpoint as reported by one
     * of the Amazon Route 53 health checkers.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    StatusReport& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the health checker performed the health check in <a
     * href="https://en.wikipedia.org/wiki/ISO_8601">ISO 8601 format</a> and
     * Coordinated Universal Time (UTC). For example, the value
     * <code>2017-03-27T17:48:16.751Z</code> represents March 27, 2017 at 17:48:16.751
     * UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCheckedTime() const { return m_checkedTime; }
    inline bool CheckedTimeHasBeenSet() const { return m_checkedTimeHasBeenSet; }
    template<typename CheckedTimeT = Aws::Utils::DateTime>
    void SetCheckedTime(CheckedTimeT&& value) { m_checkedTimeHasBeenSet = true; m_checkedTime = std::forward<CheckedTimeT>(value); }
    template<typename CheckedTimeT = Aws::Utils::DateTime>
    StatusReport& WithCheckedTime(CheckedTimeT&& value) { SetCheckedTime(std::forward<CheckedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_checkedTime{};
    bool m_checkedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
