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
    AWS_WORKSPACES_API AccountModification() = default;
    AWS_WORKSPACES_API AccountModification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API AccountModification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline DedicatedTenancyModificationStateEnum GetModificationState() const { return m_modificationState; }
    inline bool ModificationStateHasBeenSet() const { return m_modificationStateHasBeenSet; }
    inline void SetModificationState(DedicatedTenancyModificationStateEnum value) { m_modificationStateHasBeenSet = true; m_modificationState = value; }
    inline AccountModification& WithModificationState(DedicatedTenancyModificationStateEnum value) { SetModificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline DedicatedTenancySupportResultEnum GetDedicatedTenancySupport() const { return m_dedicatedTenancySupport; }
    inline bool DedicatedTenancySupportHasBeenSet() const { return m_dedicatedTenancySupportHasBeenSet; }
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportResultEnum value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = value; }
    inline AccountModification& WithDedicatedTenancySupport(DedicatedTenancySupportResultEnum value) { SetDedicatedTenancySupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const { return m_dedicatedTenancyManagementCidrRange; }
    inline bool DedicatedTenancyManagementCidrRangeHasBeenSet() const { return m_dedicatedTenancyManagementCidrRangeHasBeenSet; }
    template<typename DedicatedTenancyManagementCidrRangeT = Aws::String>
    void SetDedicatedTenancyManagementCidrRange(DedicatedTenancyManagementCidrRangeT&& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = std::forward<DedicatedTenancyManagementCidrRangeT>(value); }
    template<typename DedicatedTenancyManagementCidrRangeT = Aws::String>
    AccountModification& WithDedicatedTenancyManagementCidrRange(DedicatedTenancyManagementCidrRangeT&& value) { SetDedicatedTenancyManagementCidrRange(std::forward<DedicatedTenancyManagementCidrRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AccountModification& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    AccountModification& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    AccountModification& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    DedicatedTenancyModificationStateEnum m_modificationState{DedicatedTenancyModificationStateEnum::NOT_SET};
    bool m_modificationStateHasBeenSet = false;

    DedicatedTenancySupportResultEnum m_dedicatedTenancySupport{DedicatedTenancySupportResultEnum::NOT_SET};
    bool m_dedicatedTenancySupportHasBeenSet = false;

    Aws::String m_dedicatedTenancyManagementCidrRange;
    bool m_dedicatedTenancyManagementCidrRangeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
