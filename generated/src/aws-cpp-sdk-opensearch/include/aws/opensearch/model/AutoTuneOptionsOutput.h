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
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput();
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline const AutoTuneState& GetState() const{ return m_state; }

    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline void SetState(const AutoTuneState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline void SetState(AutoTuneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline AutoTuneOptionsOutput& WithState(const AutoTuneState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline AutoTuneOptionsOutput& WithState(AutoTuneState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline AutoTuneOptionsOutput& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Whether the domain's off-peak window will be used to deploy Auto-Tune changes
     * rather than a maintenance schedule.</p>
     */
    inline bool GetUseOffPeakWindow() const{ return m_useOffPeakWindow; }

    /**
     * <p>Whether the domain's off-peak window will be used to deploy Auto-Tune changes
     * rather than a maintenance schedule.</p>
     */
    inline bool UseOffPeakWindowHasBeenSet() const { return m_useOffPeakWindowHasBeenSet; }

    /**
     * <p>Whether the domain's off-peak window will be used to deploy Auto-Tune changes
     * rather than a maintenance schedule.</p>
     */
    inline void SetUseOffPeakWindow(bool value) { m_useOffPeakWindowHasBeenSet = true; m_useOffPeakWindow = value; }

    /**
     * <p>Whether the domain's off-peak window will be used to deploy Auto-Tune changes
     * rather than a maintenance schedule.</p>
     */
    inline AutoTuneOptionsOutput& WithUseOffPeakWindow(bool value) { SetUseOffPeakWindow(value); return *this;}

  private:

    AutoTuneState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    bool m_useOffPeakWindow;
    bool m_useOffPeakWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
