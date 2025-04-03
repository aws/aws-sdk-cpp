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
    AWS_OPENSEARCHSERVICE_API UpdateApplicationResult() = default;
    AWS_OPENSEARCHSERVICE_API UpdateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the updated OpenSearch application.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateApplicationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the updated OpenSearch application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateApplicationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateApplicationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sources associated with the updated OpenSearch application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    UpdateApplicationResult& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSource>
    UpdateApplicationResult& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center configuration for the updated OpenSearch
     * application.</p>
     */
    inline const IamIdentityCenterOptions& GetIamIdentityCenterOptions() const { return m_iamIdentityCenterOptions; }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterOptions>
    void SetIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::forward<IamIdentityCenterOptionsT>(value); }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterOptions>
    UpdateApplicationResult& WithIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { SetIamIdentityCenterOptions(std::forward<IamIdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the updated OpenSearch application.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const { return m_appConfigs; }
    template<typename AppConfigsT = Aws::Vector<AppConfig>>
    void SetAppConfigs(AppConfigsT&& value) { m_appConfigsHasBeenSet = true; m_appConfigs = std::forward<AppConfigsT>(value); }
    template<typename AppConfigsT = Aws::Vector<AppConfig>>
    UpdateApplicationResult& WithAppConfigs(AppConfigsT&& value) { SetAppConfigs(std::forward<AppConfigsT>(value)); return *this;}
    template<typename AppConfigsT = AppConfig>
    UpdateApplicationResult& AddAppConfigs(AppConfigsT&& value) { m_appConfigsHasBeenSet = true; m_appConfigs.emplace_back(std::forward<AppConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when the OpenSearch application was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateApplicationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the OpenSearch application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    UpdateApplicationResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    IamIdentityCenterOptions m_iamIdentityCenterOptions;
    bool m_iamIdentityCenterOptionsHasBeenSet = false;

    Aws::Vector<AppConfig> m_appConfigs;
    bool m_appConfigsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
