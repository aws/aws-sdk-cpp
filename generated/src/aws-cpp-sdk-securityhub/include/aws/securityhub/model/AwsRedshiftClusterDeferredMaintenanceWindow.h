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


    ///@{
    /**
     * <p>The end of the time window for which maintenance was deferred.</p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetDeferMaintenanceEndTime() const{ return m_deferMaintenanceEndTime; }
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }
    inline void SetDeferMaintenanceEndTime(const Aws::String& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = value; }
    inline void SetDeferMaintenanceEndTime(Aws::String&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::move(value); }
    inline void SetDeferMaintenanceEndTime(const char* value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime.assign(value); }
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(const Aws::String& value) { SetDeferMaintenanceEndTime(value); return *this;}
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(Aws::String&& value) { SetDeferMaintenanceEndTime(std::move(value)); return *this;}
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(const char* value) { SetDeferMaintenanceEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const{ return m_deferMaintenanceIdentifier; }
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }
    inline void SetDeferMaintenanceIdentifier(const Aws::String& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = value; }
    inline void SetDeferMaintenanceIdentifier(Aws::String&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::move(value); }
    inline void SetDeferMaintenanceIdentifier(const char* value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier.assign(value); }
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const Aws::String& value) { SetDeferMaintenanceIdentifier(value); return *this;}
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(Aws::String&& value) { SetDeferMaintenanceIdentifier(std::move(value)); return *this;}
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const char* value) { SetDeferMaintenanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetDeferMaintenanceStartTime() const{ return m_deferMaintenanceStartTime; }
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }
    inline void SetDeferMaintenanceStartTime(const Aws::String& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = value; }
    inline void SetDeferMaintenanceStartTime(Aws::String&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::move(value); }
    inline void SetDeferMaintenanceStartTime(const char* value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime.assign(value); }
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(const Aws::String& value) { SetDeferMaintenanceStartTime(value); return *this;}
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(Aws::String&& value) { SetDeferMaintenanceStartTime(std::move(value)); return *this;}
    inline AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(const char* value) { SetDeferMaintenanceStartTime(value); return *this;}
    ///@}
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
