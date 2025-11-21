/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/LakehouseIdcRegistration.h>
#include <aws/redshift-serverless/model/LakehouseRegistration.h>

#include <utility>

namespace Aws {
namespace RedshiftServerless {
namespace Model {

/**
 */
class UpdateLakehouseConfigurationRequest : public RedshiftServerlessRequest {
 public:
  AWS_REDSHIFTSERVERLESS_API UpdateLakehouseConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLakehouseConfiguration"; }

  AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the Glue Data Catalog that will be associated with the namespace
   * enabled with Amazon Redshift federated permissions.</p> <p>Pattern:
   * <code>^[a-z0-9_-]*[a-z]+[a-z0-9_-]*$</code> </p>
   */
  inline const Aws::String& GetCatalogName() const { return m_catalogName; }
  inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
  template <typename CatalogNameT = Aws::String>
  void SetCatalogName(CatalogNameT&& value) {
    m_catalogNameHasBeenSet = true;
    m_catalogName = std::forward<CatalogNameT>(value);
  }
  template <typename CatalogNameT = Aws::String>
  UpdateLakehouseConfigurationRequest& WithCatalogName(CatalogNameT&& value) {
    SetCatalogName(std::forward<CatalogNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean value that, if <code>true</code>, validates the request without
   * actually updating the lakehouse configuration. Use this to check for errors
   * before making changes.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline UpdateLakehouseConfigurationRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center application used
   * for enabling Amazon Web Services IAM Identity Center trusted identity
   * propagation on a namespace enabled with Amazon Redshift federated
   * permissions.</p>
   */
  inline const Aws::String& GetLakehouseIdcApplicationArn() const { return m_lakehouseIdcApplicationArn; }
  inline bool LakehouseIdcApplicationArnHasBeenSet() const { return m_lakehouseIdcApplicationArnHasBeenSet; }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  void SetLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    m_lakehouseIdcApplicationArnHasBeenSet = true;
    m_lakehouseIdcApplicationArn = std::forward<LakehouseIdcApplicationArnT>(value);
  }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  UpdateLakehouseConfigurationRequest& WithLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    SetLakehouseIdcApplicationArn(std::forward<LakehouseIdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Modifies the Amazon Web Services IAM Identity Center trusted identity
   * propagation on a namespace enabled with Amazon Redshift federated permissions.
   * Valid values are <code>Associate</code> or <code>Disassociate</code>.</p>
   */
  inline LakehouseIdcRegistration GetLakehouseIdcRegistration() const { return m_lakehouseIdcRegistration; }
  inline bool LakehouseIdcRegistrationHasBeenSet() const { return m_lakehouseIdcRegistrationHasBeenSet; }
  inline void SetLakehouseIdcRegistration(LakehouseIdcRegistration value) {
    m_lakehouseIdcRegistrationHasBeenSet = true;
    m_lakehouseIdcRegistration = value;
  }
  inline UpdateLakehouseConfigurationRequest& WithLakehouseIdcRegistration(LakehouseIdcRegistration value) {
    SetLakehouseIdcRegistration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to register or deregister the namespace with Amazon
   * Redshift federated permissions. Valid values are <code>Register</code> or
   * <code>Deregister</code>.</p>
   */
  inline LakehouseRegistration GetLakehouseRegistration() const { return m_lakehouseRegistration; }
  inline bool LakehouseRegistrationHasBeenSet() const { return m_lakehouseRegistrationHasBeenSet; }
  inline void SetLakehouseRegistration(LakehouseRegistration value) {
    m_lakehouseRegistrationHasBeenSet = true;
    m_lakehouseRegistration = value;
  }
  inline UpdateLakehouseConfigurationRequest& WithLakehouseRegistration(LakehouseRegistration value) {
    SetLakehouseRegistration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the namespace whose lakehouse configuration you want to
   * modify.</p>
   */
  inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
  inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
  template <typename NamespaceNameT = Aws::String>
  void SetNamespaceName(NamespaceNameT&& value) {
    m_namespaceNameHasBeenSet = true;
    m_namespaceName = std::forward<NamespaceNameT>(value);
  }
  template <typename NamespaceNameT = Aws::String>
  UpdateLakehouseConfigurationRequest& WithNamespaceName(NamespaceNameT&& value) {
    SetNamespaceName(std::forward<NamespaceNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogName;
  bool m_catalogNameHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::String m_lakehouseIdcApplicationArn;
  bool m_lakehouseIdcApplicationArnHasBeenSet = false;

  LakehouseIdcRegistration m_lakehouseIdcRegistration{LakehouseIdcRegistration::NOT_SET};
  bool m_lakehouseIdcRegistrationHasBeenSet = false;

  LakehouseRegistration m_lakehouseRegistration{LakehouseRegistration::NOT_SET};
  bool m_lakehouseRegistrationHasBeenSet = false;

  Aws::String m_namespaceName;
  bool m_namespaceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
