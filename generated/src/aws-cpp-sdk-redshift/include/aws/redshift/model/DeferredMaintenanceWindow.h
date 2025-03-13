/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a deferred maintenance window</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeferredMaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class DeferredMaintenanceWindow
  {
  public:
    AWS_REDSHIFT_API DeferredMaintenanceWindow() = default;
    AWS_REDSHIFT_API DeferredMaintenanceWindow(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DeferredMaintenanceWindow& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const { return m_deferMaintenanceIdentifier; }
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }
    template<typename DeferMaintenanceIdentifierT = Aws::String>
    void SetDeferMaintenanceIdentifier(DeferMaintenanceIdentifierT&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::forward<DeferMaintenanceIdentifierT>(value); }
    template<typename DeferMaintenanceIdentifierT = Aws::String>
    DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(DeferMaintenanceIdentifierT&& value) { SetDeferMaintenanceIdentifier(std::forward<DeferMaintenanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceStartTime() const { return m_deferMaintenanceStartTime; }
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }
    template<typename DeferMaintenanceStartTimeT = Aws::Utils::DateTime>
    void SetDeferMaintenanceStartTime(DeferMaintenanceStartTimeT&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::forward<DeferMaintenanceStartTimeT>(value); }
    template<typename DeferMaintenanceStartTimeT = Aws::Utils::DateTime>
    DeferredMaintenanceWindow& WithDeferMaintenanceStartTime(DeferMaintenanceStartTimeT&& value) { SetDeferMaintenanceStartTime(std::forward<DeferMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceEndTime() const { return m_deferMaintenanceEndTime; }
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }
    template<typename DeferMaintenanceEndTimeT = Aws::Utils::DateTime>
    void SetDeferMaintenanceEndTime(DeferMaintenanceEndTimeT&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::forward<DeferMaintenanceEndTimeT>(value); }
    template<typename DeferMaintenanceEndTimeT = Aws::Utils::DateTime>
    DeferredMaintenanceWindow& WithDeferMaintenanceEndTime(DeferMaintenanceEndTimeT&& value) { SetDeferMaintenanceEndTime(std::forward<DeferMaintenanceEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deferMaintenanceIdentifier;
    bool m_deferMaintenanceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_deferMaintenanceStartTime{};
    bool m_deferMaintenanceStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deferMaintenanceEndTime{};
    bool m_deferMaintenanceEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
