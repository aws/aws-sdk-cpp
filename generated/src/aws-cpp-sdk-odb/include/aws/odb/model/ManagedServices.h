/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CrossRegionS3RestoreSourcesAccess.h>
#include <aws/odb/model/KmsAccess.h>
#include <aws/odb/model/ManagedS3BackupAccess.h>
#include <aws/odb/model/S3Access.h>
#include <aws/odb/model/ServiceNetworkEndpoint.h>
#include <aws/odb/model/StsAccess.h>
#include <aws/odb/model/ZeroEtlAccess.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The managed services configuration for the ODB network.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ManagedServices">AWS
 * API Reference</a></p>
 */
class ManagedServices {
 public:
  AWS_ODB_API ManagedServices() = default;
  AWS_ODB_API ManagedServices(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ManagedServices& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the service network.</p>
   */
  inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
  inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
  template <typename ServiceNetworkArnT = Aws::String>
  void SetServiceNetworkArn(ServiceNetworkArnT&& value) {
    m_serviceNetworkArnHasBeenSet = true;
    m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value);
  }
  template <typename ServiceNetworkArnT = Aws::String>
  ManagedServices& WithServiceNetworkArn(ServiceNetworkArnT&& value) {
    SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource gateway.</p>
   */
  inline const Aws::String& GetResourceGatewayArn() const { return m_resourceGatewayArn; }
  inline bool ResourceGatewayArnHasBeenSet() const { return m_resourceGatewayArnHasBeenSet; }
  template <typename ResourceGatewayArnT = Aws::String>
  void SetResourceGatewayArn(ResourceGatewayArnT&& value) {
    m_resourceGatewayArnHasBeenSet = true;
    m_resourceGatewayArn = std::forward<ResourceGatewayArnT>(value);
  }
  template <typename ResourceGatewayArnT = Aws::String>
  ManagedServices& WithResourceGatewayArn(ResourceGatewayArnT&& value) {
    SetResourceGatewayArn(std::forward<ResourceGatewayArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IPv4 CIDR blocks for the managed services.</p>
   */
  inline const Aws::Vector<Aws::String>& GetManagedServicesIpv4Cidrs() const { return m_managedServicesIpv4Cidrs; }
  inline bool ManagedServicesIpv4CidrsHasBeenSet() const { return m_managedServicesIpv4CidrsHasBeenSet; }
  template <typename ManagedServicesIpv4CidrsT = Aws::Vector<Aws::String>>
  void SetManagedServicesIpv4Cidrs(ManagedServicesIpv4CidrsT&& value) {
    m_managedServicesIpv4CidrsHasBeenSet = true;
    m_managedServicesIpv4Cidrs = std::forward<ManagedServicesIpv4CidrsT>(value);
  }
  template <typename ManagedServicesIpv4CidrsT = Aws::Vector<Aws::String>>
  ManagedServices& WithManagedServicesIpv4Cidrs(ManagedServicesIpv4CidrsT&& value) {
    SetManagedServicesIpv4Cidrs(std::forward<ManagedServicesIpv4CidrsT>(value));
    return *this;
  }
  template <typename ManagedServicesIpv4CidrsT = Aws::String>
  ManagedServices& AddManagedServicesIpv4Cidrs(ManagedServicesIpv4CidrsT&& value) {
    m_managedServicesIpv4CidrsHasBeenSet = true;
    m_managedServicesIpv4Cidrs.emplace_back(std::forward<ManagedServicesIpv4CidrsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service network endpoint configuration.</p>
   */
  inline const ServiceNetworkEndpoint& GetServiceNetworkEndpoint() const { return m_serviceNetworkEndpoint; }
  inline bool ServiceNetworkEndpointHasBeenSet() const { return m_serviceNetworkEndpointHasBeenSet; }
  template <typename ServiceNetworkEndpointT = ServiceNetworkEndpoint>
  void SetServiceNetworkEndpoint(ServiceNetworkEndpointT&& value) {
    m_serviceNetworkEndpointHasBeenSet = true;
    m_serviceNetworkEndpoint = std::forward<ServiceNetworkEndpointT>(value);
  }
  template <typename ServiceNetworkEndpointT = ServiceNetworkEndpoint>
  ManagedServices& WithServiceNetworkEndpoint(ServiceNetworkEndpointT&& value) {
    SetServiceNetworkEndpoint(std::forward<ServiceNetworkEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The managed Amazon S3 backup access configuration.</p>
   */
  inline const ManagedS3BackupAccess& GetManagedS3BackupAccess() const { return m_managedS3BackupAccess; }
  inline bool ManagedS3BackupAccessHasBeenSet() const { return m_managedS3BackupAccessHasBeenSet; }
  template <typename ManagedS3BackupAccessT = ManagedS3BackupAccess>
  void SetManagedS3BackupAccess(ManagedS3BackupAccessT&& value) {
    m_managedS3BackupAccessHasBeenSet = true;
    m_managedS3BackupAccess = std::forward<ManagedS3BackupAccessT>(value);
  }
  template <typename ManagedS3BackupAccessT = ManagedS3BackupAccess>
  ManagedServices& WithManagedS3BackupAccess(ManagedS3BackupAccessT&& value) {
    SetManagedS3BackupAccess(std::forward<ManagedS3BackupAccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Zero-ETL access configuration.</p>
   */
  inline const ZeroEtlAccess& GetZeroEtlAccess() const { return m_zeroEtlAccess; }
  inline bool ZeroEtlAccessHasBeenSet() const { return m_zeroEtlAccessHasBeenSet; }
  template <typename ZeroEtlAccessT = ZeroEtlAccess>
  void SetZeroEtlAccess(ZeroEtlAccessT&& value) {
    m_zeroEtlAccessHasBeenSet = true;
    m_zeroEtlAccess = std::forward<ZeroEtlAccessT>(value);
  }
  template <typename ZeroEtlAccessT = ZeroEtlAccess>
  ManagedServices& WithZeroEtlAccess(ZeroEtlAccessT&& value) {
    SetZeroEtlAccess(std::forward<ZeroEtlAccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 access configuration.</p>
   */
  inline const S3Access& GetS3Access() const { return m_s3Access; }
  inline bool S3AccessHasBeenSet() const { return m_s3AccessHasBeenSet; }
  template <typename S3AccessT = S3Access>
  void SetS3Access(S3AccessT&& value) {
    m_s3AccessHasBeenSet = true;
    m_s3Access = std::forward<S3AccessT>(value);
  }
  template <typename S3AccessT = S3Access>
  ManagedServices& WithS3Access(S3AccessT&& value) {
    SetS3Access(std::forward<S3AccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Security Token Service (STS) access configuration for
   * managed services.</p>
   */
  inline const StsAccess& GetStsAccess() const { return m_stsAccess; }
  inline bool StsAccessHasBeenSet() const { return m_stsAccessHasBeenSet; }
  template <typename StsAccessT = StsAccess>
  void SetStsAccess(StsAccessT&& value) {
    m_stsAccessHasBeenSet = true;
    m_stsAccess = std::forward<StsAccessT>(value);
  }
  template <typename StsAccessT = StsAccess>
  ManagedServices& WithStsAccess(StsAccessT&& value) {
    SetStsAccess(std::forward<StsAccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Key Management Service (KMS) access configuration for
   * managed services.</p>
   */
  inline const KmsAccess& GetKmsAccess() const { return m_kmsAccess; }
  inline bool KmsAccessHasBeenSet() const { return m_kmsAccessHasBeenSet; }
  template <typename KmsAccessT = KmsAccess>
  void SetKmsAccess(KmsAccessT&& value) {
    m_kmsAccessHasBeenSet = true;
    m_kmsAccess = std::forward<KmsAccessT>(value);
  }
  template <typename KmsAccessT = KmsAccess>
  ManagedServices& WithKmsAccess(KmsAccessT&& value) {
    SetKmsAccess(std::forward<KmsAccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access configuration for the cross-Region Amazon S3 database restore
   * source.</p>
   */
  inline const Aws::Vector<CrossRegionS3RestoreSourcesAccess>& GetCrossRegionS3RestoreSourcesAccess() const {
    return m_crossRegionS3RestoreSourcesAccess;
  }
  inline bool CrossRegionS3RestoreSourcesAccessHasBeenSet() const { return m_crossRegionS3RestoreSourcesAccessHasBeenSet; }
  template <typename CrossRegionS3RestoreSourcesAccessT = Aws::Vector<CrossRegionS3RestoreSourcesAccess>>
  void SetCrossRegionS3RestoreSourcesAccess(CrossRegionS3RestoreSourcesAccessT&& value) {
    m_crossRegionS3RestoreSourcesAccessHasBeenSet = true;
    m_crossRegionS3RestoreSourcesAccess = std::forward<CrossRegionS3RestoreSourcesAccessT>(value);
  }
  template <typename CrossRegionS3RestoreSourcesAccessT = Aws::Vector<CrossRegionS3RestoreSourcesAccess>>
  ManagedServices& WithCrossRegionS3RestoreSourcesAccess(CrossRegionS3RestoreSourcesAccessT&& value) {
    SetCrossRegionS3RestoreSourcesAccess(std::forward<CrossRegionS3RestoreSourcesAccessT>(value));
    return *this;
  }
  template <typename CrossRegionS3RestoreSourcesAccessT = CrossRegionS3RestoreSourcesAccess>
  ManagedServices& AddCrossRegionS3RestoreSourcesAccess(CrossRegionS3RestoreSourcesAccessT&& value) {
    m_crossRegionS3RestoreSourcesAccessHasBeenSet = true;
    m_crossRegionS3RestoreSourcesAccess.emplace_back(std::forward<CrossRegionS3RestoreSourcesAccessT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceNetworkArn;

  Aws::String m_resourceGatewayArn;

  Aws::Vector<Aws::String> m_managedServicesIpv4Cidrs;

  ServiceNetworkEndpoint m_serviceNetworkEndpoint;

  ManagedS3BackupAccess m_managedS3BackupAccess;

  ZeroEtlAccess m_zeroEtlAccess;

  S3Access m_s3Access;

  StsAccess m_stsAccess;

  KmsAccess m_kmsAccess;

  Aws::Vector<CrossRegionS3RestoreSourcesAccess> m_crossRegionS3RestoreSourcesAccess;
  bool m_serviceNetworkArnHasBeenSet = false;
  bool m_resourceGatewayArnHasBeenSet = false;
  bool m_managedServicesIpv4CidrsHasBeenSet = false;
  bool m_serviceNetworkEndpointHasBeenSet = false;
  bool m_managedS3BackupAccessHasBeenSet = false;
  bool m_zeroEtlAccessHasBeenSet = false;
  bool m_s3AccessHasBeenSet = false;
  bool m_stsAccessHasBeenSet = false;
  bool m_kmsAccessHasBeenSet = false;
  bool m_crossRegionS3RestoreSourcesAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
