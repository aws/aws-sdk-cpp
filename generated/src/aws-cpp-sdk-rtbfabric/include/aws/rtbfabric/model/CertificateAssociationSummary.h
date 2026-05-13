/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/CertificateAssociationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>Describes a summary of a certificate association.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/CertificateAssociationSummary">AWS
 * API Reference</a></p>
 */
class CertificateAssociationSummary {
 public:
  AWS_RTBFABRIC_API CertificateAssociationSummary() = default;
  AWS_RTBFABRIC_API CertificateAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API CertificateAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACM certificate.</p>
   */
  inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
  inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }
  template <typename AcmCertificateArnT = Aws::String>
  void SetAcmCertificateArn(AcmCertificateArnT&& value) {
    m_acmCertificateArnHasBeenSet = true;
    m_acmCertificateArn = std::forward<AcmCertificateArnT>(value);
  }
  template <typename AcmCertificateArnT = Aws::String>
  CertificateAssociationSummary& WithAcmCertificateArn(AcmCertificateArnT&& value) {
    SetAcmCertificateArn(std::forward<AcmCertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the certificate association.</p>
   */
  inline CertificateAssociationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CertificateAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CertificateAssociationSummary& WithStatus(CertificateAssociationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the certificate was associated.</p>
   */
  inline const Aws::Utils::DateTime& GetAssociatedAt() const { return m_associatedAt; }
  inline bool AssociatedAtHasBeenSet() const { return m_associatedAtHasBeenSet; }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  void SetAssociatedAt(AssociatedAtT&& value) {
    m_associatedAtHasBeenSet = true;
    m_associatedAt = std::forward<AssociatedAtT>(value);
  }
  template <typename AssociatedAtT = Aws::Utils::DateTime>
  CertificateAssociationSummary& WithAssociatedAt(AssociatedAtT&& value) {
    SetAssociatedAt(std::forward<AssociatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the certificate association was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CertificateAssociationSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmCertificateArn;

  CertificateAssociationStatus m_status{CertificateAssociationStatus::NOT_SET};

  Aws::Utils::DateTime m_associatedAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_acmCertificateArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_associatedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
