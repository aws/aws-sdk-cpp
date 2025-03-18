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
   * <p>Contains all the information about a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/Domain">AWS API
   * Reference</a></p>
   */
  class Domain
  {
  public:
    AWS_VOICEID_API Domain() = default;
    AWS_VOICEID_API Domain(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Domain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Domain& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Domain& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Domain& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    Domain& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the domain.</p>
     */
    inline DomainStatus GetDomainStatus() const { return m_domainStatus; }
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }
    inline void SetDomainStatus(DomainStatus value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }
    inline Domain& WithDomainStatus(DomainStatus value) { SetDomainStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Domain& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    Domain& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline const ServerSideEncryptionUpdateDetails& GetServerSideEncryptionUpdateDetails() const { return m_serverSideEncryptionUpdateDetails; }
    inline bool ServerSideEncryptionUpdateDetailsHasBeenSet() const { return m_serverSideEncryptionUpdateDetailsHasBeenSet; }
    template<typename ServerSideEncryptionUpdateDetailsT = ServerSideEncryptionUpdateDetails>
    void SetServerSideEncryptionUpdateDetails(ServerSideEncryptionUpdateDetailsT&& value) { m_serverSideEncryptionUpdateDetailsHasBeenSet = true; m_serverSideEncryptionUpdateDetails = std::forward<ServerSideEncryptionUpdateDetailsT>(value); }
    template<typename ServerSideEncryptionUpdateDetailsT = ServerSideEncryptionUpdateDetails>
    Domain& WithServerSideEncryptionUpdateDetails(ServerSideEncryptionUpdateDetailsT&& value) { SetServerSideEncryptionUpdateDetails(std::forward<ServerSideEncryptionUpdateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Domain& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The watchlist details of a domain. Contains the default watchlist ID of the
     * domain.</p>
     */
    inline const WatchlistDetails& GetWatchlistDetails() const { return m_watchlistDetails; }
    inline bool WatchlistDetailsHasBeenSet() const { return m_watchlistDetailsHasBeenSet; }
    template<typename WatchlistDetailsT = WatchlistDetails>
    void SetWatchlistDetails(WatchlistDetailsT&& value) { m_watchlistDetailsHasBeenSet = true; m_watchlistDetails = std::forward<WatchlistDetailsT>(value); }
    template<typename WatchlistDetailsT = WatchlistDetails>
    Domain& WithWatchlistDetails(WatchlistDetailsT&& value) { SetWatchlistDetails(std::forward<WatchlistDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    DomainStatus m_domainStatus{DomainStatus::NOT_SET};
    bool m_domainStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    ServerSideEncryptionUpdateDetails m_serverSideEncryptionUpdateDetails;
    bool m_serverSideEncryptionUpdateDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    WatchlistDetails m_watchlistDetails;
    bool m_watchlistDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
