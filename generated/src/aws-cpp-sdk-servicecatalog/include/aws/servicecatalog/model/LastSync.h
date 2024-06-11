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
    AWS_SERVICECATALOG_API LastSync();
    AWS_SERVICECATALOG_API LastSync(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API LastSync& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time of the last attempted sync from the repository to the Service
     * Catalog product. </p>
     */
    inline const Aws::Utils::DateTime& GetLastSyncTime() const{ return m_lastSyncTime; }
    inline bool LastSyncTimeHasBeenSet() const { return m_lastSyncTimeHasBeenSet; }
    inline void SetLastSyncTime(const Aws::Utils::DateTime& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = value; }
    inline void SetLastSyncTime(Aws::Utils::DateTime&& value) { m_lastSyncTimeHasBeenSet = true; m_lastSyncTime = std::move(value); }
    inline LastSync& WithLastSyncTime(const Aws::Utils::DateTime& value) { SetLastSyncTime(value); return *this;}
    inline LastSync& WithLastSyncTime(Aws::Utils::DateTime&& value) { SetLastSyncTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the sync. Responses include <code>SUCCEEDED</code> or
     * <code>FAILED</code>. </p>
     */
    inline const LastSyncStatus& GetLastSyncStatus() const{ return m_lastSyncStatus; }
    inline bool LastSyncStatusHasBeenSet() const { return m_lastSyncStatusHasBeenSet; }
    inline void SetLastSyncStatus(const LastSyncStatus& value) { m_lastSyncStatusHasBeenSet = true; m_lastSyncStatus = value; }
    inline void SetLastSyncStatus(LastSyncStatus&& value) { m_lastSyncStatusHasBeenSet = true; m_lastSyncStatus = std::move(value); }
    inline LastSync& WithLastSyncStatus(const LastSyncStatus& value) { SetLastSyncStatus(value); return *this;}
    inline LastSync& WithLastSyncStatus(LastSyncStatus&& value) { SetLastSyncStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync's status message. </p>
     */
    inline const Aws::String& GetLastSyncStatusMessage() const{ return m_lastSyncStatusMessage; }
    inline bool LastSyncStatusMessageHasBeenSet() const { return m_lastSyncStatusMessageHasBeenSet; }
    inline void SetLastSyncStatusMessage(const Aws::String& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = value; }
    inline void SetLastSyncStatusMessage(Aws::String&& value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage = std::move(value); }
    inline void SetLastSyncStatusMessage(const char* value) { m_lastSyncStatusMessageHasBeenSet = true; m_lastSyncStatusMessage.assign(value); }
    inline LastSync& WithLastSyncStatusMessage(const Aws::String& value) { SetLastSyncStatusMessage(value); return *this;}
    inline LastSync& WithLastSyncStatusMessage(Aws::String&& value) { SetLastSyncStatusMessage(std::move(value)); return *this;}
    inline LastSync& WithLastSyncStatusMessage(const char* value) { SetLastSyncStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the latest successful sync from the source repo artifact to the
     * Service Catalog product.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulSyncTime() const{ return m_lastSuccessfulSyncTime; }
    inline bool LastSuccessfulSyncTimeHasBeenSet() const { return m_lastSuccessfulSyncTimeHasBeenSet; }
    inline void SetLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = value; }
    inline void SetLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulSyncTimeHasBeenSet = true; m_lastSuccessfulSyncTime = std::move(value); }
    inline LastSync& WithLastSuccessfulSyncTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulSyncTime(value); return *this;}
    inline LastSync& WithLastSuccessfulSyncTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulSyncTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ProvisioningArtifactID of the ProvisioningArtifact created from the
     * latest successful sync. </p>
     */
    inline const Aws::String& GetLastSuccessfulSyncProvisioningArtifactId() const{ return m_lastSuccessfulSyncProvisioningArtifactId; }
    inline bool LastSuccessfulSyncProvisioningArtifactIdHasBeenSet() const { return m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet; }
    inline void SetLastSuccessfulSyncProvisioningArtifactId(const Aws::String& value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId = value; }
    inline void SetLastSuccessfulSyncProvisioningArtifactId(Aws::String&& value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId = std::move(value); }
    inline void SetLastSuccessfulSyncProvisioningArtifactId(const char* value) { m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = true; m_lastSuccessfulSyncProvisioningArtifactId.assign(value); }
    inline LastSync& WithLastSuccessfulSyncProvisioningArtifactId(const Aws::String& value) { SetLastSuccessfulSyncProvisioningArtifactId(value); return *this;}
    inline LastSync& WithLastSuccessfulSyncProvisioningArtifactId(Aws::String&& value) { SetLastSuccessfulSyncProvisioningArtifactId(std::move(value)); return *this;}
    inline LastSync& WithLastSuccessfulSyncProvisioningArtifactId(const char* value) { SetLastSuccessfulSyncProvisioningArtifactId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastSyncTime;
    bool m_lastSyncTimeHasBeenSet = false;

    LastSyncStatus m_lastSyncStatus;
    bool m_lastSyncStatusHasBeenSet = false;

    Aws::String m_lastSyncStatusMessage;
    bool m_lastSyncStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulSyncTime;
    bool m_lastSuccessfulSyncTimeHasBeenSet = false;

    Aws::String m_lastSuccessfulSyncProvisioningArtifactId;
    bool m_lastSuccessfulSyncProvisioningArtifactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
