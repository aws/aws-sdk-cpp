/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace Redshift {
namespace Model {
/**
 * <p>Contains configuration information for lakehouse integration, including the
 * cluster identifier, catalog ARN, and registration status.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/LakehouseConfiguration">AWS
 * API Reference</a></p>
 */
class ModifyLakehouseConfigurationResult {
 public:
  AWS_REDSHIFT_API ModifyLakehouseConfigurationResult() = default;
  AWS_REDSHIFT_API ModifyLakehouseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_REDSHIFT_API ModifyLakehouseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The unique identifier of the cluster associated with this lakehouse
   * configuration.</p>
   */
  inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
  template <typename ClusterIdentifierT = Aws::String>
  void SetClusterIdentifier(ClusterIdentifierT&& value) {
    m_clusterIdentifierHasBeenSet = true;
    m_clusterIdentifier = std::forward<ClusterIdentifierT>(value);
  }
  template <typename ClusterIdentifierT = Aws::String>
  ModifyLakehouseConfigurationResult& WithClusterIdentifier(ClusterIdentifierT&& value) {
    SetClusterIdentifier(std::forward<ClusterIdentifierT>(value));
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
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  void SetLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    m_lakehouseIdcApplicationArnHasBeenSet = true;
    m_lakehouseIdcApplicationArn = std::forward<LakehouseIdcApplicationArnT>(value);
  }
  template <typename LakehouseIdcApplicationArnT = Aws::String>
  ModifyLakehouseConfigurationResult& WithLakehouseIdcApplicationArn(LakehouseIdcApplicationArnT&& value) {
    SetLakehouseIdcApplicationArn(std::forward<LakehouseIdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the lakehouse registration. Indicates whether the
   * cluster is successfully registered with the lakehouse.</p>
   */
  inline const Aws::String& GetLakehouseRegistrationStatus() const { return m_lakehouseRegistrationStatus; }
  template <typename LakehouseRegistrationStatusT = Aws::String>
  void SetLakehouseRegistrationStatus(LakehouseRegistrationStatusT&& value) {
    m_lakehouseRegistrationStatusHasBeenSet = true;
    m_lakehouseRegistrationStatus = std::forward<LakehouseRegistrationStatusT>(value);
  }
  template <typename LakehouseRegistrationStatusT = Aws::String>
  ModifyLakehouseConfigurationResult& WithLakehouseRegistrationStatus(LakehouseRegistrationStatusT&& value) {
    SetLakehouseRegistrationStatus(std::forward<LakehouseRegistrationStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Glue data catalog associated with the
   * lakehouse configuration.</p>
   */
  inline const Aws::String& GetCatalogArn() const { return m_catalogArn; }
  template <typename CatalogArnT = Aws::String>
  void SetCatalogArn(CatalogArnT&& value) {
    m_catalogArnHasBeenSet = true;
    m_catalogArn = std::forward<CatalogArnT>(value);
  }
  template <typename CatalogArnT = Aws::String>
  ModifyLakehouseConfigurationResult& WithCatalogArn(CatalogArnT&& value) {
    SetCatalogArn(std::forward<CatalogArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ModifyLakehouseConfigurationResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterIdentifier;

  Aws::String m_lakehouseIdcApplicationArn;

  Aws::String m_lakehouseRegistrationStatus;

  Aws::String m_catalogArn;

  ResponseMetadata m_responseMetadata;
  bool m_clusterIdentifierHasBeenSet = false;
  bool m_lakehouseIdcApplicationArnHasBeenSet = false;
  bool m_lakehouseRegistrationStatusHasBeenSet = false;
  bool m_catalogArnHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
