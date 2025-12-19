/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/BenefitStatus.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralBenefits {
namespace Model {

/**
 * <p>A summary view of a benefit containing key information for list
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-benefits-2018-05-10/BenefitSummary">AWS
 * API Reference</a></p>
 */
class BenefitSummary {
 public:
  AWS_PARTNERCENTRALBENEFITS_API BenefitSummary() = default;
  AWS_PARTNERCENTRALBENEFITS_API BenefitSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API BenefitSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALBENEFITS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the benefit.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BenefitSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier that the benefit belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  BenefitSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the benefit.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  BenefitSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the benefit.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BenefitSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A brief description of the benefit and its purpose.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  BenefitSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS partner programs that this benefit is associated with.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPrograms() const { return m_programs; }
  inline bool ProgramsHasBeenSet() const { return m_programsHasBeenSet; }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  void SetPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs = std::forward<ProgramsT>(value);
  }
  template <typename ProgramsT = Aws::Vector<Aws::String>>
  BenefitSummary& WithPrograms(ProgramsT&& value) {
    SetPrograms(std::forward<ProgramsT>(value));
    return *this;
  }
  template <typename ProgramsT = Aws::String>
  BenefitSummary& AddPrograms(ProgramsT&& value) {
    m_programsHasBeenSet = true;
    m_programs.emplace_back(std::forward<ProgramsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The available fulfillment types for this benefit.</p>
   */
  inline const Aws::Vector<FulfillmentType>& GetFulfillmentTypes() const { return m_fulfillmentTypes; }
  inline bool FulfillmentTypesHasBeenSet() const { return m_fulfillmentTypesHasBeenSet; }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  void SetFulfillmentTypes(FulfillmentTypesT&& value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes = std::forward<FulfillmentTypesT>(value);
  }
  template <typename FulfillmentTypesT = Aws::Vector<FulfillmentType>>
  BenefitSummary& WithFulfillmentTypes(FulfillmentTypesT&& value) {
    SetFulfillmentTypes(std::forward<FulfillmentTypesT>(value));
    return *this;
  }
  inline BenefitSummary& AddFulfillmentTypes(FulfillmentType value) {
    m_fulfillmentTypesHasBeenSet = true;
    m_fulfillmentTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the benefit.</p>
   */
  inline BenefitStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BenefitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BenefitSummary& WithStatus(BenefitStatus value) {
    SetStatus(value);
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

  BenefitStatus m_status{BenefitStatus::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_programsHasBeenSet = false;
  bool m_fulfillmentTypesHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
