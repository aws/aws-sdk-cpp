/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/ServerSideEncryptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class UpdateDomainRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API UpdateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomain"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A brief description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the domain.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the domain.</p>
     */
    inline UpdateDomainRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the domain.</p>
     */
    inline UpdateDomainRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the domain.</p>
     */
    inline UpdateDomainRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain to be updated.</p>
     */
    inline UpdateDomainRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline UpdateDomainRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline UpdateDomainRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline UpdateDomainRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration, containing the KMS key identifier, to be used by Voice ID
     * for the server-side encryption of your data. Changing the domain's associated
     * KMS key immediately triggers an asynchronous process to remove dependency on the
     * old KMS key, such that the domain's data can only be accessed using the new KMS
     * key. The domain's <code>ServerSideEncryptionUpdateDetails</code> contains the
     * details for this process.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>The configuration, containing the KMS key identifier, to be used by Voice ID
     * for the server-side encryption of your data. Changing the domain's associated
     * KMS key immediately triggers an asynchronous process to remove dependency on the
     * old KMS key, such that the domain's data can only be accessed using the new KMS
     * key. The domain's <code>ServerSideEncryptionUpdateDetails</code> contains the
     * details for this process.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>The configuration, containing the KMS key identifier, to be used by Voice ID
     * for the server-side encryption of your data. Changing the domain's associated
     * KMS key immediately triggers an asynchronous process to remove dependency on the
     * old KMS key, such that the domain's data can only be accessed using the new KMS
     * key. The domain's <code>ServerSideEncryptionUpdateDetails</code> contains the
     * details for this process.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>The configuration, containing the KMS key identifier, to be used by Voice ID
     * for the server-side encryption of your data. Changing the domain's associated
     * KMS key immediately triggers an asynchronous process to remove dependency on the
     * old KMS key, such that the domain's data can only be accessed using the new KMS
     * key. The domain's <code>ServerSideEncryptionUpdateDetails</code> contains the
     * details for this process.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>The configuration, containing the KMS key identifier, to be used by Voice ID
     * for the server-side encryption of your data. Changing the domain's associated
     * KMS key immediately triggers an asynchronous process to remove dependency on the
     * old KMS key, such that the domain's data can only be accessed using the new KMS
     * key. The domain's <code>ServerSideEncryptionUpdateDetails</code> contains the
     * details for this process.</p>
     */
    inline UpdateDomainRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>The configuration, containing the KMS key identifier, to be used by Voice ID
     * for the server-side encryption of your data. Changing the domain's associated
     * KMS key immediately triggers an asynchronous process to remove dependency on the
     * old KMS key, such that the domain's data can only be accessed using the new KMS
     * key. The domain's <code>ServerSideEncryptionUpdateDetails</code> contains the
     * details for this process.</p>
     */
    inline UpdateDomainRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
