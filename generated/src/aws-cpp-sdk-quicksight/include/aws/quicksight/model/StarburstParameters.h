/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/StarburstProductType.h>
#include <aws/quicksight/model/AuthenticationType.h>
#include <aws/quicksight/model/OAuthParameters.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters that are required to connect to a Starburst data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/StarburstParameters">AWS
   * API Reference</a></p>
   */
  class StarburstParameters
  {
  public:
    AWS_QUICKSIGHT_API StarburstParameters() = default;
    AWS_QUICKSIGHT_API StarburstParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API StarburstParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The host name of the Starburst data source.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    StarburstParameters& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port for the Starburst data source.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline StarburstParameters& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog name for the Starburst data source.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    StarburstParameters& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product type for the Starburst data source.</p>
     */
    inline StarburstProductType GetProductType() const { return m_productType; }
    inline bool ProductTypeHasBeenSet() const { return m_productTypeHasBeenSet; }
    inline void SetProductType(StarburstProductType value) { m_productTypeHasBeenSet = true; m_productType = value; }
    inline StarburstParameters& WithProductType(StarburstProductType value) { SetProductType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database access control role.</p>
     */
    inline const Aws::String& GetDatabaseAccessControlRole() const { return m_databaseAccessControlRole; }
    inline bool DatabaseAccessControlRoleHasBeenSet() const { return m_databaseAccessControlRoleHasBeenSet; }
    template<typename DatabaseAccessControlRoleT = Aws::String>
    void SetDatabaseAccessControlRole(DatabaseAccessControlRoleT&& value) { m_databaseAccessControlRoleHasBeenSet = true; m_databaseAccessControlRole = std::forward<DatabaseAccessControlRoleT>(value); }
    template<typename DatabaseAccessControlRoleT = Aws::String>
    StarburstParameters& WithDatabaseAccessControlRole(DatabaseAccessControlRoleT&& value) { SetDatabaseAccessControlRole(std::forward<DatabaseAccessControlRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type that you want to use for your connection. This
     * parameter accepts OAuth and non-OAuth authentication types.</p>
     */
    inline AuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline StarburstParameters& WithAuthenticationType(AuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information needed to create a data source connection
     * between an QuickSight account and Starburst.</p>
     */
    inline const OAuthParameters& GetOAuthParameters() const { return m_oAuthParameters; }
    inline bool OAuthParametersHasBeenSet() const { return m_oAuthParametersHasBeenSet; }
    template<typename OAuthParametersT = OAuthParameters>
    void SetOAuthParameters(OAuthParametersT&& value) { m_oAuthParametersHasBeenSet = true; m_oAuthParameters = std::forward<OAuthParametersT>(value); }
    template<typename OAuthParametersT = OAuthParameters>
    StarburstParameters& WithOAuthParameters(OAuthParametersT&& value) { SetOAuthParameters(std::forward<OAuthParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    StarburstProductType m_productType{StarburstProductType::NOT_SET};
    bool m_productTypeHasBeenSet = false;

    Aws::String m_databaseAccessControlRole;
    bool m_databaseAccessControlRoleHasBeenSet = false;

    AuthenticationType m_authenticationType{AuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    OAuthParameters m_oAuthParameters;
    bool m_oAuthParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
