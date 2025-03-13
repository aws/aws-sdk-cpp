/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/servicecatalog/model/LastSyncStatus.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Provides details about the product's connection sync and contains the
   * following sub-fields. </p> <ul> <li> <p> <code>LastSyncTime</code> </p> </li>
   * <li> <p> <code>LastSyncStatus</code> </p> </li> <li> <p>
   * <code>LastSyncStatusMessage</code> </p> </li> <li> <p>
   * <code>LastSuccessfulSyncTime</code> </p> </li> <li> <p>
   * <code>LastSuccessfulSyncProvisioningArtifactID</code> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/LastSync">AWS
   * API Reference</a></p>
   */
  class LastSync
  {
  public:
    AWS_SERVICECATALOG_API LastSync() = default;
    AWS_SERVICECATALOG_API LastSync(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API LastSync& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncTime() const { return m_lastSyncTime; }
    inline bool LastSyncTimeHasBeenSet() const { return m_lastSyncTimeHasBeenSet; }
    template<typename LastSyncTimeT = Aws::Utils::DateTime>
    void SetLastSyncTime(LastSyncTimeT&& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = std::forward<LastSyncTimeT>(value); }
    template<typename LastSyncTimeT = Aws::Utils::DateTime>
    LastSync& WithLastSyncTime(LastSyncTimeT&& value) { SetLastSyncTime(std::forward<LastSyncTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline LastSyncStatus GetLastSyncStatus() const { return m_lastSyncStatus; }
    inline bool LastSyncStatusHasBeenSet() const { return m_lastSyncStatusHasBeenSet; }
    inline void SetLastSyncStatus(LastSyncStatus value) { m_lastSyncStatusHasBeenSet = true; m_lastSyncStatus = value; }
    inline LastSync& WithLastSyncStatus(LastSyncStatus value) { SetLastSyncStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync's status message. </p>
     */
    inline const Aws::String& GetLastSyncStatusMessage() const { return m_lastSyncStatusMessage; }
    inline bool LastSyncStatusMessageHasBeenSet() const { return m_lastSyncStatusMessageHasBeenSet; }
    template<typename LastSyncStatusMessageT = Aws::String>
    void SetLastSyncStatusMessage(LastSyncStatusMessageT&& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = std::forward<LastSyncStatusMessageT>(value); }
    template<typename LastSyncStatusMessageT = Aws::String>
    LastSync& WithLastSyncStatusMessage(LastSyncStatusMessageT&& value) { SetLastSyncStatusMessage(std::forward<LastSyncStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulSyncTime() const { return m_lastSuccessfulSyncTime; }
    inline bool LastSuccessfulSyncTimeHasBeenSet() const { return m_lastSuccessfulSyncTimeHasBeenSet; }
    template<typename LastSuccessfulSyncTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulSyncTime(LastSuccessfulSyncTimeT&& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = std::forward<LastSuccessfulSyncTimeT>(value); }
    template<typename LastSuccessfulSyncTimeT = Aws::Utils::DateTime>
    LastSync& WithLastSuccessfulSyncTime(LastSuccessfulSyncTimeT&& value) { SetLastSuccessfulSyncTime(std::forward<LastSuccessfulSyncTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline const Aws::String& GetLastSuccessfulSyncProvisioningArtifactId() const { return m_lastSuccessfulSyncProvisioningArtifactId; }
    inline bool LastSuccessfulSyncProvisioningArtifactIdHasBeenSet() const { return m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet; }
    template<typename LastSuccessfulSyncProvisioningArtifactIdT = Aws::String>
    void SetLastSuccessfulSyncProvisioningArtifactId(LastSuccessfulSyncProvisioningArtifactIdT&& value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId = std::forward<LastSuccessfulSyncProvisioningArtifactIdT>(value); }
    template<typename LastSuccessfulSyncProvisioningArtifactIdT = Aws::String>
    LastSync& WithLastSuccessfulSyncProvisioningArtifactId(LastSuccessfulSyncProvisioningArtifactIdT&& value) { SetLastSuccessfulSyncProvisioningArtifactId(std::forward<LastSuccessfulSyncProvisioningArtifactIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastSyncTime{};
    bool m_lastSyncTimeHasBeenSet = false;

    LastSyncStatus m_lastSyncStatus{LastSyncStatus::NOT_SET};
    bool m_lastSyncStatusHasBeenSet = false;

    Aws::String m_lastSyncStatusMessage;
    bool m_lastSyncStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulSyncTime{};
    bool m_lastSuccessfulSyncTimeHasBeenSet = false;

    Aws::String m_lastSuccessfulSyncProvisioningArtifactId;
    bool m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
