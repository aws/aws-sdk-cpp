/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/LakehouseIdcRegistration.h>
#include <aws/redshift/model/LakehouseRegistration.h>

#include <utility>

namespace Aws {
namespace Redshift {
namespace Model {

/**
 */
class ModifyLakehouseConfigurationRequest : public RedshiftRequest {
 public:
  AWS_REDSHIFT_API ModifyLakehouseConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyLakehouseConfiguration"; }

  AWS_REDSHIFT_API Aws::String SerializePayload() const override;

 protected:
  AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The unique identifier of the cluster whose lakehouse configuration you want
   * to modify.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  ModifyLakehouseConfigurationRequest& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to register or deregister the cluster with Amazon Redshift
   * federated permissions. Valid values are <code>Register</code> or
   * <code>Deregister</code>.</p>
   */
  inline LakehouseRegistration GetLakehouseRegistration() const { return m_lakehouseRegistration; }
  inline bool LakehouseRegistrationHasBeenSet() const { return m_lakehouseRegistrationHasBeenSet; }
  inline void SetLakehouseRegistration(LakehouseRegistration value) {
    m_lakehouseRegistrationHasBeenSet = true;
    m_lakehouseRegistration = value;
  }
  inline ModifyLakehouseConfigurationRequest& WithLakehouseRegistration(LakehouseRegistration value) {
    SetLakehouseRegistration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Glue data catalog that will be associated with the cluster
   * enabled with Amazon Redshift federated permissions.</p> <p>Constraints:</p> <ul>
   * <li> <p>Must contain at least one lowercase letter.</p> </li> <li> <p>Can only
   * contain lowercase letters (a-z), numbers (0-9), underscores (_), and hyphens
   * (-).</p> </li> </ul> <p>Pattern: <code>^[a-z0-9_-]*[a-z]+[a-z0-9_-]*$</code>
   * </p> <p>Example: <code>my-catalog_01</code> </p>
   */
  inline const Aws::String& GetCatalogName() const { return m_catalogName; }
  inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
  template <typename CatalogNameT = Aws::String>
  void SetCatalogName(CatalogNameT&& value) {
    m_catalogNameHasBeenSet = true;
    m_catalogName = std::forward<CatalogNameT>(value);
  }
  template <typename CatalogNameT = Aws::String>
  ModifyLakehouseConfigurationRequest& WithCatalogName(CatalogNameT&& value) {
    SetCatalogName(std::forward<CatalogNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Modifies the Amazon Web Services IAM Identity Center trusted identity
   * propagation on a cluster enabled with Amazon Redshift federated permissions.
   * Valid values are <code>Associate</code> or <code>Disassociate</code>.</p>
   */
  inline LakehouseIdcRegistration GetLakehouseIdcRegistration() const { return m_lakehouseIdcRegistration; }
  inline bool LakehouseIdcRegistrationHasBeenSet() const { return m_lakehouseIdcRegistrationHasBeenSet; }
  inline void SetLakehouseIdcRegistration(LakehouseIdcRegistration value) {
    m_lakehouseIdcRegistrationHasBeenSet = true;
    m_lakehouseIdcRegistration = value;
  }
  inline ModifyLakehouseConfigurationRequest& WithLakehouseIdcRegistration(LakehouseIdcRegistration value) {
    SetLakehouseIdcRegistration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center application used
   * for enabling Amazon Web Services IAM Identity Center trusted identity
   * propagation on a cluster enabled with Amazon Redshift federated permissions.</p>
   */
  inline const Aws::String& GetLakehouseIdcApplicationArn() const { return m_lakehouseIdcApplicationArn; }
  inline bool LakehouseIdcApplicationArnHasBeenSet() const { return m_lakehouseIdcApplicationArnHasBeenSet; }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  void SetLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    m_lakehouseIdcApplicationArnHasBeenSet = true;
    m_lakehouseIdcApplicationArn = std::forward<LakehouseIdcApplicationArnT>(value);
  }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  ModifyLakehouseConfigurationRequest& WithLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    SetLakehouseIdcApplicationArn(std::forward<LakehouseIdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean value that, if <code>true</code>, validates the request without
   * actually modifying the lakehouse configuration. Use this to check for errors
   * before making changes.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyLakehouseConfigurationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  LakehouseRegistration m_lakehouseRegistration{LakehouseRegistration::NOT_SET};

  Aws::String m_catalogName;

  LakehouseIdcRegistration m_lakehouseIdcRegistration{LakehouseIdcRegistration::NOT_SET};

  Aws::String m_lakehouseIdcApplicationArn;

  bool m_dryRun{false};
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_lakehouseRegistrationHasBeenSet = false;
  bool m_catalogNameHasBeenSet = false;
  bool m_lakehouseIdcRegistrationHasBeenSet = false;
  bool m_lakehouseIdcApplicationArnHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
