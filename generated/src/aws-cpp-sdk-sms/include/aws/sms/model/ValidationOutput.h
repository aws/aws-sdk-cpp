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
    AWS_SMS_API ValidationOutput() = default;
    AWS_SMS_API ValidationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ValidationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ValidationOutput& WithValidationId(ValidationIdT&& value) { SetValidationId(std::forward<ValidationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the validation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ValidationOutput& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the validation.</p>
     */
    inline ValidationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ValidationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ValidationOutput& WithStatus(ValidationStatus value) { SetStatus(value); return *this;}
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
    ValidationOutput& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest time that the validation was performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestValidationTime() const { return m_latestValidationTime; }
    inline bool LatestValidationTimeHasBeenSet() const { return m_latestValidationTimeHasBeenSet; }
    template<typename LatestValidationTimeT = Aws::Utils::DateTime>
    void SetLatestValidationTime(LatestValidationTimeT&& value) { m_latestValidationTimeHasBeenSet = true; m_latestValidationTime = std::forward<LatestValidationTimeT>(value); }
    template<typename LatestValidationTimeT = Aws::Utils::DateTime>
    ValidationOutput& WithLatestValidationTime(LatestValidationTimeT&& value) { SetLatestValidationTime(std::forward<LatestValidationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output from validating an application.</p>
     */
    inline const AppValidationOutput& GetAppValidationOutput() const { return m_appValidationOutput; }
    inline bool AppValidationOutputHasBeenSet() const { return m_appValidationOutputHasBeenSet; }
    template<typename AppValidationOutputT = AppValidationOutput>
    void SetAppValidationOutput(AppValidationOutputT&& value) { m_appValidationOutputHasBeenSet = true; m_appValidationOutput = std::forward<AppValidationOutputT>(value); }
    template<typename AppValidationOutputT = AppValidationOutput>
    ValidationOutput& WithAppValidationOutput(AppValidationOutputT&& value) { SetAppValidationOutput(std::forward<AppValidationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output from validation an instance.</p>
     */
    inline const ServerValidationOutput& GetServerValidationOutput() const { return m_serverValidationOutput; }
    inline bool ServerValidationOutputHasBeenSet() const { return m_serverValidationOutputHasBeenSet; }
    template<typename ServerValidationOutputT = ServerValidationOutput>
    void SetServerValidationOutput(ServerValidationOutputT&& value) { m_serverValidationOutputHasBeenSet = true; m_serverValidationOutput = std::forward<ServerValidationOutputT>(value); }
    template<typename ServerValidationOutputT = ServerValidationOutput>
    ValidationOutput& WithServerValidationOutput(ServerValidationOutputT&& value) { SetServerValidationOutput(std::forward<ServerValidationOutputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_validationId;
    bool m_validationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ValidationStatus m_status{ValidationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_latestValidationTime{};
    bool m_latestValidationTimeHasBeenSet = false;

    AppValidationOutput m_appValidationOutput;
    bool m_appValidationOutputHasBeenSet = false;

    ServerValidationOutput m_serverValidationOutput;
    bool m_serverValidationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
