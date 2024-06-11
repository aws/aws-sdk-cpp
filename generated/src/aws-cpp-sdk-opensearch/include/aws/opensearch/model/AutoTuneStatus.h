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
    AWS_OPENSEARCHSERVICE_API AutoTuneStatus();
    AWS_OPENSEARCHSERVICE_API AutoTuneStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Date and time when Auto-Tune was enabled for the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline AutoTuneStatus& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline AutoTuneStatus& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the Auto-Tune options were last updated for the
     * domain.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDate() const{ return m_updateDate; }
    inline bool UpdateDateHasBeenSet() const { return m_updateDateHasBeenSet; }
    inline void SetUpdateDate(const Aws::Utils::DateTime& value) { m_updateDateHasBeenSet = true; m_updateDate = value; }
    inline void SetUpdateDate(Aws::Utils::DateTime&& value) { m_updateDateHasBeenSet = true; m_updateDate = std::move(value); }
    inline AutoTuneStatus& WithUpdateDate(const Aws::Utils::DateTime& value) { SetUpdateDate(value); return *this;}
    inline AutoTuneStatus& WithUpdateDate(Aws::Utils::DateTime&& value) { SetUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the Auto-Tune options.</p>
     */
    inline int GetUpdateVersion() const{ return m_updateVersion; }
    inline bool UpdateVersionHasBeenSet() const { return m_updateVersionHasBeenSet; }
    inline void SetUpdateVersion(int value) { m_updateVersionHasBeenSet = true; m_updateVersion = value; }
    inline AutoTuneStatus& WithUpdateVersion(int value) { SetUpdateVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of Auto-Tune on the domain.</p>
     */
    inline const AutoTuneState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AutoTuneState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AutoTuneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AutoTuneStatus& WithState(const AutoTuneState& value) { SetState(value); return *this;}
    inline AutoTuneStatus& WithState(AutoTuneState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any errors that occurred while enabling or disabling Auto-Tune.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline AutoTuneStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline AutoTuneStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline AutoTuneStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain is being deleted.</p>
     */
    inline bool GetPendingDeletion() const{ return m_pendingDeletion; }
    inline bool PendingDeletionHasBeenSet() const { return m_pendingDeletionHasBeenSet; }
    inline void SetPendingDeletion(bool value) { m_pendingDeletionHasBeenSet = true; m_pendingDeletion = value; }
    inline AutoTuneStatus& WithPendingDeletion(bool value) { SetPendingDeletion(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_updateDate;
    bool m_updateDateHasBeenSet = false;

    int m_updateVersion;
    bool m_updateVersionHasBeenSet = false;

    AutoTuneState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    bool m_pendingDeletion;
    bool m_pendingDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
