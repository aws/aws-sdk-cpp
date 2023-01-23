/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A time windows during which maintenance was deferred for an Amazon Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterDeferredMaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterDeferredMaintenanceWindow
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterDeferredMaintenanceWindow();
    AWS_SECURITYHUB_API AwsRedshiftClusterDeferredMaintenanceWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterDeferredMaintenanceWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetDeferMaintenanceEndTime() const{ return m_deferMaintenanceEndTime; }

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDeferMaintenanceEndTime(const Aws::String& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = value; }

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDeferMaintenanceEndTime(Aws::String&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::move(value); }

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDeferMaintenanceEndTime(const char* value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime.assign(value); }

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(const Aws::String& value) { SetDeferMaintenanceEndTime(value); return *this;}

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(Aws::String&& value) { SetDeferMaintenanceEndTime(std::move(value)); return *this;}

    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(const char* value) { SetDeferMaintenanceEndTime(value); return *this;}


    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const{ return m_deferMaintenanceIdentifier; }

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(const Aws::String& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = value; }

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(Aws::String&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(const char* value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const Aws::String& value) { SetDeferMaintenanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(Aws::String&& value) { SetDeferMaintenanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const char* value) { SetDeferMaintenanceIdentifier(value); return *this;}


    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetDeferMaintenanceStartTime() const{ return m_deferMaintenanceStartTime; }

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDeferMaintenanceStartTime(const Aws::String& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = value; }

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDeferMaintenanceStartTime(Aws::String&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::move(value); }

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetDeferMaintenanceStartTime(const char* value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime.assign(value); }

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(const Aws::String& value) { SetDeferMaintenanceStartTime(value); return *this;}

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(Aws::String&& value) { SetDeferMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>Uses
     * the <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(const char* value) { SetDeferMaintenanceStartTime(value); return *this;}

  private:

    Aws::String m_deferMaintenanceEndTime;
    bool m_deferMaintenanceEndTimeHasBeenSet = false;

    Aws::String m_deferMaintenanceIdentifier;
    bool m_deferMaintenanceIdentifierHasBeenSet = false;

    Aws::String m_deferMaintenanceStartTime;
    bool m_deferMaintenanceStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
