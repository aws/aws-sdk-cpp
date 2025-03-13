/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The current status of Auto-Tune for the domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneStatus">AWS
   * API Reference</a></p>
   */
  class AutoTuneStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneStatus() = default;
    AWS_OPENSEARCHSERVICE_API AutoTuneStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date and time when Auto-Tune was enabled for the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    AutoTuneStatus& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the Auto-Tune options were last updated for the
     * domain.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const { return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    void SetUpdateDate(UpdateDateT&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::forward<UpdateDateT>(value); }
    template<typename UpdateDateT = Aws::Utils::DateTime>
    AutoTuneStatus& WithUpdateDate(UpdateDateT&& value) { SetUpdateDate(std::forward<UpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the Auto-Tune options.</p>
     */
    inline int GetUpdateVersion() const { return m_updateVersion; }
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }
    inline AutoTuneStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline AutoTuneState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AutoTuneState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AutoTuneStatus& WithState(AutoTuneState value) { SetState(value); return *this;}
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
    AutoTuneStatus& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain is being deleted.</p>
     */
    inline bool GetPendingDeletion() const { return m_pendingDeletion; }
    inline bool PendingDeletionHasBeenSet() const { return m_pendingDeletionHasBeenSet; }
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }
    inline AutoTuneStatus& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate{};
    bool m_updateDateHasBeenSet = false;

    int m_updateVersion{0};
    bool m_updateVersionHasBeenSet = false;

    AutoTuneState m_state{AutoTuneState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    bool m_pendingDeletion{false};
    bool m_pendingDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
