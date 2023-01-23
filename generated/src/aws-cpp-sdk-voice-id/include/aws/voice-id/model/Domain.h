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
    AWS_VOICEID_API Domain();
    AWS_VOICEID_API Domain(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Domain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline Domain& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline Domain& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the domain.</p>
     */
    inline Domain& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The timestamp at which the domain is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp at which the domain is created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp at which the domain is created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp at which the domain is created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp at which the domain is created.</p>
     */
    inline Domain& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the domain is created.</p>
     */
    inline Domain& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline Domain& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline Domain& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The client-provided description of the domain.</p>
     */
    inline Domain& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline Domain& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline Domain& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The service-generated identifier for the domain.</p>
     */
    inline Domain& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The current status of the domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p>The current status of the domain.</p>
     */
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }

    /**
     * <p>The current status of the domain.</p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }

    /**
     * <p>The current status of the domain.</p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::move(value); }

    /**
     * <p>The current status of the domain.</p>
     */
    inline Domain& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p>The current status of the domain.</p>
     */
    inline Domain& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline Domain& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline Domain& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The client-provided name for the domain.</p>
     */
    inline Domain& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline Domain& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The server-side encryption configuration containing the KMS key identifier
     * you want Voice ID to use to encrypt your data.</p>
     */
    inline Domain& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline const ServerSideEncryptionUpdateDetails& GetServerSideEncryptionUpdateDetails() const{ return m_serverSideEncryptionUpdateDetails; }

    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline bool ServerSideEncryptionUpdateDetailsHasBeenSet() const { return m_serverSideEncryptionUpdateDetailsHasBeenSet; }

    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline void SetServerSideEncryptionUpdateDetails(const ServerSideEncryptionUpdateDetails& value) { m_serverSideEncryptionUpdateDetailsHasBeenSet = true; m_serverSideEncryptionUpdateDetails = value; }

    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline void SetServerSideEncryptionUpdateDetails(ServerSideEncryptionUpdateDetails&& value) { m_serverSideEncryptionUpdateDetailsHasBeenSet = true; m_serverSideEncryptionUpdateDetails = std::move(value); }

    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline Domain& WithServerSideEncryptionUpdateDetails(const ServerSideEncryptionUpdateDetails& value) { SetServerSideEncryptionUpdateDetails(value); return *this;}

    /**
     * <p>Details about the most recent server-side encryption configuration update.
     * When the server-side encryption configuration is changed, dependency on the old
     * KMS key is removed through an asynchronous process. When this update is
     * complete, the domain's data can only be accessed using the new KMS key.</p>
     */
    inline Domain& WithServerSideEncryptionUpdateDetails(ServerSideEncryptionUpdateDetails&& value) { SetServerSideEncryptionUpdateDetails(std::move(value)); return *this;}


    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline Domain& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp showing the domain's last update.</p>
     */
    inline Domain& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
