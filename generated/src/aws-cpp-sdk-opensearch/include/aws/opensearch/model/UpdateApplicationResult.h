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
  class UpdateApplicationResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateApplicationResult();
    AWS_OPENSEARCHSERVICE_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique identifier of the updated OpenSearch Application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateApplicationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateApplicationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the updated OpenSearch Application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data sources associated with the updated OpenSearch Application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSources = std::move(value); }
    inline UpdateApplicationResult& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}
    inline UpdateApplicationResult& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}
    inline UpdateApplicationResult& AddDataSources(const DataSource& value) { m_dataSources.push_back(value); return *this; }
    inline UpdateApplicationResult& AddDataSources(DataSource&& value) { m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>IAM Identity Center settings for the updated OpenSearch Application.</p>
     */
    inline const IamIdentityCenterOptions& GetIamIdentityCenterOptions() const{ return m_iamIdentityCenterOptions; }
    inline void SetIamIdentityCenterOptions(const IamIdentityCenterOptions& value) { m_iamIdentityCenterOptions = value; }
    inline void SetIamIdentityCenterOptions(IamIdentityCenterOptions&& value) { m_iamIdentityCenterOptions = std::move(value); }
    inline UpdateApplicationResult& WithIamIdentityCenterOptions(const IamIdentityCenterOptions& value) { SetIamIdentityCenterOptions(value); return *this;}
    inline UpdateApplicationResult& WithIamIdentityCenterOptions(IamIdentityCenterOptions&& value) { SetIamIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for the updated OpenSearch Application.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const{ return m_appConfigs; }
    inline void SetAppConfigs(const Aws::Vector<AppConfig>& value) { m_appConfigs = value; }
    inline void SetAppConfigs(Aws::Vector<AppConfig>&& value) { m_appConfigs = std::move(value); }
    inline UpdateApplicationResult& WithAppConfigs(const Aws::Vector<AppConfig>& value) { SetAppConfigs(value); return *this;}
    inline UpdateApplicationResult& WithAppConfigs(Aws::Vector<AppConfig>&& value) { SetAppConfigs(std::move(value)); return *this;}
    inline UpdateApplicationResult& AddAppConfigs(const AppConfig& value) { m_appConfigs.push_back(value); return *this; }
    inline UpdateApplicationResult& AddAppConfigs(AppConfig&& value) { m_appConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timestamp at which the OpenSearch Application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateApplicationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateApplicationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp at which the OpenSearch Application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline UpdateApplicationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline UpdateApplicationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::Vector<DataSource> m_dataSources;

    IamIdentityCenterOptions m_iamIdentityCenterOptions;

    Aws::Vector<AppConfig> m_appConfigs;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
