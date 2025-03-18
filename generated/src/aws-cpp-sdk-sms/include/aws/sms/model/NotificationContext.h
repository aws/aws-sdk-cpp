/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ValidationStatus.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Contains the status of validating an application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/NotificationContext">AWS
   * API Reference</a></p>
   */
  class NotificationContext
  {
  public:
    AWS_SMS_API NotificationContext() = default;
    AWS_SMS_API NotificationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API NotificationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const { return m_validationId; }
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }
    template<typename ValidationIdT = Aws::String>
    void SetValidationId(ValidationIdT&& value) { m_validationIdHasBeenSet = true; m_validationId = std::forward<ValidationIdT>(value); }
    template<typename ValidationIdT = Aws::String>
    NotificationContext& WithValidationId(ValidationIdT&& value) { SetValidationId(std::forward<ValidationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation.</p>
     */
    inline ValidationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ValidationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotificationContext& WithStatus(ValidationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    NotificationContext& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    ValidationStatus m_status{ValidationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
