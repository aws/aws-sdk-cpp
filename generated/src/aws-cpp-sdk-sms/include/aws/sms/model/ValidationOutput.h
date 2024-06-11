/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ValidationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/AppValidationOutput.h>
#include <aws/sms/model/ServerValidationOutput.h>
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
   * <p>Contains validation output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ValidationOutput">AWS
   * API Reference</a></p>
   */
  class ValidationOutput
  {
  public:
    AWS_SMS_API ValidationOutput();
    AWS_SMS_API ValidationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ValidationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the validation.</p>
     */
    inline const Aws::String& GetValidationId() const{ return m_validationId; }
    inline bool ValidationIdHasBeenSet() const { return m_validationIdHasBeenSet; }
    inline void SetValidationId(const Aws::String& value) { m_validationIdHasBeenSet = true; m_validationId = value; }
    inline void SetValidationId(Aws::String&& value) { m_validationIdHasBeenSet = true; m_validationId = std::move(value); }
    inline void SetValidationId(const char* value) { m_validationIdHasBeenSet = true; m_validationId.assign(value); }
    inline ValidationOutput& WithValidationId(const Aws::String& value) { SetValidationId(value); return *this;}
    inline ValidationOutput& WithValidationId(Aws::String&& value) { SetValidationId(std::move(value)); return *this;}
    inline ValidationOutput& WithValidationId(const char* value) { SetValidationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the validation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ValidationOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ValidationOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ValidationOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation.</p>
     */
    inline const ValidationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ValidationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ValidationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ValidationOutput& WithStatus(const ValidationStatus& value) { SetStatus(value); return *this;}
    inline ValidationOutput& WithStatus(ValidationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ValidationOutput& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ValidationOutput& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ValidationOutput& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest time that the validation was performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestValidationTime() const{ return m_latestValidationTime; }
    inline bool LatestValidationTimeHasBeenSet() const { return m_latestValidationTimeHasBeenSet; }
    inline void SetLatestValidationTime(const Aws::Utils::DateTime& value) { m_latestValidationTimeHasBeenSet = true; m_latestValidationTime = value; }
    inline void SetLatestValidationTime(Aws::Utils::DateTime&& value) { m_latestValidationTimeHasBeenSet = true; m_latestValidationTime = std::move(value); }
    inline ValidationOutput& WithLatestValidationTime(const Aws::Utils::DateTime& value) { SetLatestValidationTime(value); return *this;}
    inline ValidationOutput& WithLatestValidationTime(Aws::Utils::DateTime&& value) { SetLatestValidationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output from validating an application.</p>
     */
    inline const AppValidationOutput& GetAppValidationOutput() const{ return m_appValidationOutput; }
    inline bool AppValidationOutputHasBeenSet() const { return m_appValidationOutputHasBeenSet; }
    inline void SetAppValidationOutput(const AppValidationOutput& value) { m_appValidationOutputHasBeenSet = true; m_appValidationOutput = value; }
    inline void SetAppValidationOutput(AppValidationOutput&& value) { m_appValidationOutputHasBeenSet = true; m_appValidationOutput = std::move(value); }
    inline ValidationOutput& WithAppValidationOutput(const AppValidationOutput& value) { SetAppValidationOutput(value); return *this;}
    inline ValidationOutput& WithAppValidationOutput(AppValidationOutput&& value) { SetAppValidationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output from validation an instance.</p>
     */
    inline const ServerValidationOutput& GetServerValidationOutput() const{ return m_serverValidationOutput; }
    inline bool ServerValidationOutputHasBeenSet() const { return m_serverValidationOutputHasBeenSet; }
    inline void SetServerValidationOutput(const ServerValidationOutput& value) { m_serverValidationOutputHasBeenSet = true; m_serverValidationOutput = value; }
    inline void SetServerValidationOutput(ServerValidationOutput&& value) { m_serverValidationOutputHasBeenSet = true; m_serverValidationOutput = std::move(value); }
    inline ValidationOutput& WithServerValidationOutput(const ServerValidationOutput& value) { SetServerValidationOutput(value); return *this;}
    inline ValidationOutput& WithServerValidationOutput(ServerValidationOutput&& value) { SetServerValidationOutput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ValidationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_latestValidationTime;
    bool m_latestValidationTimeHasBeenSet = false;

    AppValidationOutput m_appValidationOutput;
    bool m_appValidationOutputHasBeenSet = false;

    ServerValidationOutput m_serverValidationOutput;
    bool m_serverValidationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
