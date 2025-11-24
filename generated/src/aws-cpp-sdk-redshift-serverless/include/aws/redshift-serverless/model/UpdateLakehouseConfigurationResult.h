/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RedshiftServerless {
namespace Model {
class UpdateLakehouseConfigurationResult {
 public:
  AWS_REDSHIFTSERVERLESS_API UpdateLakehouseConfigurationResult() = default;
  AWS_REDSHIFTSERVERLESS_API UpdateLakehouseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_REDSHIFTSERVERLESS_API UpdateLakehouseConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Glue Data Catalog associated with the
   * lakehouse configuration.</p>
   */
  inline const Aws::String& GetCatalogArn() const { return m_catalogArn; }
  template <typename CatalogArnT = Aws::String>
  void SetCatalogArn(CatalogArnT&& value) {
    m_catalogArnHasBeenSet = true;
    m_catalogArn = std::forward<CatalogArnT>(value);
  }
  template <typename CatalogArnT = Aws::String>
  UpdateLakehouseConfigurationResult& WithCatalogArn(CatalogArnT&& value) {
    SetCatalogArn(std::forward<CatalogArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM Identity Center application used
   * for enabling Amazon Web Services IAM Identity Center trusted identity
   * propagation.</p>
   */
  inline const Aws::String& GetLakehouseIdcApplicationArn() const { return m_lakehouseIdcApplicationArn; }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  void SetLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    m_lakehouseIdcApplicationArnHasBeenSet = true;
    m_lakehouseIdcApplicationArn = std::forward<LakehouseIdcApplicationArnT>(value);
  }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  UpdateLakehouseConfigurationResult& WithLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    SetLakehouseIdcApplicationArn(std::forward<LakehouseIdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the lakehouse registration. Indicates whether the
   * namespace is successfully registered with Amazon Redshift federated
   * permissions.</p>
   */
  inline const Aws::String& GetLakehouseRegistrationStatus() const { return m_lakehouseRegistrationStatus; }
  template <typename LakehouseRegistrationStatusT = Aws::String>
  void SetLakehouseRegistrationStatus(LakehouseRegistrationStatusT&& value) {
    m_lakehouseRegistrationStatusHasBeenSet = true;
    m_lakehouseRegistrationStatus = std::forward<LakehouseRegistrationStatusT>(value);
  }
  template <typename LakehouseRegistrationStatusT = Aws::String>
  UpdateLakehouseConfigurationResult& WithLakehouseRegistrationStatus(LakehouseRegistrationStatusT&& value) {
    SetLakehouseRegistrationStatus(std::forward<LakehouseRegistrationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the namespace.</p>
   */
  inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
  template <typename NamespaceNameT = Aws::String>
  void SetNamespaceName(NamespaceNameT&& value) {
    m_namespaceNameHasBeenSet = true;
    m_namespaceName = std::forward<NamespaceNameT>(value);
  }
  template <typename NamespaceNameT = Aws::String>
  UpdateLakehouseConfigurationResult& WithNamespaceName(NamespaceNameT&& value) {
    SetNamespaceName(std::forward<NamespaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateLakehouseConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogArn;
  bool m_catalogArnHasBeenSet = false;

  Aws::String m_lakehouseIdcApplicationArn;
  bool m_lakehouseIdcApplicationArnHasBeenSet = false;

  Aws::String m_lakehouseRegistrationStatus;
  bool m_lakehouseRegistrationStatusHasBeenSet = false;

  Aws::String m_namespaceName;
  bool m_namespaceNameHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
