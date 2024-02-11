/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class CreateIntegrationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CreateIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegration"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline CreateIntegrationRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline CreateIntegrationRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database to use as the source for
     * replication.</p>
     */
    inline CreateIntegrationRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline CreateIntegrationRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline CreateIntegrationRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Redshift data warehouse to use as the target for
     * replication.</p>
     */
    inline CreateIntegrationRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The name of the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }

    /**
     * <p>The name of the integration.</p>
     */
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }

    /**
     * <p>The name of the integration.</p>
     */
    inline void SetIntegrationName(const Aws::String& value) { m_integrationNameHasBeenSet = true; m_integrationName = value; }

    /**
     * <p>The name of the integration.</p>
     */
    inline void SetIntegrationName(Aws::String&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::move(value); }

    /**
     * <p>The name of the integration.</p>
     */
    inline void SetIntegrationName(const char* value) { m_integrationNameHasBeenSet = true; m_integrationName.assign(value); }

    /**
     * <p>The name of the integration.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}

    /**
     * <p>The name of the integration.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}

    /**
     * <p>The name of the integration.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline bool KMSKeyIdHasBeenSet() const { return m_kMSKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline CreateIntegrationRequest& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline CreateIntegrationRequest& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key to use to encrypt the integration. If you don't specify
     * an encryption key, RDS uses a default Amazon Web Services owned key. </p>
     */
    inline CreateIntegrationRequest& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = value; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information about the data. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> <p>You can only include this parameter if you specify the
     * <code>KMSKeyId</code> parameter.</p>
     */
    inline CreateIntegrationRequest& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(key, value); return *this; }


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateIntegrationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateIntegrationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateIntegrationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateIntegrationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
