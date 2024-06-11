/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/voice-id/model/DomainStatus.h>
#include <aws/voice-id/model/ServerSideEncryptionConfiguration.h>
#include <aws/voice-id/model/ServerSideEncryptionUpdateDetails.h>
#include <aws/voice-id/model/WatchlistDetails.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains a summary of information about a domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DomainSummary">AWS
   * API Reference</a></p>
   */
  class DomainSummary
  {
  public:
    AWS_VOICEID_API DomainSummary();
    AWS_VOICEID_API DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DomainSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DomainSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DomainSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DomainSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DomainSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DomainSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DomainSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DomainSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline DomainSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DomainSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DomainSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::move(value); }
    inline DomainSummary& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}
    inline DomainSummary& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DomainSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DomainSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DomainSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline DomainSummary& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline DomainSummary& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline const ServerSideEncryptionUpdateDetails& GetServerSideEncryptionUpdateDetails() const{ return m_serverSideEncryptionUpdateDetails; }
    inline bool ServerSideEncryptionUpdateDetailsHasBeenSet() const { return m_serverSideEncryptionUpdateDetailsHasBeenSet; }
    inline void SetServerSideEncryptionUpdateDetails(const ServerSideEncryptionUpdateDetails& value) { m_serverSideEncryptionUpdateDetailsHasBeenSet = true; m_serverSideEncryptionUpdateDetails = value; }
    inline void SetServerSideEncryptionUpdateDetails(ServerSideEncryptionUpdateDetails&& value) { m_serverSideEncryptionUpdateDetailsHasBeenSet = true; m_serverSideEncryptionUpdateDetails = std::move(value); }
    inline DomainSummary& WithServerSideEncryptionUpdateDetails(const ServerSideEncryptionUpdateDetails& value) { SetServerSideEncryptionUpdateDetails(value); return *this;}
    inline DomainSummary& WithServerSideEncryptionUpdateDetails(ServerSideEncryptionUpdateDetails&& value) { SetServerSideEncryptionUpdateDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline DomainSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DomainSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about <code>watchlistDetails</code> and
     * <code>DefaultWatchlistID</code>. </p>
     */
    inline const WatchlistDetails& GetWatchlistDetails() const{ return m_watchlistDetails; }
    inline bool WatchlistDetailsHasBeenSet() const { return m_watchlistDetailsHasBeenSet; }
    inline void SetWatchlistDetails(const WatchlistDetails& value) { m_watchlistDetailsHasBeenSet = true; m_watchlistDetails = value; }
    inline void SetWatchlistDetails(WatchlistDetails&& value) { m_watchlistDetailsHasBeenSet = true; m_watchlistDetails = std::move(value); }
    inline DomainSummary& WithWatchlistDetails(const WatchlistDetails& value) { SetWatchlistDetails(value); return *this;}
    inline DomainSummary& WithWatchlistDetails(WatchlistDetails&& value) { SetWatchlistDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    DomainStatus m_domainStatus;
    bool m_domainStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    ServerSideEncryptionUpdateDetails m_serverSideEncryptionUpdateDetails;
    bool m_serverSideEncryptionUpdateDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    WatchlistDetails m_watchlistDetails;
    bool m_watchlistDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
