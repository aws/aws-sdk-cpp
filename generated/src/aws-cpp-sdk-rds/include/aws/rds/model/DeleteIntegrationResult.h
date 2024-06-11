﻿/**
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
  class DeleteIntegrationResult
  {
  public:
    AWS_RDS_API DeleteIntegrationResult();
    AWS_RDS_API DeleteIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DeleteIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the database used as the source for
     * replication.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline DeleteIntegrationResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline DeleteIntegrationResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Redshift data warehouse used as the target for
     * replication.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArn.assign(value); }
    inline DeleteIntegrationResult& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline DeleteIntegrationResult& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const{ return m_integrationName; }
    inline void SetIntegrationName(const Aws::String& value) { m_integrationName = value; }
    inline void SetIntegrationName(Aws::String&& value) { m_integrationName = std::move(value); }
    inline void SetIntegrationName(const char* value) { m_integrationName.assign(value); }
    inline DeleteIntegrationResult& WithIntegrationName(const Aws::String& value) { SetIntegrationName(value); return *this;}
    inline DeleteIntegrationResult& WithIntegrationName(Aws::String&& value) { SetIntegrationName(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithIntegrationName(const char* value) { SetIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const{ return m_integrationArn; }
    inline void SetIntegrationArn(const Aws::String& value) { m_integrationArn = value; }
    inline void SetIntegrationArn(Aws::String&& value) { m_integrationArn = std::move(value); }
    inline void SetIntegrationArn(const char* value) { m_integrationArn.assign(value); }
    inline DeleteIntegrationResult& WithIntegrationArn(const Aws::String& value) { SetIntegrationArn(value); return *this;}
    inline DeleteIntegrationResult& WithIntegrationArn(Aws::String&& value) { SetIntegrationArn(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithIntegrationArn(const char* value) { SetIntegrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management System (Amazon Web Services KMS) key
     * identifier for the key used to to encrypt the integration. </p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyId = value; }
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyId = std::move(value); }
    inline void SetKMSKeyId(const char* value) { m_kMSKeyId.assign(value); }
    inline DeleteIntegrationResult& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}
    inline DeleteIntegrationResult& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}
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
    inline DeleteIntegrationResult& WithAdditionalEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEncryptionContext(value); return *this;}
    inline DeleteIntegrationResult& WithAdditionalEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEncryptionContext(std::move(value)); return *this;}
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(key, value); return *this; }
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const Aws::String& value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(const Aws::String& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, Aws::String&& value) { m_additionalEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(const char* key, Aws::String&& value) { m_additionalEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(Aws::String&& key, const char* value) { m_additionalEncryptionContext.emplace(std::move(key), value); return *this; }
    inline DeleteIntegrationResult& AddAdditionalEncryptionContext(const char* key, const char* value) { m_additionalEncryptionContext.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the integration.</p>
     */
    inline const IntegrationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const IntegrationStatus& value) { m_status = value; }
    inline void SetStatus(IntegrationStatus&& value) { m_status = std::move(value); }
    inline DeleteIntegrationResult& WithStatus(const IntegrationStatus& value) { SetStatus(value); return *this;}
    inline DeleteIntegrationResult& WithStatus(IntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DeleteIntegrationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DeleteIntegrationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DeleteIntegrationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DeleteIntegrationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the integration was created, in Universal Coordinated Time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }
    inline DeleteIntegrationResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline DeleteIntegrationResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any errors associated with the integration.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<IntegrationError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<IntegrationError>&& value) { m_errors = std::move(value); }
    inline DeleteIntegrationResult& WithErrors(const Aws::Vector<IntegrationError>& value) { SetErrors(value); return *this;}
    inline DeleteIntegrationResult& WithErrors(Aws::Vector<IntegrationError>&& value) { SetErrors(std::move(value)); return *this;}
    inline DeleteIntegrationResult& AddErrors(const IntegrationError& value) { m_errors.push_back(value); return *this; }
    inline DeleteIntegrationResult& AddErrors(IntegrationError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Data filters for the integration. These filters determine which tables from
     * the source database are sent to the target Amazon Redshift data warehouse. </p>
     */
    inline const Aws::String& GetDataFilter() const{ return m_dataFilter; }
    inline void SetDataFilter(const Aws::String& value) { m_dataFilter = value; }
    inline void SetDataFilter(Aws::String&& value) { m_dataFilter = std::move(value); }
    inline void SetDataFilter(const char* value) { m_dataFilter.assign(value); }
    inline DeleteIntegrationResult& WithDataFilter(const Aws::String& value) { SetDataFilter(value); return *this;}
    inline DeleteIntegrationResult& WithDataFilter(Aws::String&& value) { SetDataFilter(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithDataFilter(const char* value) { SetDataFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DeleteIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DeleteIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DeleteIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DeleteIntegrationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DeleteIntegrationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
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

    Aws::String m_dataFilter;

    Aws::String m_description;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
