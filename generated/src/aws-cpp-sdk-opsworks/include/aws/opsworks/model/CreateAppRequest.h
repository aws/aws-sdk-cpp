/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AppType.h>
#include <aws/opsworks/model/Source.h>
#include <aws/opsworks/model/SslConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/DataSource.h>
#include <aws/opsworks/model/AppAttributesKeys.h>
#include <aws/opsworks/model/EnvironmentVariable.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class CreateAppRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API CreateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApp"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline CreateAppRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline CreateAppRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline CreateAppRequest& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app's short name.</p>
     */
    inline const Aws::String& GetShortname() const{ return m_shortname; }
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = std::move(value); }
    inline void SetShortname(const char* value) { m_shortnameHasBeenSet = true; m_shortname.assign(value); }
    inline CreateAppRequest& WithShortname(const Aws::String& value) { SetShortname(value); return *this;}
    inline CreateAppRequest& WithShortname(Aws::String&& value) { SetShortname(std::move(value)); return *this;}
    inline CreateAppRequest& WithShortname(const char* value) { SetShortname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAppRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app's data source.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }
    inline CreateAppRequest& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}
    inline CreateAppRequest& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}
    inline CreateAppRequest& AddDataSources(const DataSource& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }
    inline CreateAppRequest& AddDataSources(DataSource&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The app type. Each supported type is associated with a particular layer. For
     * example, PHP applications are associated with a PHP layer. OpsWorks Stacks
     * deploys an application to those instances that are members of the corresponding
     * layer. If your app isn't one of the standard types, or you prefer to implement
     * your own Deploy recipes, specify <code>other</code>.</p>
     */
    inline const AppType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AppType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AppType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateAppRequest& WithType(const AppType& value) { SetType(value); return *this;}
    inline CreateAppRequest& WithType(AppType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>Source</code> object that specifies the app repository.</p>
     */
    inline const Source& GetAppSource() const{ return m_appSource; }
    inline bool AppSourceHasBeenSet() const { return m_appSourceHasBeenSet; }
    inline void SetAppSource(const Source& value) { m_appSourceHasBeenSet = true; m_appSource = value; }
    inline void SetAppSource(Source&& value) { m_appSourceHasBeenSet = true; m_appSource = std::move(value); }
    inline CreateAppRequest& WithAppSource(const Source& value) { SetAppSource(value); return *this;}
    inline CreateAppRequest& WithAppSource(Source&& value) { SetAppSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app virtual host settings, with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domainsHasBeenSet = true; m_domains = value; }
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }
    inline CreateAppRequest& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}
    inline CreateAppRequest& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}
    inline CreateAppRequest& AddDomains(const Aws::String& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }
    inline CreateAppRequest& AddDomains(Aws::String&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }
    inline CreateAppRequest& AddDomains(const char* value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to enable SSL for the app.</p>
     */
    inline bool GetEnableSsl() const{ return m_enableSsl; }
    inline bool EnableSslHasBeenSet() const { return m_enableSslHasBeenSet; }
    inline void SetEnableSsl(bool value) { m_enableSslHasBeenSet = true; m_enableSsl = value; }
    inline CreateAppRequest& WithEnableSsl(bool value) { SetEnableSsl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline const SslConfiguration& GetSslConfiguration() const{ return m_sslConfiguration; }
    inline bool SslConfigurationHasBeenSet() const { return m_sslConfigurationHasBeenSet; }
    inline void SetSslConfiguration(const SslConfiguration& value) { m_sslConfigurationHasBeenSet = true; m_sslConfiguration = value; }
    inline void SetSslConfiguration(SslConfiguration&& value) { m_sslConfigurationHasBeenSet = true; m_sslConfiguration = std::move(value); }
    inline CreateAppRequest& WithSslConfiguration(const SslConfiguration& value) { SetSslConfiguration(value); return *this;}
    inline CreateAppRequest& WithSslConfiguration(SslConfiguration&& value) { SetSslConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline const Aws::Map<AppAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<AppAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<AppAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline CreateAppRequest& WithAttributes(const Aws::Map<AppAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}
    inline CreateAppRequest& WithAttributes(Aws::Map<AppAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline CreateAppRequest& AddAttributes(const AppAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline CreateAppRequest& AddAttributes(AppAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateAppRequest& AddAttributes(const AppAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline CreateAppRequest& AddAttributes(AppAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAppRequest& AddAttributes(AppAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline CreateAppRequest& AddAttributes(const AppAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instance. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>.</p> <p>There is no specific limit on the number of
     * environment variables. However, the size of the associated data structure -
     * which includes the variables' names, values, and protected flag values - cannot
     * exceed 20 KB. This limit should accommodate most if not all use cases. Exceeding
     * it will cause an exception with the message, "Environment: is too large (maximum
     * is 20KB)."</p>  <p>If you have specified one or more environment
     * variables, you cannot modify the stack's Chef version.</p> 
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Vector<EnvironmentVariable>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Vector<EnvironmentVariable>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline CreateAppRequest& WithEnvironment(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironment(value); return *this;}
    inline CreateAppRequest& WithEnvironment(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline CreateAppRequest& AddEnvironment(const EnvironmentVariable& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }
    inline CreateAppRequest& AddEnvironment(EnvironmentVariable&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_shortname;
    bool m_shortnameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet = false;

    AppType m_type;
    bool m_typeHasBeenSet = false;

    Source m_appSource;
    bool m_appSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;

    bool m_enableSsl;
    bool m_enableSslHasBeenSet = false;

    SslConfiguration m_sslConfiguration;
    bool m_sslConfigurationHasBeenSet = false;

    Aws::Map<AppAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<EnvironmentVariable> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
