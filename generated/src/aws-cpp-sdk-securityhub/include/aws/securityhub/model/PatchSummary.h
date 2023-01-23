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
   * <p>Provides an overview of the patch compliance status for an instance against a
   * selected compliance standard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/PatchSummary">AWS
   * API Reference</a></p>
   */
  class PatchSummary
  {
  public:
    AWS_SECURITYHUB_API PatchSummary();
    AWS_SECURITYHUB_API PatchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API PatchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline PatchSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline PatchSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the compliance standard that was used to determine the
     * patch compliance status.</p>
     */
    inline PatchSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The number of patches from the compliance standard that were installed
     * successfully.</p>
     */
    inline int GetInstalledCount() const{ return m_installedCount; }

    /**
     * <p>The number of patches from the compliance standard that were installed
     * successfully.</p>
     */
    inline bool InstalledCountHasBeenSet() const { return m_installedCountHasBeenSet; }

    /**
     * <p>The number of patches from the compliance standard that were installed
     * successfully.</p>
     */
    inline void SetInstalledCount(int value) { m_installedCountHasBeenSet = true; m_installedCount = value; }

    /**
     * <p>The number of patches from the compliance standard that were installed
     * successfully.</p>
     */
    inline PatchSummary& WithInstalledCount(int value) { SetInstalledCount(value); return *this;}


    /**
     * <p>The number of patches that are part of the compliance standard but are not
     * installed. The count includes patches that failed to install.</p>
     */
    inline int GetMissingCount() const{ return m_missingCount; }

    /**
     * <p>The number of patches that are part of the compliance standard but are not
     * installed. The count includes patches that failed to install.</p>
     */
    inline bool MissingCountHasBeenSet() const { return m_missingCountHasBeenSet; }

    /**
     * <p>The number of patches that are part of the compliance standard but are not
     * installed. The count includes patches that failed to install.</p>
     */
    inline void SetMissingCount(int value) { m_missingCountHasBeenSet = true; m_missingCount = value; }

    /**
     * <p>The number of patches that are part of the compliance standard but are not
     * installed. The count includes patches that failed to install.</p>
     */
    inline PatchSummary& WithMissingCount(int value) { SetMissingCount(value); return *this;}


    /**
     * <p>The number of patches from the compliance standard that failed to
     * install.</p>
     */
    inline int GetFailedCount() const{ return m_failedCount; }

    /**
     * <p>The number of patches from the compliance standard that failed to
     * install.</p>
     */
    inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }

    /**
     * <p>The number of patches from the compliance standard that failed to
     * install.</p>
     */
    inline void SetFailedCount(int value) { m_failedCountHasBeenSet = true; m_failedCount = value; }

    /**
     * <p>The number of patches from the compliance standard that failed to
     * install.</p>
     */
    inline PatchSummary& WithFailedCount(int value) { SetFailedCount(value); return *this;}


    /**
     * <p>The number of installed patches that are not part of the compliance
     * standard.</p>
     */
    inline int GetInstalledOtherCount() const{ return m_installedOtherCount; }

    /**
     * <p>The number of installed patches that are not part of the compliance
     * standard.</p>
     */
    inline bool InstalledOtherCountHasBeenSet() const { return m_installedOtherCountHasBeenSet; }

    /**
     * <p>The number of installed patches that are not part of the compliance
     * standard.</p>
     */
    inline void SetInstalledOtherCount(int value) { m_installedOtherCountHasBeenSet = true; m_installedOtherCount = value; }

    /**
     * <p>The number of installed patches that are not part of the compliance
     * standard.</p>
     */
    inline PatchSummary& WithInstalledOtherCount(int value) { SetInstalledOtherCount(value); return *this;}


    /**
     * <p>The number of patches that are installed but are also on a list of patches
     * that the customer rejected.</p>
     */
    inline int GetInstalledRejectedCount() const{ return m_installedRejectedCount; }

    /**
     * <p>The number of patches that are installed but are also on a list of patches
     * that the customer rejected.</p>
     */
    inline bool InstalledRejectedCountHasBeenSet() const { return m_installedRejectedCountHasBeenSet; }

    /**
     * <p>The number of patches that are installed but are also on a list of patches
     * that the customer rejected.</p>
     */
    inline void SetInstalledRejectedCount(int value) { m_installedRejectedCountHasBeenSet = true; m_installedRejectedCount = value; }

    /**
     * <p>The number of patches that are installed but are also on a list of patches
     * that the customer rejected.</p>
     */
    inline PatchSummary& WithInstalledRejectedCount(int value) { SetInstalledRejectedCount(value); return *this;}


    /**
     * <p>The number of patches that were applied, but that require the instance to be
     * rebooted in order to be marked as installed.</p>
     */
    inline int GetInstalledPendingReboot() const{ return m_installedPendingReboot; }

    /**
     * <p>The number of patches that were applied, but that require the instance to be
     * rebooted in order to be marked as installed.</p>
     */
    inline bool InstalledPendingRebootHasBeenSet() const { return m_installedPendingRebootHasBeenSet; }

    /**
     * <p>The number of patches that were applied, but that require the instance to be
     * rebooted in order to be marked as installed.</p>
     */
    inline void SetInstalledPendingReboot(int value) { m_installedPendingRebootHasBeenSet = true; m_installedPendingReboot = value; }

    /**
     * <p>The number of patches that were applied, but that require the instance to be
     * rebooted in order to be marked as installed.</p>
     */
    inline PatchSummary& WithInstalledPendingReboot(int value) { SetInstalledPendingReboot(value); return *this;}


    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetOperationStartTime() const{ return m_operationStartTime; }

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool OperationStartTimeHasBeenSet() const { return m_operationStartTimeHasBeenSet; }

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetOperationStartTime(const Aws::String& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = value; }

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetOperationStartTime(Aws::String&& value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime = std::move(value); }

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetOperationStartTime(const char* value) { m_operationStartTimeHasBeenSet = true; m_operationStartTime.assign(value); }

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline PatchSummary& WithOperationStartTime(const Aws::String& value) { SetOperationStartTime(value); return *this;}

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline PatchSummary& WithOperationStartTime(Aws::String&& value) { SetOperationStartTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the operation started.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline PatchSummary& WithOperationStartTime(const char* value) { SetOperationStartTime(value); return *this;}


    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetOperationEndTime() const{ return m_operationEndTime; }

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool OperationEndTimeHasBeenSet() const { return m_operationEndTimeHasBeenSet; }

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetOperationEndTime(const Aws::String& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = value; }

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetOperationEndTime(Aws::String&& value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime = std::move(value); }

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetOperationEndTime(const char* value) { m_operationEndTimeHasBeenSet = true; m_operationEndTime.assign(value); }

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline PatchSummary& WithOperationEndTime(const Aws::String& value) { SetOperationEndTime(value); return *this;}

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline PatchSummary& WithOperationEndTime(Aws::String&& value) { SetOperationEndTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the operation completed.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline PatchSummary& WithOperationEndTime(const char* value) { SetOperationEndTime(value); return *this;}


    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline const Aws::String& GetRebootOption() const{ return m_rebootOption; }

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline bool RebootOptionHasBeenSet() const { return m_rebootOptionHasBeenSet; }

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline void SetRebootOption(const Aws::String& value) { m_rebootOptionHasBeenSet = true; m_rebootOption = value; }

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline void SetRebootOption(Aws::String&& value) { m_rebootOptionHasBeenSet = true; m_rebootOption = std::move(value); }

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline void SetRebootOption(const char* value) { m_rebootOptionHasBeenSet = true; m_rebootOption.assign(value); }

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline PatchSummary& WithRebootOption(const Aws::String& value) { SetRebootOption(value); return *this;}

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline PatchSummary& WithRebootOption(Aws::String&& value) { SetRebootOption(std::move(value)); return *this;}

    /**
     * <p>The reboot option specified for the instance.</p>
     */
    inline PatchSummary& WithRebootOption(const char* value) { SetRebootOption(value); return *this;}


    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline const Aws::String& GetOperation() const{ return m_operation; }

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline PatchSummary& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline PatchSummary& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}

    /**
     * <p>The type of patch operation performed. For Patch Manager, the values are
     * <code>SCAN</code> and <code>INSTALL</code>. </p>
     */
    inline PatchSummary& WithOperation(const char* value) { SetOperation(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_installedCount;
    bool m_installedCountHasBeenSet = false;

    int m_missingCount;
    bool m_missingCountHasBeenSet = false;

    int m_failedCount;
    bool m_failedCountHasBeenSet = false;

    int m_installedOtherCount;
    bool m_installedOtherCountHasBeenSet = false;

    int m_installedRejectedCount;
    bool m_installedRejectedCountHasBeenSet = false;

    int m_installedPendingReboot;
    bool m_installedPendingRebootHasBeenSet = false;

    Aws::String m_operationStartTime;
    bool m_operationStartTimeHasBeenSet = false;

    Aws::String m_operationEndTime;
    bool m_operationEndTimeHasBeenSet = false;

    Aws::String m_rebootOption;
    bool m_rebootOptionHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
