/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/AllianceLeadContact.h>

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
class PutAllianceLeadContactResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API PutAllianceLeadContactResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API PutAllianceLeadContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API PutAllianceLeadContactResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier for the partner account.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  PutAllianceLeadContactResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the partner account.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  PutAllianceLeadContactResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the partner account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  PutAllianceLeadContactResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated alliance lead contact information.</p>
   */
  inline const AllianceLeadContact& GetAllianceLeadContact() const { return m_allianceLeadContact; }
  template <typename AllianceLeadContactT = AllianceLeadContact>
  void SetAllianceLeadContact(AllianceLeadContactT&& value) {
    m_allianceLeadContactHasBeenSet = true;
    m_allianceLeadContact = std::forward<AllianceLeadContactT>(value);
  }
  template <typename AllianceLeadContactT = AllianceLeadContact>
  PutAllianceLeadContactResult& WithAllianceLeadContact(AllianceLeadContactT&& value) {
    SetAllianceLeadContact(std::forward<AllianceLeadContactT>(value));
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
  PutAllianceLeadContactResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_arn;

  Aws::String m_id;

  AllianceLeadContact m_allianceLeadContact;

  Aws::String m_requestId;
  bool m_catalogHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_allianceLeadContactHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
