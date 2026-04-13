/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/AmazonMachineImageFulfillmentOption.h>
#include <aws/marketplace-discovery/model/ApiFulfillmentOption.h>
#include <aws/marketplace-discovery/model/CloudFormationFulfillmentOption.h>
#include <aws/marketplace-discovery/model/ContainerFulfillmentOption.h>
#include <aws/marketplace-discovery/model/DataExchangeFulfillmentOption.h>
#include <aws/marketplace-discovery/model/Ec2ImageBuilderComponentFulfillmentOption.h>
#include <aws/marketplace-discovery/model/EksAddOnFulfillmentOption.h>
#include <aws/marketplace-discovery/model/HelmFulfillmentOption.h>
#include <aws/marketplace-discovery/model/ProfessionalServicesFulfillmentOption.h>
#include <aws/marketplace-discovery/model/SaasFulfillmentOption.h>
#include <aws/marketplace-discovery/model/SageMakerAlgorithmFulfillmentOption.h>
#include <aws/marketplace-discovery/model/SageMakerModelFulfillmentOption.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Describes a fulfillment option for a product. Each element contains exactly
 * one fulfillment option type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/FulfillmentOption">AWS
 * API Reference</a></p>
 */
class FulfillmentOption {
 public:
  AWS_MARKETPLACEDISCOVERY_API FulfillmentOption() = default;
  AWS_MARKETPLACEDISCOVERY_API FulfillmentOption(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API FulfillmentOption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An Amazon Machine Image (AMI) fulfillment option for EC2 deployment.</p>
   */
  inline const AmazonMachineImageFulfillmentOption& GetAmazonMachineImageFulfillmentOption() const {
    return m_amazonMachineImageFulfillmentOption;
  }
  inline bool AmazonMachineImageFulfillmentOptionHasBeenSet() const { return m_amazonMachineImageFulfillmentOptionHasBeenSet; }
  template <typename AmazonMachineImageFulfillmentOptionT = AmazonMachineImageFulfillmentOption>
  void SetAmazonMachineImageFulfillmentOption(AmazonMachineImageFulfillmentOptionT&& value) {
    m_amazonMachineImageFulfillmentOptionHasBeenSet = true;
    m_amazonMachineImageFulfillmentOption = std::forward<AmazonMachineImageFulfillmentOptionT>(value);
  }
  template <typename AmazonMachineImageFulfillmentOptionT = AmazonMachineImageFulfillmentOption>
  FulfillmentOption& WithAmazonMachineImageFulfillmentOption(AmazonMachineImageFulfillmentOptionT&& value) {
    SetAmazonMachineImageFulfillmentOption(std::forward<AmazonMachineImageFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An API-based fulfillment option for programmatic integration.</p>
   */
  inline const ApiFulfillmentOption& GetApiFulfillmentOption() const { return m_apiFulfillmentOption; }
  inline bool ApiFulfillmentOptionHasBeenSet() const { return m_apiFulfillmentOptionHasBeenSet; }
  template <typename ApiFulfillmentOptionT = ApiFulfillmentOption>
  void SetApiFulfillmentOption(ApiFulfillmentOptionT&& value) {
    m_apiFulfillmentOptionHasBeenSet = true;
    m_apiFulfillmentOption = std::forward<ApiFulfillmentOptionT>(value);
  }
  template <typename ApiFulfillmentOptionT = ApiFulfillmentOption>
  FulfillmentOption& WithApiFulfillmentOption(ApiFulfillmentOptionT&& value) {
    SetApiFulfillmentOption(std::forward<ApiFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An AWS CloudFormation template fulfillment option for infrastructure
   * deployment.</p>
   */
  inline const CloudFormationFulfillmentOption& GetCloudFormationFulfillmentOption() const { return m_cloudFormationFulfillmentOption; }
  inline bool CloudFormationFulfillmentOptionHasBeenSet() const { return m_cloudFormationFulfillmentOptionHasBeenSet; }
  template <typename CloudFormationFulfillmentOptionT = CloudFormationFulfillmentOption>
  void SetCloudFormationFulfillmentOption(CloudFormationFulfillmentOptionT&& value) {
    m_cloudFormationFulfillmentOptionHasBeenSet = true;
    m_cloudFormationFulfillmentOption = std::forward<CloudFormationFulfillmentOptionT>(value);
  }
  template <typename CloudFormationFulfillmentOptionT = CloudFormationFulfillmentOption>
  FulfillmentOption& WithCloudFormationFulfillmentOption(CloudFormationFulfillmentOptionT&& value) {
    SetCloudFormationFulfillmentOption(std::forward<CloudFormationFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container image fulfillment option for container-based deployment.</p>
   */
  inline const ContainerFulfillmentOption& GetContainerFulfillmentOption() const { return m_containerFulfillmentOption; }
  inline bool ContainerFulfillmentOptionHasBeenSet() const { return m_containerFulfillmentOptionHasBeenSet; }
  template <typename ContainerFulfillmentOptionT = ContainerFulfillmentOption>
  void SetContainerFulfillmentOption(ContainerFulfillmentOptionT&& value) {
    m_containerFulfillmentOptionHasBeenSet = true;
    m_containerFulfillmentOption = std::forward<ContainerFulfillmentOptionT>(value);
  }
  template <typename ContainerFulfillmentOptionT = ContainerFulfillmentOption>
  FulfillmentOption& WithContainerFulfillmentOption(ContainerFulfillmentOptionT&& value) {
    SetContainerFulfillmentOption(std::forward<ContainerFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Helm chart fulfillment option for Kubernetes deployment.</p>
   */
  inline const HelmFulfillmentOption& GetHelmFulfillmentOption() const { return m_helmFulfillmentOption; }
  inline bool HelmFulfillmentOptionHasBeenSet() const { return m_helmFulfillmentOptionHasBeenSet; }
  template <typename HelmFulfillmentOptionT = HelmFulfillmentOption>
  void SetHelmFulfillmentOption(HelmFulfillmentOptionT&& value) {
    m_helmFulfillmentOptionHasBeenSet = true;
    m_helmFulfillmentOption = std::forward<HelmFulfillmentOptionT>(value);
  }
  template <typename HelmFulfillmentOptionT = HelmFulfillmentOption>
  FulfillmentOption& WithHelmFulfillmentOption(HelmFulfillmentOptionT&& value) {
    SetHelmFulfillmentOption(std::forward<HelmFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon EKS add-on fulfillment option.</p>
   */
  inline const EksAddOnFulfillmentOption& GetEksAddOnFulfillmentOption() const { return m_eksAddOnFulfillmentOption; }
  inline bool EksAddOnFulfillmentOptionHasBeenSet() const { return m_eksAddOnFulfillmentOptionHasBeenSet; }
  template <typename EksAddOnFulfillmentOptionT = EksAddOnFulfillmentOption>
  void SetEksAddOnFulfillmentOption(EksAddOnFulfillmentOptionT&& value) {
    m_eksAddOnFulfillmentOptionHasBeenSet = true;
    m_eksAddOnFulfillmentOption = std::forward<EksAddOnFulfillmentOptionT>(value);
  }
  template <typename EksAddOnFulfillmentOptionT = EksAddOnFulfillmentOption>
  FulfillmentOption& WithEksAddOnFulfillmentOption(EksAddOnFulfillmentOptionT&& value) {
    SetEksAddOnFulfillmentOption(std::forward<EksAddOnFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An EC2 Image Builder component fulfillment option.</p>
   */
  inline const Ec2ImageBuilderComponentFulfillmentOption& GetEc2ImageBuilderComponentFulfillmentOption() const {
    return m_ec2ImageBuilderComponentFulfillmentOption;
  }
  inline bool Ec2ImageBuilderComponentFulfillmentOptionHasBeenSet() const { return m_ec2ImageBuilderComponentFulfillmentOptionHasBeenSet; }
  template <typename Ec2ImageBuilderComponentFulfillmentOptionT = Ec2ImageBuilderComponentFulfillmentOption>
  void SetEc2ImageBuilderComponentFulfillmentOption(Ec2ImageBuilderComponentFulfillmentOptionT&& value) {
    m_ec2ImageBuilderComponentFulfillmentOptionHasBeenSet = true;
    m_ec2ImageBuilderComponentFulfillmentOption = std::forward<Ec2ImageBuilderComponentFulfillmentOptionT>(value);
  }
  template <typename Ec2ImageBuilderComponentFulfillmentOptionT = Ec2ImageBuilderComponentFulfillmentOption>
  FulfillmentOption& WithEc2ImageBuilderComponentFulfillmentOption(Ec2ImageBuilderComponentFulfillmentOptionT&& value) {
    SetEc2ImageBuilderComponentFulfillmentOption(std::forward<Ec2ImageBuilderComponentFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An AWS Data Exchange fulfillment option for data set delivery.</p>
   */
  inline const DataExchangeFulfillmentOption& GetDataExchangeFulfillmentOption() const { return m_dataExchangeFulfillmentOption; }
  inline bool DataExchangeFulfillmentOptionHasBeenSet() const { return m_dataExchangeFulfillmentOptionHasBeenSet; }
  template <typename DataExchangeFulfillmentOptionT = DataExchangeFulfillmentOption>
  void SetDataExchangeFulfillmentOption(DataExchangeFulfillmentOptionT&& value) {
    m_dataExchangeFulfillmentOptionHasBeenSet = true;
    m_dataExchangeFulfillmentOption = std::forward<DataExchangeFulfillmentOptionT>(value);
  }
  template <typename DataExchangeFulfillmentOptionT = DataExchangeFulfillmentOption>
  FulfillmentOption& WithDataExchangeFulfillmentOption(DataExchangeFulfillmentOptionT&& value) {
    SetDataExchangeFulfillmentOption(std::forward<DataExchangeFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A professional services fulfillment option.</p>
   */
  inline const ProfessionalServicesFulfillmentOption& GetProfessionalServicesFulfillmentOption() const {
    return m_professionalServicesFulfillmentOption;
  }
  inline bool ProfessionalServicesFulfillmentOptionHasBeenSet() const { return m_professionalServicesFulfillmentOptionHasBeenSet; }
  template <typename ProfessionalServicesFulfillmentOptionT = ProfessionalServicesFulfillmentOption>
  void SetProfessionalServicesFulfillmentOption(ProfessionalServicesFulfillmentOptionT&& value) {
    m_professionalServicesFulfillmentOptionHasBeenSet = true;
    m_professionalServicesFulfillmentOption = std::forward<ProfessionalServicesFulfillmentOptionT>(value);
  }
  template <typename ProfessionalServicesFulfillmentOptionT = ProfessionalServicesFulfillmentOption>
  FulfillmentOption& WithProfessionalServicesFulfillmentOption(ProfessionalServicesFulfillmentOptionT&& value) {
    SetProfessionalServicesFulfillmentOption(std::forward<ProfessionalServicesFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Software as a Service (SaaS) fulfillment option.</p>
   */
  inline const SaasFulfillmentOption& GetSaasFulfillmentOption() const { return m_saasFulfillmentOption; }
  inline bool SaasFulfillmentOptionHasBeenSet() const { return m_saasFulfillmentOptionHasBeenSet; }
  template <typename SaasFulfillmentOptionT = SaasFulfillmentOption>
  void SetSaasFulfillmentOption(SaasFulfillmentOptionT&& value) {
    m_saasFulfillmentOptionHasBeenSet = true;
    m_saasFulfillmentOption = std::forward<SaasFulfillmentOptionT>(value);
  }
  template <typename SaasFulfillmentOptionT = SaasFulfillmentOption>
  FulfillmentOption& WithSaasFulfillmentOption(SaasFulfillmentOptionT&& value) {
    SetSaasFulfillmentOption(std::forward<SaasFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon SageMaker algorithm fulfillment option.</p>
   */
  inline const SageMakerAlgorithmFulfillmentOption& GetSageMakerAlgorithmFulfillmentOption() const {
    return m_sageMakerAlgorithmFulfillmentOption;
  }
  inline bool SageMakerAlgorithmFulfillmentOptionHasBeenSet() const { return m_sageMakerAlgorithmFulfillmentOptionHasBeenSet; }
  template <typename SageMakerAlgorithmFulfillmentOptionT = SageMakerAlgorithmFulfillmentOption>
  void SetSageMakerAlgorithmFulfillmentOption(SageMakerAlgorithmFulfillmentOptionT&& value) {
    m_sageMakerAlgorithmFulfillmentOptionHasBeenSet = true;
    m_sageMakerAlgorithmFulfillmentOption = std::forward<SageMakerAlgorithmFulfillmentOptionT>(value);
  }
  template <typename SageMakerAlgorithmFulfillmentOptionT = SageMakerAlgorithmFulfillmentOption>
  FulfillmentOption& WithSageMakerAlgorithmFulfillmentOption(SageMakerAlgorithmFulfillmentOptionT&& value) {
    SetSageMakerAlgorithmFulfillmentOption(std::forward<SageMakerAlgorithmFulfillmentOptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An Amazon SageMaker model fulfillment option.</p>
   */
  inline const SageMakerModelFulfillmentOption& GetSageMakerModelFulfillmentOption() const { return m_sageMakerModelFulfillmentOption; }
  inline bool SageMakerModelFulfillmentOptionHasBeenSet() const { return m_sageMakerModelFulfillmentOptionHasBeenSet; }
  template <typename SageMakerModelFulfillmentOptionT = SageMakerModelFulfillmentOption>
  void SetSageMakerModelFulfillmentOption(SageMakerModelFulfillmentOptionT&& value) {
    m_sageMakerModelFulfillmentOptionHasBeenSet = true;
    m_sageMakerModelFulfillmentOption = std::forward<SageMakerModelFulfillmentOptionT>(value);
  }
  template <typename SageMakerModelFulfillmentOptionT = SageMakerModelFulfillmentOption>
  FulfillmentOption& WithSageMakerModelFulfillmentOption(SageMakerModelFulfillmentOptionT&& value) {
    SetSageMakerModelFulfillmentOption(std::forward<SageMakerModelFulfillmentOptionT>(value));
    return *this;
  }
  ///@}
 private:
  AmazonMachineImageFulfillmentOption m_amazonMachineImageFulfillmentOption;

  ApiFulfillmentOption m_apiFulfillmentOption;

  CloudFormationFulfillmentOption m_cloudFormationFulfillmentOption;

  ContainerFulfillmentOption m_containerFulfillmentOption;

  HelmFulfillmentOption m_helmFulfillmentOption;

  EksAddOnFulfillmentOption m_eksAddOnFulfillmentOption;

  Ec2ImageBuilderComponentFulfillmentOption m_ec2ImageBuilderComponentFulfillmentOption;

  DataExchangeFulfillmentOption m_dataExchangeFulfillmentOption;

  ProfessionalServicesFulfillmentOption m_professionalServicesFulfillmentOption;

  SaasFulfillmentOption m_saasFulfillmentOption;

  SageMakerAlgorithmFulfillmentOption m_sageMakerAlgorithmFulfillmentOption;

  SageMakerModelFulfillmentOption m_sageMakerModelFulfillmentOption;
  bool m_amazonMachineImageFulfillmentOptionHasBeenSet = false;
  bool m_apiFulfillmentOptionHasBeenSet = false;
  bool m_cloudFormationFulfillmentOptionHasBeenSet = false;
  bool m_containerFulfillmentOptionHasBeenSet = false;
  bool m_helmFulfillmentOptionHasBeenSet = false;
  bool m_eksAddOnFulfillmentOptionHasBeenSet = false;
  bool m_ec2ImageBuilderComponentFulfillmentOptionHasBeenSet = false;
  bool m_dataExchangeFulfillmentOptionHasBeenSet = false;
  bool m_professionalServicesFulfillmentOptionHasBeenSet = false;
  bool m_saasFulfillmentOptionHasBeenSet = false;
  bool m_sageMakerAlgorithmFulfillmentOptionHasBeenSet = false;
  bool m_sageMakerModelFulfillmentOptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
