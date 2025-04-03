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
    AWS_OPENSEARCHSERVICE_API CreateApplicationResult() = default;
    AWS_OPENSEARCHSERVICE_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier assigned to the OpenSearch application.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateApplicationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OpenSearch application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApplicationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateApplicationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sources linked to the OpenSearch application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    CreateApplicationResult& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSource>
    CreateApplicationResult& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center settings configured for the OpenSearch
     * application.</p>
     */
    inline const IamIdentityCenterOptions& GetIamIdentityCenterOptions() const { return m_iamIdentityCenterOptions; }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterOptions>
    void SetIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::forward<IamIdentityCenterOptionsT>(value); }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterOptions>
    CreateApplicationResult& WithIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { SetIamIdentityCenterOptions(std::forward<IamIdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the OpenSearch application, including
     * administrative options.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const { return m_appConfigs; }
    template<typename AppConfigsT = Aws::Vector<AppConfig>>
    void SetAppConfigs(AppConfigsT&& value) { m_appConfigsHasBeenSet = true; m_appConfigs = std::forward<AppConfigsT>(value); }
    template<typename AppConfigsT = Aws::Vector<AppConfig>>
    CreateApplicationResult& WithAppConfigs(AppConfigsT&& value) { SetAppConfigs(std::forward<AppConfigsT>(value)); return *this;}
    template<typename AppConfigsT = AppConfig>
    CreateApplicationResult& AddAppConfigs(AppConfigsT&& value) { m_appConfigsHasBeenSet = true; m_appConfigs.emplace_back(std::forward<AppConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    CreateApplicationResult& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    CreateApplicationResult& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating when the OpenSearch application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateApplicationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
