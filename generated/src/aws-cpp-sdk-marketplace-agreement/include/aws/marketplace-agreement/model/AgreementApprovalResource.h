/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>A resource involved in the agreement, such as a product.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementApprovalResource">AWS
 * API Reference</a></p>
 */
class AgreementApprovalResource {
 public:
  AWS_AGREEMENTSERVICE_API AgreementApprovalResource() = default;
  AWS_AGREEMENTSERVICE_API AgreementApprovalResource(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementApprovalResource& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the resource.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AgreementApprovalResource& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the resource, which is the product (for example,
   * <code>SaaSProduct</code>, <code>AmiProduct</code>,
   * <code>ContainerProduct</code>).</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  AgreementApprovalResource& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the product.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AgreementApprovalResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the product is deployed on AWS (for example,
   * <code>DEPLOYED</code>).</p>
   */
  inline const Aws::String& GetDeployedOnAws() const { return m_deployedOnAws; }
  inline bool DeployedOnAwsHasBeenSet() const { return m_deployedOnAwsHasBeenSet; }
  template <typename DeployedOnAwsT = Aws::String>
  void SetDeployedOnAws(DeployedOnAwsT&& value) {
    m_deployedOnAwsHasBeenSet = true;
    m_deployedOnAws = std::forward<DeployedOnAwsT>(value);
  }
  template <typename DeployedOnAwsT = Aws::String>
  AgreementApprovalResource& WithDeployedOnAws(DeployedOnAwsT&& value) {
    SetDeployedOnAws(std::forward<DeployedOnAwsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_type;

  Aws::String m_name;

  Aws::String m_deployedOnAws;
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_deployedOnAwsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
