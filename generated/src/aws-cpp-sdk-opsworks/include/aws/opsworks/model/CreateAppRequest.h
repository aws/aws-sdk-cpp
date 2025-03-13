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
    AWS_OPSWORKS_API CreateAppRequest() = default;

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
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    CreateAppRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app's short name.</p>
     */
    inline const Aws::String& GetShortname() const { return m_shortname; }
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }
    template<typename ShortnameT = Aws::String>
    void SetShortname(ShortnameT&& value) { m_shortnameHasBeenSet = true; m_shortname = std::forward<ShortnameT>(value); }
    template<typename ShortnameT = Aws::String>
    CreateAppRequest& WithShortname(ShortnameT&& value) { SetShortname(std::forward<ShortnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAppRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the app.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAppRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app's data source.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const { return m_dataSources; }
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    void SetDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::forward<DataSourcesT>(value); }
    template<typename DataSourcesT = Aws::Vector<DataSource>>
    CreateAppRequest& WithDataSources(DataSourcesT&& value) { SetDataSources(std::forward<DataSourcesT>(value)); return *this;}
    template<typename DataSourcesT = DataSource>
    CreateAppRequest& AddDataSources(DataSourcesT&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.emplace_back(std::forward<DataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The app type. Each supported type is associated with a particular layer. For
     * example, PHP applications are associated with a PHP layer. OpsWorks Stacks
     * deploys an application to those instances that are members of the corresponding
     * layer. If your app isn't one of the standard types, or you prefer to implement
     * your own Deploy recipes, specify <code>other</code>.</p>
     */
    inline AppType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AppType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateAppRequest& WithType(AppType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>Source</code> object that specifies the app repository.</p>
     */
    inline const Source& GetAppSource() const { return m_appSource; }
    inline bool AppSourceHasBeenSet() const { return m_appSourceHasBeenSet; }
    template<typename AppSourceT = Source>
    void SetAppSource(AppSourceT&& value) { m_appSourceHasBeenSet = true; m_appSource = std::forward<AppSourceT>(value); }
    template<typename AppSourceT = Source>
    CreateAppRequest& WithAppSource(AppSourceT&& value) { SetAppSource(std::forward<AppSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app virtual host settings, with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<Aws::String>>
    CreateAppRequest& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = Aws::String>
    CreateAppRequest& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to enable SSL for the app.</p>
     */
    inline bool GetEnableSsl() const { return m_enableSsl; }
    inline bool EnableSslHasBeenSet() const { return m_enableSslHasBeenSet; }
    inline void SetEnableSsl(bool value) { m_enableSslHasBeenSet = true; m_enableSsl = value; }
    inline CreateAppRequest& WithEnableSsl(bool value) { SetEnableSsl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline const SslConfiguration& GetSslConfiguration() const { return m_sslConfiguration; }
    inline bool SslConfigurationHasBeenSet() const { return m_sslConfigurationHasBeenSet; }
    template<typename SslConfigurationT = SslConfiguration>
    void SetSslConfiguration(SslConfigurationT&& value) { m_sslConfigurationHasBeenSet = true; m_sslConfiguration = std::forward<SslConfigurationT>(value); }
    template<typename SslConfigurationT = SslConfiguration>
    CreateAppRequest& WithSslConfiguration(SslConfigurationT&& value) { SetSslConfiguration(std::forward<SslConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more user-defined key/value pairs to be added to the stack
     * attributes.</p>
     */
    inline const Aws::Map<AppAttributesKeys, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<AppAttributesKeys, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<AppAttributesKeys, Aws::String>>
    CreateAppRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    inline CreateAppRequest& AddAttributes(AppAttributesKeys key, Aws::String value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this;
    }
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
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<EnvironmentVariable>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<EnvironmentVariable>>
    CreateAppRequest& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = EnvironmentVariable>
    CreateAppRequest& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
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

    AppType m_type{AppType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Source m_appSource;
    bool m_appSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet = false;

    bool m_enableSsl{false};
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
