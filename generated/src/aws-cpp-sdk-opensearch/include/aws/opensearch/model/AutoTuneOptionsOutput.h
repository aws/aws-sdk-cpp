/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneState.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The Auto-Tune settings for a domain, displayed when enabling or disabling
   * Auto-Tune.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsOutput">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptionsOutput
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput() = default;
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline AutoTuneState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AutoTuneState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AutoTuneOptionsOutput& WithState(AutoTuneState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    AutoTuneOptionsOutput& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the domain's off-peak window will be used to deploy Auto-Tune changes
     * rather than a maintenance schedule.</p>
     */
    inline bool GetUseOffPeakWindow() const { return m_useOffPeakWindow; }
    inline bool UseOffPeakWindowHasBeenSet() const { return m_useOffPeakWindowHasBeenSet; }
    inline void SetUseOffPeakWindow(bool value) { m_useOffPeakWindowHasBeenSet = true; m_useOffPeakWindow = value; }
    inline AutoTuneOptionsOutput& WithUseOffPeakWindow(bool value) { SetUseOffPeakWindow(value); return *this;}
    ///@}
  private:

    AutoTuneState m_state{AutoTuneState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    bool m_useOffPeakWindow{false};
    bool m_useOffPeakWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
