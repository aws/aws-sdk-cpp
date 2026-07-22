/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/QualificationsAssociationPartner.h>
#include <aws/partnercentral-account/model/QualificationsAssociationTaskStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class GetQualificationsAssociationTaskResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetQualificationsAssociationTaskResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API GetQualificationsAssociationTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API GetQualificationsAssociationTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier echoed from the request.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetQualificationsAssociationTaskResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies your partner
   * resource.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetQualificationsAssociationTaskResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Your unique partner identifier in the AWS Partner Network.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetQualificationsAssociationTaskResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the qualifications association task, in the format
   * <code>pqatask-[a-z2-7]{13}</code>.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetQualificationsAssociationTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the qualifications association task. Valid values:
   * <code>IN_PROGRESS</code>, <code>SUCCEEDED</code>.</p>
   */
  inline QualificationsAssociationTaskStatus GetStatus() const { return m_status; }
  inline void SetStatus(QualificationsAssociationTaskStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetQualificationsAssociationTaskResult& WithStatus(QualificationsAssociationTaskStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary partner's profile and account identifiers that the task is
   * associating qualifications with.</p>
   */
  inline const QualificationsAssociationPartner& GetPrimaryPartner() const { return m_primaryPartner; }
  template <typename PrimaryPartnerT = QualificationsAssociationPartner>
  void SetPrimaryPartner(PrimaryPartnerT&& value) {
    m_primaryPartnerHasBeenSet = true;
    m_primaryPartner = std::forward<PrimaryPartnerT>(value);
  }
  template <typename PrimaryPartnerT = QualificationsAssociationPartner>
  GetQualificationsAssociationTaskResult& WithPrimaryPartner(PrimaryPartnerT&& value) {
    SetPrimaryPartner(std::forward<PrimaryPartnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the qualifications association task started, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetQualificationsAssociationTaskResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the qualifications association task ended, in ISO 8601
   * format. This field is present only when the status is
   * <code>SUCCEEDED</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetQualificationsAssociationTaskResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
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
  GetQualificationsAssociationTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_catalog;

  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_taskId;

  QualificationsAssociationTaskStatus m_status{QualificationsAssociationTaskStatus::NOT_SET};

  QualificationsAssociationPartner m_primaryPartner;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_catalogHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_primaryPartnerHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
