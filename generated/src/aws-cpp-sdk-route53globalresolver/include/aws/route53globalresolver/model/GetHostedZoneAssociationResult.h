/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/HostedZoneAssociationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class GetHostedZoneAssociationResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API GetHostedZoneAssociationResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API GetHostedZoneAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API GetHostedZoneAssociationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>ID of the private hosted zone association.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetHostedZoneAssociationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the DNS view the private hosted zone is
   * associated to.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  GetHostedZoneAssociationResult& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of the hosted zone associated to the DNS view.</p>
   */
  inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
  template <typename HostedZoneIdT = Aws::String>
  void SetHostedZoneId(HostedZoneIdT&& value) {
    m_hostedZoneIdHasBeenSet = true;
    m_hostedZoneId = std::forward<HostedZoneIdT>(value);
  }
  template <typename HostedZoneIdT = Aws::String>
  GetHostedZoneAssociationResult& WithHostedZoneId(HostedZoneIdT&& value) {
    SetHostedZoneId(std::forward<HostedZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the domain associated with the private hosted zone.</p>
   */
  inline const Aws::String& GetHostedZoneName() const { return m_hostedZoneName; }
  template <typename HostedZoneNameT = Aws::String>
  void SetHostedZoneName(HostedZoneNameT&& value) {
    m_hostedZoneNameHasBeenSet = true;
    m_hostedZoneName = std::forward<HostedZoneNameT>(value);
  }
  template <typename HostedZoneNameT = Aws::String>
  GetHostedZoneAssociationResult& WithHostedZoneName(HostedZoneNameT&& value) {
    SetHostedZoneName(std::forward<HostedZoneNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the private hosted zone association.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetHostedZoneAssociationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time and date the private hosted zone association was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetHostedZoneAssociationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time and date the private hosted zone association was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetHostedZoneAssociationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operational status of the private hosted zone association.</p>
   */
  inline HostedZoneAssociationStatus GetStatus() const { return m_status; }
  inline void SetStatus(HostedZoneAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetHostedZoneAssociationResult& WithStatus(HostedZoneAssociationStatus value) {
    SetStatus(value);
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
  GetHostedZoneAssociationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;

  Aws::String m_hostedZoneId;
  bool m_hostedZoneIdHasBeenSet = false;

  Aws::String m_hostedZoneName;
  bool m_hostedZoneNameHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  HostedZoneAssociationStatus m_status{HostedZoneAssociationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
