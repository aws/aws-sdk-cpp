/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DedicatedTenancyModificationStateEnum.h>
#include <aws/workspaces/model/DedicatedTenancySupportResultEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a modification to the configuration of Bring Your Own License
   * (BYOL) for the specified account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AccountModification">AWS
   * API Reference</a></p>
   */
  class AccountModification
  {
  public:
    AWS_WORKSPACES_API AccountModification();
    AWS_WORKSPACES_API AccountModification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AccountModification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline const DedicatedTenancyModificationStateEnum& GetModificationState() const{ return m_modificationState; }
    inline bool ModificationStateHasBeenSet() const { return m_modificationStateHasBeenSet; }
    inline void SetModificationState(const DedicatedTenancyModificationStateEnum& value) { m_modificationStateHasBeenSet = true; m_modificationState = value; }
    inline void SetModificationState(DedicatedTenancyModificationStateEnum&& value) { m_modificationStateHasBeenSet = true; m_modificationState = std::move(value); }
    inline AccountModification& WithModificationState(const DedicatedTenancyModificationStateEnum& value) { SetModificationState(value); return *this;}
    inline AccountModification& WithModificationState(DedicatedTenancyModificationStateEnum&& value) { SetModificationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline const DedicatedTenancySupportResultEnum& GetDedicatedTenancySupport() const{ return m_dedicatedTenancySupport; }
    inline bool DedicatedTenancySupportHasBeenSet() const { return m_dedicatedTenancySupportHasBeenSet; }
    inline void SetDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = value; }
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = std::move(value); }
    inline AccountModification& WithDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { SetDedicatedTenancySupport(value); return *this;}
    inline AccountModification& WithDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { SetDedicatedTenancySupport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const{ return m_dedicatedTenancyManagementCidrRange; }
    inline bool DedicatedTenancyManagementCidrRangeHasBeenSet() const { return m_dedicatedTenancyManagementCidrRangeHasBeenSet; }
    inline void SetDedicatedTenancyManagementCidrRange(const Aws::String& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = value; }
    inline void SetDedicatedTenancyManagementCidrRange(Aws::String&& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = std::move(value); }
    inline void SetDedicatedTenancyManagementCidrRange(const char* value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange.assign(value); }
    inline AccountModification& WithDedicatedTenancyManagementCidrRange(const Aws::String& value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}
    inline AccountModification& WithDedicatedTenancyManagementCidrRange(Aws::String&& value) { SetDedicatedTenancyManagementCidrRange(std::move(value)); return *this;}
    inline AccountModification& WithDedicatedTenancyManagementCidrRange(const char* value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AccountModification& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AccountModification& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline AccountModification& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline AccountModification& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline AccountModification& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline AccountModification& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline AccountModification& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline AccountModification& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    DedicatedTenancyModificationStateEnum m_modificationState;
    bool m_modificationStateHasBeenSet = false;

    DedicatedTenancySupportResultEnum m_dedicatedTenancySupport;
    bool m_dedicatedTenancySupportHasBeenSet = false;

    Aws::String m_dedicatedTenancyManagementCidrRange;
    bool m_dedicatedTenancyManagementCidrRangeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
