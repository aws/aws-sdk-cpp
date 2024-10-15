/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ZeroETLIntegrationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/IntegrationError.h>
#include <aws/redshift/model/Tag.h>
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
namespace Redshift
{
namespace Model
{
  class ModifyIntegrationResult
  {
  public:
    AWS_REDSHIFT_API ModifyIntegrationResult();
    AWS_REDSHIFT_API ModifyIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArn = value; }
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArn = std::move(value); }
    inline void SetIntegrationArn(const char* value) { m_integrationArn.assign(value); }
    inline ModifyIntegrationResult& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}
    inline ModifyIntegrationResult& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}
    inline ModifyIntegrationResult& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }
    inline void SetIntegrationName(const Aws::String& value) { m_integrationName = value; }
    inline void SetIntegrationName(Aws::String&& value) { m_integrationName = std::move(value); }
    inline void SetIntegrationName(const char* value) { m_integrationName.assign(value); }
    inline ModifyIntegrationResult& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}
    inline ModifyIntegrationResult& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}
    inline ModifyIntegrationResult& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline ModifyIntegrationResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline ModifyIntegrationResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline ModifyIntegrationResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift data warehouse to use
     * as the target for replication.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }
    inline ModifyIntegrationResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline ModifyIntegrationResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline ModifyIntegrationResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the integration.</p>
     */
    inline const ZeroETLIntegrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ZeroETLIntegrationStatus& value) { m_status = value; }
    inline void SetStatus(ZeroETLIntegrationStatus&& value) { m_status = std::move(value); }
    inline ModifyIntegrationResult& WithStatus(const ZeroETLIntegrationStatus& value) { SetStatus(value); return *this;}
    inline ModifyIntegrationResult& WithStatus(ZeroETLIntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<IntegrationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<IntegrationError>&& value) { m_errors = std::move(value); }
    inline ModifyIntegrationResult& WithErrors(const Aws::Vector<IntegrationError>& value) { SetErrors(value); return *this;}
    inline ModifyIntegrationResult& WithErrors(Aws::Vector<IntegrationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline ModifyIntegrationResult& AddErrors(const IntegrationError& value) { m_errors.push_back(value); return *this; }
    inline ModifyIntegrationResult& AddErrors(IntegrationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time (UTC) when the integration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline ModifyIntegrationResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline ModifyIntegrationResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline ModifyIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key identifier for the key used to encrypt
     * the integration.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyId = value; }
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyId = std::move(value); }
    inline void SetKMSKeyId(const char* value) { m_kMSKeyId.assign(value); }
    inline ModifyIntegrationResult& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}
    inline ModifyIntegrationResult& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}
    inline ModifyIntegrationResult& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption context for the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">Encryption
     * context</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const{ return m_additionalEncryptionContext; }
    inline void SetAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEncryptionContext = value; }
    inline void SetAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEncryptionContext = std::move(value); }
    inline ModifyIntegrationResult& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}
    inline ModifyIntegrationResult& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(key, value); return *this; }
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline ModifyIntegrationResult& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags associated with the integration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline ModifyIntegrationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ModifyIntegrationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ModifyIntegrationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline ModifyIntegrationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyIntegrationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyIntegrationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationArn;

    Aws::String m_integrationName;

    Aws::String m_sourceArn;

    Aws::String m_targetArn;

    ZeroETLIntegrationStatus m_status;

    Aws::Vector<IntegrationError> m_errors;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    Aws::String m_kMSKeyId;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
