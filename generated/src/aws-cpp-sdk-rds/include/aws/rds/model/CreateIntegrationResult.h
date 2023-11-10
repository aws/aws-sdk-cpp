/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/rds/model/IntegrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/IntegrationError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>A zero-ETL integration with Amazon Redshift.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Integration">AWS API
   * Reference</a></p>
   */
  class CreateIntegrationResult
  {
  public:
    AWS_RDS_API CreateIntegrationResult();
    AWS_RDS_API CreateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline CreateIntegrationResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline CreateIntegrationResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline CreateIntegrationResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }

    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }

    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }

    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline CreateIntegrationResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline CreateIntegrationResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline CreateIntegrationResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The name of the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }

    /**
     * <p>The name of the integration.</p>
     */
    inline void SetIntegrationName(const Aws::String& value) { m_integrationName = value; }

    /**
     * <p>The name of the integration.</p>
     */
    inline void SetIntegrationName(Aws::String&& value) { m_integrationName = std::move(value); }

    /**
     * <p>The name of the integration.</p>
     */
    inline void SetIntegrationName(const char* value) { m_integrationName.assign(value); }

    /**
     * <p>The name of the integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}

    /**
     * <p>The name of the integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}

    /**
     * <p>The name of the integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}


    /**
     * <p>The ARN of the integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }

    /**
     * <p>The ARN of the integration.</p>
     */
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArn = value; }

    /**
     * <p>The ARN of the integration.</p>
     */
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArn = std::move(value); }

    /**
     * <p>The ARN of the integration.</p>
     */
    inline void SetIntegrationArn(const char* value) { m_integrationArn.assign(value); }

    /**
     * <p>The ARN of the integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}

    /**
     * <p>The ARN of the integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline CreateIntegrationResult& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline CreateIntegrationResult& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline CreateIntegrationResult& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContext = value; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContext = std::move(value); }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(key, value); return *this; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline CreateIntegrationResult& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContext.emplace(key, value); return *this; }


    /**
     * <p>The current status of the integration.</p>
     */
    inline const IntegrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the integration.</p>
     */
    inline void SetStatus(const IntegrationStatus& value) { m_status = value; }

    /**
     * <p>The current status of the integration.</p>
     */
    inline void SetStatus(IntegrationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the integration.</p>
     */
    inline CreateIntegrationResult& WithStatus(const IntegrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the integration.</p>
     */
    inline CreateIntegrationResult& WithStatus(IntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    
    inline CreateIntegrationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateIntegrationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateIntegrationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    
    inline CreateIntegrationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the integration was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the integration was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The time when the integration was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The time when the integration was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline CreateIntegrationResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the integration was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline CreateIntegrationResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline void SetErrors(const Aws::Vector<IntegrationError>& value) { m_errors = value; }

    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline void SetErrors(Aws::Vector<IntegrationError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline CreateIntegrationResult& WithErrors(const Aws::Vector<IntegrationError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline CreateIntegrationResult& WithErrors(Aws::Vector<IntegrationError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline CreateIntegrationResult& AddErrors(const IntegrationError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline CreateIntegrationResult& AddErrors(IntegrationError&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateIntegrationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateIntegrationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_sourceArn;

    Aws::String m_targetArn;

    Aws::String m_integrationName;

    Aws::String m_integrationArn;

    Aws::String m_kMSKeyId;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;

    IntegrationStatus m_status;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createTime;

    Aws::Vector<IntegrationError> m_errors;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
