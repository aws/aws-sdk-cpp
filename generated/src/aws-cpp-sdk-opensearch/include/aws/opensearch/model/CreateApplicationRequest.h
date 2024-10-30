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
    AWS_OPENSEARCHSERVICE_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique client idempotency token. It will be auto generated if not
     * provided.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the OpenSearch Appication to create. Application names are unique
     * across the applications owned by an account within an Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data sources to be associated with the OpenSearch Application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }
    inline CreateApplicationRequest& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}
    inline CreateApplicationRequest& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddDataSources(const DataSource& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }
    inline CreateApplicationRequest& AddDataSources(DataSource&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings of IAM Identity Center for the OpenSearch Application.</p>
     */
    inline const IamIdentityCenterOptionsInput& GetIamIdentityCenterOptions() const{ return m_iamIdentityCenterOptions; }
    inline bool IamIdentityCenterOptionsHasBeenSet() const { return m_iamIdentityCenterOptionsHasBeenSet; }
    inline void SetIamIdentityCenterOptions(const IamIdentityCenterOptionsInput& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = value; }
    inline void SetIamIdentityCenterOptions(IamIdentityCenterOptionsInput&& value) { m_iamIdentityCenterOptionsHasBeenSet = true; m_iamIdentityCenterOptions = std::move(value); }
    inline CreateApplicationRequest& WithIamIdentityCenterOptions(const IamIdentityCenterOptionsInput& value) { SetIamIdentityCenterOptions(value); return *this;}
    inline CreateApplicationRequest& WithIamIdentityCenterOptions(IamIdentityCenterOptionsInput&& value) { SetIamIdentityCenterOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations of the OpenSearch Application, inlcuding admin
     * configuration.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const{ return m_appConfigs; }
    inline bool AppConfigsHasBeenSet() const { return m_appConfigsHasBeenSet; }
    inline void SetAppConfigs(const Aws::Vector<AppConfig>& value) { m_appConfigsHasBeenSet = true; m_appConfigs = value; }
    inline void SetAppConfigs(Aws::Vector<AppConfig>&& value) { m_appConfigsHasBeenSet = true; m_appConfigs = std::move(value); }
    inline CreateApplicationRequest& WithAppConfigs(const Aws::Vector<AppConfig>& value) { SetAppConfigs(value); return *this;}
    inline CreateApplicationRequest& WithAppConfigs(Aws::Vector<AppConfig>&& value) { SetAppConfigs(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddAppConfigs(const AppConfig& value) { m_appConfigsHasBeenSet = true; m_appConfigs.push_back(value); return *this; }
    inline CreateApplicationRequest& AddAppConfigs(AppConfig&& value) { m_appConfigsHasBeenSet = true; m_appConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline CreateApplicationRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline CreateApplicationRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline CreateApplicationRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
