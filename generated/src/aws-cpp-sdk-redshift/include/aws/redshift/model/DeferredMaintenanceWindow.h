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
    AWS_REDSHIFT_API DeferredMaintenanceWindow();
    AWS_REDSHIFT_API DeferredMaintenanceWindow(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DeferredMaintenanceWindow& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const{ return m_deferMaintenanceIdentifier; }
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }
    inline void SetDeferMaintenanceIdentifier(const Aws::String& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = value; }
    inline void SetDeferMaintenanceIdentifier(Aws::String&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::move(value); }
    inline void SetDeferMaintenanceIdentifier(const char* value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier.assign(value); }
    inline DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const Aws::String& value) { SetDeferMaintenanceIdentifier(value); return *this;}
    inline DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(Aws::String&& value) { SetDeferMaintenanceIdentifier(std::move(value)); return *this;}
    inline DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const char* value) { SetDeferMaintenanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceStartTime() const{ return m_deferMaintenanceStartTime; }
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }
    inline void SetDeferMaintenanceStartTime(const Aws::Utils::DateTime& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = value; }
    inline void SetDeferMaintenanceStartTime(Aws::Utils::DateTime&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::move(value); }
    inline DeferredMaintenanceWindow& WithDeferMaintenanceStartTime(const Aws::Utils::DateTime& value) { SetDeferMaintenanceStartTime(value); return *this;}
    inline DeferredMaintenanceWindow& WithDeferMaintenanceStartTime(Aws::Utils::DateTime&& value) { SetDeferMaintenanceStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceEndTime() const{ return m_deferMaintenanceEndTime; }
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }
    inline void SetDeferMaintenanceEndTime(const Aws::Utils::DateTime& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = value; }
    inline void SetDeferMaintenanceEndTime(Aws::Utils::DateTime&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::move(value); }
    inline DeferredMaintenanceWindow& WithDeferMaintenanceEndTime(const Aws::Utils::DateTime& value) { SetDeferMaintenanceEndTime(value); return *this;}
    inline DeferredMaintenanceWindow& WithDeferMaintenanceEndTime(Aws::Utils::DateTime&& value) { SetDeferMaintenanceEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deferMaintenanceIdentifier;
    bool m_deferMaintenanceIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_deferMaintenanceStartTime;
    bool m_deferMaintenanceStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deferMaintenanceEndTime;
    bool m_deferMaintenanceEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
