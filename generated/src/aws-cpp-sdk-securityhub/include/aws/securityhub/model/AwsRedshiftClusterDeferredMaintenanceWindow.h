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
    AWS_SECURITYHUB_API AwsRedshiftClusterDeferredMaintenanceWindow() = default;
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
    inline const Aws::String& GetDeferMaintenanceEndTime() const { return m_deferMaintenanceEndTime; }
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }
    template<typename DeferMaintenanceEndTimeT = Aws::String>
    void SetDeferMaintenanceEndTime(DeferMaintenanceEndTimeT&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::forward<DeferMaintenanceEndTimeT>(value); }
    template<typename DeferMaintenanceEndTimeT = Aws::String>
    AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceEndTime(DeferMaintenanceEndTimeT&& value) { SetDeferMaintenanceEndTime(std::forward<DeferMaintenanceEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const { return m_deferMaintenanceIdentifier; }
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }
    template<typename DeferMaintenanceIdentifierT = Aws::String>
    void SetDeferMaintenanceIdentifier(DeferMaintenanceIdentifierT&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::forward<DeferMaintenanceIdentifierT>(value); }
    template<typename DeferMaintenanceIdentifierT = Aws::String>
    AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(DeferMaintenanceIdentifierT&& value) { SetDeferMaintenanceIdentifier(std::forward<DeferMaintenanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start of the time window for which maintenance was deferred.</p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetDeferMaintenanceStartTime() const { return m_deferMaintenanceStartTime; }
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }
    template<typename DeferMaintenanceStartTimeT = Aws::String>
    void SetDeferMaintenanceStartTime(DeferMaintenanceStartTimeT&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::forward<DeferMaintenanceStartTimeT>(value); }
    template<typename DeferMaintenanceStartTimeT = Aws::String>
    AwsRedshiftClusterDeferredMaintenanceWindow& WithDeferMaintenanceStartTime(DeferMaintenanceStartTimeT&& value) { SetDeferMaintenanceStartTime(std::forward<DeferMaintenanceStartTimeT>(value)); return *this;}
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
