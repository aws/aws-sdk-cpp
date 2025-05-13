/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/IamIdentityCenterOptionsInput.h>
#include <aws/opensearch/model/DataSource.h>
#include <aws/opensearch/model/AppConfig.h>
#include <aws/opensearch/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateApplicationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the OpenSearch application. Names must be unique within an
     * Amazon Web Services Region for each account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApplicationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data sources to link to the OpenSearch application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    CreateApplicationRequest& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSource>
    CreateApplicationRequest& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration settings for integrating Amazon Web Services IAM Identity
     * Center with the OpenSearch application.</p>
     */
    inline const IamIdentityCenterOptionsInput& GetIamIdentityCenterOptions() const { return m_iamIdentityCenterOptions; }
    inline bool IamIdentityCenterOptionsHasBeenSet() const { return m_iamIdentityCenterOptionsHasBeenSet; }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterOptionsInput>
    void SetIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::forward<IamIdentityCenterOptionsT>(value); }
    template<typename IamIdentityCenterOptionsT = IamIdentityCenterOptionsInput>
    CreateApplicationRequest& WithIamIdentityCenterOptions(IamIdentityCenterOptionsT&& value) { SetIamIdentityCenterOptions(std::forward<IamIdentityCenterOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for the OpenSearch application, including
     * administrative options.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const { return m_appConfigs; }
    inline bool AppConfigsHasBeenSet() const { return m_appConfigsHasBeenSet; }
    template<typename AppConfigsT = Aws::Vector<AppConfig>>
    void SetAppConfigs(AppConfigsT&& value) { m_appConfigsHasBeenSet = true; m_appConfigs = std::forward<AppConfigsT>(value); }
    template<typename AppConfigsT = Aws::Vector<AppConfig>>
    CreateApplicationRequest& WithAppConfigs(AppConfigsT&& value) { SetAppConfigs(std::forward<AppConfigsT>(value)); return *this;}
    template<typename AppConfigsT = AppConfig>
    CreateApplicationRequest& AddAppConfigs(AppConfigsT&& value) { m_appConfigsHasBeenSet = true; m_appConfigs.emplace_back(std::forward<AppConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    template<typename TagListT = Aws::Vector<Tag>>
    void SetTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList = std::forward<TagListT>(value); }
    template<typename TagListT = Aws::Vector<Tag>>
    CreateApplicationRequest& WithTagList(TagListT&& value) { SetTagList(std::forward<TagListT>(value)); return *this;}
    template<typename TagListT = Tag>
    CreateApplicationRequest& AddTagList(TagListT&& value) { m_tagListHasBeenSet = true; m_tagList.emplace_back(std::forward<TagListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    IamIdentityCenterOptionsInput m_iamIdentityCenterOptions;
    bool m_iamIdentityCenterOptionsHasBeenSet = false;

    Aws::Vector<AppConfig> m_appConfigs;
    bool m_appConfigsHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
