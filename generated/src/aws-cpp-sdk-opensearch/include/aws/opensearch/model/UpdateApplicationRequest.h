/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/DataSource.h>
#include <aws/opensearch/model/AppConfig.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique identifier of the OpenSearch Application to be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateApplicationRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateApplicationRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data sources to be associated with the OpenSearch Application.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }
    inline UpdateApplicationRequest& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}
    inline UpdateApplicationRequest& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}
    inline UpdateApplicationRequest& AddDataSources(const DataSource& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }
    inline UpdateApplicationRequest& AddDataSources(DataSource&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configurations to be changed for the OpenSearch Application.</p>
     */
    inline const Aws::Vector<AppConfig>& GetAppConfigs() const{ return m_appConfigs; }
    inline bool AppConfigsHasBeenSet() const { return m_appConfigsHasBeenSet; }
    inline void SetAppConfigs(const Aws::Vector<AppConfig>& value) { m_appConfigsHasBeenSet = true; m_appConfigs = value; }
    inline void SetAppConfigs(Aws::Vector<AppConfig>&& value) { m_appConfigsHasBeenSet = true; m_appConfigs = std::move(value); }
    inline UpdateApplicationRequest& WithAppConfigs(const Aws::Vector<AppConfig>& value) { SetAppConfigs(value); return *this;}
    inline UpdateApplicationRequest& WithAppConfigs(Aws::Vector<AppConfig>&& value) { SetAppConfigs(std::move(value)); return *this;}
    inline UpdateApplicationRequest& AddAppConfigs(const AppConfig& value) { m_appConfigsHasBeenSet = true; m_appConfigs.push_back(value); return *this; }
    inline UpdateApplicationRequest& AddAppConfigs(AppConfig&& value) { m_appConfigsHasBeenSet = true; m_appConfigs.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    Aws::Vector<AppConfig> m_appConfigs;
    bool m_appConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
