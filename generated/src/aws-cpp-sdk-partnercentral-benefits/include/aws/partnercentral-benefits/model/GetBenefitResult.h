/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitStatus.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {
class GetBenefitResult {
 public:
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitResult() = default;
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALBENEFITS_API GetBenefitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the benefit.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetBenefitResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier that the benefit belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetBenefitResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benefit.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetBenefitResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the benefit.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetBenefitResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the benefit and its purpose.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetBenefitResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS partner programs that this benefit is associated with.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrograms() const { return m_programs; }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  GetBenefitResult& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  template <typename ProgramsT = Aws::String>
  GetBenefitResult& AddPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs.emplace_back(std::forward<ProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The available fulfillment types for this benefit (e.g., credits, access,
   * disbursement).</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  GetBenefitResult& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline GetBenefitResult& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema definition that describes the required fields for requesting this
   * benefit.</p>
   */
  inline Aws::Utils::DocumentView GetBenefitRequestSchema() const { return m_benefitRequestSchema; }
  template <typename BenefitRequestSchemaT = Aws::Utils::Document>
  void SetBenefitRequestSchema(BenefitRequestSchemaT&& value) {
    m_benefitRequestSchemaHasBeenSet = true;
    m_benefitRequestSchema = std::forward<BenefitRequestSchemaT>(value);
  }
  template <typename BenefitRequestSchemaT = Aws::Utils::Document>
  GetBenefitResult& WithBenefitRequestSchema(BenefitRequestSchemaT&& value) {
    SetBenefitRequestSchema(std::forward<BenefitRequestSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the benefit (e.g., active, inactive, deprecated).</p>
   */
  inline BenefitStatus GetStatus() const { return m_status; }
  inline void SetStatus(BenefitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetBenefitResult& WithStatus(BenefitStatus value) {
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
  GetBenefitResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_catalog;

  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_programs;

  Aws::Vector<FulfillmentType> m_fulfillmentTypes;

  Aws::Utils::Document m_benefitRequestSchema;

  BenefitStatus m_status{BenefitStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_programsHasBeenSet = false;
  bool m_fulfillmentTypesHasBeenSet = false;
  bool m_benefitRequestSchemaHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
