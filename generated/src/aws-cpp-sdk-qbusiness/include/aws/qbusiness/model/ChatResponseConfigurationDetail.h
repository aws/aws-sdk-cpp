/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ChatResponseConfigurationStatus.h>
#include <aws/qbusiness/model/ErrorDetail.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ResponseConfigurationType.h>
#include <aws/qbusiness/model/ResponseConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Detailed information about a chat response configuration, including
   * comprehensive settings and parameters that define how Amazon Q Business
   * generates and formats responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ChatResponseConfigurationDetail">AWS
   * API Reference</a></p>
   */
  class ChatResponseConfigurationDetail
  {
  public:
    AWS_QBUSINESS_API ChatResponseConfigurationDetail() = default;
    AWS_QBUSINESS_API ChatResponseConfigurationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ChatResponseConfigurationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of specific response configuration settings that collectively
     * define how responses are generated, formatted, and presented to users in chat
     * interactions.</p>
     */
    inline const Aws::Map<ResponseConfigurationType, ResponseConfiguration>& GetResponseConfigurations() const { return m_responseConfigurations; }
    inline bool ResponseConfigurationsHasBeenSet() const { return m_responseConfigurationsHasBeenSet; }
    template<typename ResponseConfigurationsT = Aws::Map<ResponseConfigurationType, ResponseConfiguration>>
    void SetResponseConfigurations(ResponseConfigurationsT&& value) { m_responseConfigurationsHasBeenSet = true; m_responseConfigurations = std::forward<ResponseConfigurationsT>(value); }
    template<typename ResponseConfigurationsT = Aws::Map<ResponseConfigurationType, ResponseConfiguration>>
    ChatResponseConfigurationDetail& WithResponseConfigurations(ResponseConfigurationsT&& value) { SetResponseConfigurations(std::forward<ResponseConfigurationsT>(value)); return *this;}
    inline ChatResponseConfigurationDetail& AddResponseConfigurations(ResponseConfigurationType key, ResponseConfiguration value) {
      m_responseConfigurationsHasBeenSet = true; m_responseConfigurations.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A summary of the response configuration details, providing a concise overview
     * of the key parameters and settings that define the response generation
     * behavior.</p>
     */
    inline const Aws::String& GetResponseConfigurationSummary() const { return m_responseConfigurationSummary; }
    inline bool ResponseConfigurationSummaryHasBeenSet() const { return m_responseConfigurationSummaryHasBeenSet; }
    template<typename ResponseConfigurationSummaryT = Aws::String>
    void SetResponseConfigurationSummary(ResponseConfigurationSummaryT&& value) { m_responseConfigurationSummaryHasBeenSet = true; m_responseConfigurationSummary = std::forward<ResponseConfigurationSummaryT>(value); }
    template<typename ResponseConfigurationSummaryT = Aws::String>
    ChatResponseConfigurationDetail& WithResponseConfigurationSummary(ResponseConfigurationSummaryT&& value) { SetResponseConfigurationSummary(std::forward<ResponseConfigurationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the chat response configuration, indicating whether it
     * is active, pending, or in another state that affects its availability for
     * use.</p>
     */
    inline ChatResponseConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChatResponseConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChatResponseConfigurationDetail& WithStatus(ChatResponseConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetail& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    ChatResponseConfigurationDetail& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the detailed chat response configuration was
     * last modified, helping administrators track changes and maintain version
     * awareness.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ChatResponseConfigurationDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<ResponseConfigurationType, ResponseConfiguration> m_responseConfigurations;
    bool m_responseConfigurationsHasBeenSet = false;

    Aws::String m_responseConfigurationSummary;
    bool m_responseConfigurationSummaryHasBeenSet = false;

    ChatResponseConfigurationStatus m_status{ChatResponseConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
