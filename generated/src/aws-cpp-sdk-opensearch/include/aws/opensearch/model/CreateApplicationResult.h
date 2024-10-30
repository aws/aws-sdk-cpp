/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/IamIdentityCenterOptions.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/DataSource.h>
#include <aws/opensearch/model/AppConfig.h>
#include <aws/opensearch/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  class CreateApplicationResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateApplicationResult();
    AWS_OPENSEARCHSERVICE_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique identifier for the created OpenSearch Application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateApplicationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateApplicationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateApplicationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the created OpenSearch Application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data sources associated with the created OpenSearch Application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSources = std::move(value); }
    inline CreateApplicationResult& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}
    inline CreateApplicationResult& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}
    inline CreateApplicationResult& AddDataSources(const DataSource& value) { m_dataSources.push_back(value); return *this; }
    inline CreateApplicationResult& AddDataSources(DataSource&& value) { m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings of IAM Identity Center for the created OpenSearch Application.</p>
     */
    inline const IamIdentityCenterOptions& GetIamIdentityCenterOptions() const{ return m_iamIdentityCenterOptions; }
    inline void SetIamIdentityCenterOptions(const IamIdentityCenterOptions& value) { m_iamIdentityCenterOptions = value; }
    inline void SetIamIdentityCenterOptions(IamIdentityCenterOptions&& value) { m_iamIdentityCenterOptions = std::move(value); }
    inline CreateApplicationResult& WithIamIdentityCenterOptions(const IamIdentityCenterOptions& value) { SetIamIdentityCenterOptions(value); return *this;}
    inline CreateApplicationResult& WithIamIdentityCenterOptions(IamIdentityCenterOptions&& value) { SetIamIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations of the OpenSearch Application, inlcuding admin
     * configuration.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const{ return m_appConfigs; }
    inline void SetAppConfigs(const Aws::Vector<AppConfig>& value) { m_appConfigs = value; }
    inline void SetAppConfigs(Aws::Vector<AppConfig>&& value) { m_appConfigs = std::move(value); }
    inline CreateApplicationResult& WithAppConfigs(const Aws::Vector<AppConfig>& value) { SetAppConfigs(value); return *this;}
    inline CreateApplicationResult& WithAppConfigs(Aws::Vector<AppConfig>&& value) { SetAppConfigs(std::move(value)); return *this;}
    inline CreateApplicationResult& AddAppConfigs(const AppConfig& value) { m_appConfigs.push_back(value); return *this; }
    inline CreateApplicationResult& AddAppConfigs(AppConfig&& value) { m_appConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }
    inline CreateApplicationResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline CreateApplicationResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline CreateApplicationResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }
    inline CreateApplicationResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timestamp when the OpenSearch Application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateApplicationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateApplicationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::Vector<DataSource> m_dataSources;

    IamIdentityCenterOptions m_iamIdentityCenterOptions;

    Aws::Vector<AppConfig> m_appConfigs;

    Aws::Vector<Tag> m_tagList;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
