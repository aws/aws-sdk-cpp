/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StringFilter.h>
#include <aws/securityhub/model/DateFilter.h>
#include <aws/securityhub/model/NumberFilter.h>
#include <aws/securityhub/model/MapFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> The criteria that determine which findings a rule applies to. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesFindingFilters">AWS
   * API Reference</a></p>
   */
  class AutomationRulesFindingFilters
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesFindingFilters() = default;
    AWS_SECURITYHUB_API AutomationRulesFindingFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesFindingFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for a third-party product that generated a
     * finding in Security Hub. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetProductArn() const { return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    template<typename ProductArnT = Aws::Vector<StringFilter>>
    void SetProductArn(ProductArnT&& value) { m_productArnHasBeenSet = true; m_productArn = std::forward<ProductArnT>(value); }
    template<typename ProductArnT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithProductArn(ProductArnT&& value) { SetProductArn(std::forward<ProductArnT>(value)); return *this;}
    template<typename ProductArnT = StringFilter>
    AutomationRulesFindingFilters& AddProductArn(ProductArnT&& value) { m_productArnHasBeenSet = true; m_productArn.emplace_back(std::forward<ProductArnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID in which a finding was generated.</p> <p>
     * Array Members: Minimum number of 1 item. Maximum number of 100 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::Vector<StringFilter>>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    template<typename AwsAccountIdT = StringFilter>
    AutomationRulesFindingFilters& AddAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.emplace_back(std::forward<AwsAccountIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The product-specific identifier for a finding. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::Vector<StringFilter>>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    template<typename IdT = StringFilter>
    AutomationRulesFindingFilters& AddId(IdT&& value) { m_idHasBeenSet = true; m_id.emplace_back(std::forward<IdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The identifier for the solution-specific component that generated a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 100 items.
     * </p>
     */
    inline const Aws::Vector<StringFilter>& GetGeneratorId() const { return m_generatorId; }
    inline bool GeneratorIdHasBeenSet() const { return m_generatorIdHasBeenSet; }
    template<typename GeneratorIdT = Aws::Vector<StringFilter>>
    void SetGeneratorId(GeneratorIdT&& value) { m_generatorIdHasBeenSet = true; m_generatorId = std::forward<GeneratorIdT>(value); }
    template<typename GeneratorIdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithGeneratorId(GeneratorIdT&& value) { SetGeneratorId(std::forward<GeneratorIdT>(value)); return *this;}
    template<typename GeneratorIdT = StringFilter>
    AutomationRulesFindingFilters& AddGeneratorId(GeneratorIdT&& value) { m_generatorIdHasBeenSet = true; m_generatorId.emplace_back(std::forward<GeneratorIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> One or more finding types in the format of namespace/category/classifier
     * that classify a finding. For a list of namespaces, classifiers, and categories,
     * see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format-type-taxonomy.html">Types
     * taxonomy for ASFF</a> in the <i>Security Hub User Guide</i>.</p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::Vector<StringFilter>>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    template<typename TypeT = StringFilter>
    AutomationRulesFindingFilters& AddType(TypeT&& value) { m_typeHasBeenSet = true; m_type.emplace_back(std::forward<TypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when the potential security issue captured by a
     * finding was first observed by the security findings product. </p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetFirstObservedAt() const { return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    template<typename FirstObservedAtT = Aws::Vector<DateFilter>>
    void SetFirstObservedAt(FirstObservedAtT&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::forward<FirstObservedAtT>(value); }
    template<typename FirstObservedAtT = Aws::Vector<DateFilter>>
    AutomationRulesFindingFilters& WithFirstObservedAt(FirstObservedAtT&& value) { SetFirstObservedAt(std::forward<FirstObservedAtT>(value)); return *this;}
    template<typename FirstObservedAtT = DateFilter>
    AutomationRulesFindingFilters& AddFirstObservedAt(FirstObservedAtT&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt.emplace_back(std::forward<FirstObservedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when the security findings provider most recently
     * observed a change in the resource that is involved in the finding. </p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetLastObservedAt() const { return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    template<typename LastObservedAtT = Aws::Vector<DateFilter>>
    void SetLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::forward<LastObservedAtT>(value); }
    template<typename LastObservedAtT = Aws::Vector<DateFilter>>
    AutomationRulesFindingFilters& WithLastObservedAt(LastObservedAtT&& value) { SetLastObservedAt(std::forward<LastObservedAtT>(value)); return *this;}
    template<typename LastObservedAtT = DateFilter>
    AutomationRulesFindingFilters& AddLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt.emplace_back(std::forward<LastObservedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when this finding record was created. </p> <p>For
     * more information about the validation and formatting of timestamp fields in
     * Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Vector<DateFilter>>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Vector<DateFilter>>
    AutomationRulesFindingFilters& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    template<typename CreatedAtT = DateFilter>
    AutomationRulesFindingFilters& AddCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt.emplace_back(std::forward<CreatedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when the finding record was most recently
     * updated. </p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Vector<DateFilter>>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Vector<DateFilter>>
    AutomationRulesFindingFilters& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    template<typename UpdatedAtT = DateFilter>
    AutomationRulesFindingFilters& AddUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt.emplace_back(std::forward<UpdatedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The likelihood that a finding accurately identifies the behavior or issue
     * that it was intended to identify. <code>Confidence</code> is scored on a 0–100
     * basis using a ratio scale. A value of <code>0</code> means 0 percent confidence,
     * and a value of <code>100</code> means 100 percent confidence. For example, a
     * data exfiltration detection based on a statistical deviation of network traffic
     * has low confidence because an actual exfiltration hasn't been verified. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-confidence">Confidence</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<NumberFilter>& GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    template<typename ConfidenceT = Aws::Vector<NumberFilter>>
    void SetConfidence(ConfidenceT&& value) { m_confidenceHasBeenSet = true; m_confidence = std::forward<ConfidenceT>(value); }
    template<typename ConfidenceT = Aws::Vector<NumberFilter>>
    AutomationRulesFindingFilters& WithConfidence(ConfidenceT&& value) { SetConfidence(std::forward<ConfidenceT>(value)); return *this;}
    template<typename ConfidenceT = NumberFilter>
    AutomationRulesFindingFilters& AddConfidence(ConfidenceT&& value) { m_confidenceHasBeenSet = true; m_confidence.emplace_back(std::forward<ConfidenceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The level of importance that is assigned to the resources that are
     * associated with a finding. <code>Criticality</code> is scored on a 0–100 basis,
     * using a ratio scale that supports only full integers. A score of <code>0</code>
     * means that the underlying resources have no criticality, and a score of
     * <code>100</code> is reserved for the most critical resources. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/asff-top-level-attributes.html#asff-criticality">Criticality</a>
     * in the <i>Security Hub User Guide</i>.</p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<NumberFilter>& GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    template<typename CriticalityT = Aws::Vector<NumberFilter>>
    void SetCriticality(CriticalityT&& value) { m_criticalityHasBeenSet = true; m_criticality = std::forward<CriticalityT>(value); }
    template<typename CriticalityT = Aws::Vector<NumberFilter>>
    AutomationRulesFindingFilters& WithCriticality(CriticalityT&& value) { SetCriticality(std::forward<CriticalityT>(value)); return *this;}
    template<typename CriticalityT = NumberFilter>
    AutomationRulesFindingFilters& AddCriticality(CriticalityT&& value) { m_criticalityHasBeenSet = true; m_criticality.emplace_back(std::forward<CriticalityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A finding's title. </p> <p> Array Members: Minimum number of 1 item. Maximum
     * number of 100 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::Vector<StringFilter>>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    template<typename TitleT = StringFilter>
    AutomationRulesFindingFilters& AddTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title.emplace_back(std::forward<TitleT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A finding's description. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::Vector<StringFilter>>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    template<typename DescriptionT = StringFilter>
    AutomationRulesFindingFilters& AddDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description.emplace_back(std::forward<DescriptionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides a URL that links to a page about the current finding in the finding
     * product. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetSourceUrl() const { return m_sourceUrl; }
    inline bool SourceUrlHasBeenSet() const { return m_sourceUrlHasBeenSet; }
    template<typename SourceUrlT = Aws::Vector<StringFilter>>
    void SetSourceUrl(SourceUrlT&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl = std::forward<SourceUrlT>(value); }
    template<typename SourceUrlT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithSourceUrl(SourceUrlT&& value) { SetSourceUrl(std::forward<SourceUrlT>(value)); return *this;}
    template<typename SourceUrlT = StringFilter>
    AutomationRulesFindingFilters& AddSourceUrl(SourceUrlT&& value) { m_sourceUrlHasBeenSet = true; m_sourceUrl.emplace_back(std::forward<SourceUrlT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides the name of the product that generated the finding. For
     * control-based findings, the product name is Security Hub. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::Vector<StringFilter>>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    template<typename ProductNameT = StringFilter>
    AutomationRulesFindingFilters& AddProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName.emplace_back(std::forward<ProductNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the company for the product that generated the finding. For
     * control-based findings, the company is Amazon Web Services. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetCompanyName() const { return m_companyName; }
    inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
    template<typename CompanyNameT = Aws::Vector<StringFilter>>
    void SetCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName = std::forward<CompanyNameT>(value); }
    template<typename CompanyNameT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithCompanyName(CompanyNameT&& value) { SetCompanyName(std::forward<CompanyNameT>(value)); return *this;}
    template<typename CompanyNameT = StringFilter>
    AutomationRulesFindingFilters& AddCompanyName(CompanyNameT&& value) { m_companyNameHasBeenSet = true; m_companyName.emplace_back(std::forward<CompanyNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The severity value of the finding. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetSeverityLabel() const { return m_severityLabel; }
    inline bool SeverityLabelHasBeenSet() const { return m_severityLabelHasBeenSet; }
    template<typename SeverityLabelT = Aws::Vector<StringFilter>>
    void SetSeverityLabel(SeverityLabelT&& value) { m_severityLabelHasBeenSet = true; m_severityLabel = std::forward<SeverityLabelT>(value); }
    template<typename SeverityLabelT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithSeverityLabel(SeverityLabelT&& value) { SetSeverityLabel(std::forward<SeverityLabelT>(value)); return *this;}
    template<typename SeverityLabelT = StringFilter>
    AutomationRulesFindingFilters& AddSeverityLabel(SeverityLabelT&& value) { m_severityLabelHasBeenSet = true; m_severityLabel.emplace_back(std::forward<SeverityLabelT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of resource that the finding pertains to. </p> <p> Array Members:
     * Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::Vector<StringFilter>>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    template<typename ResourceTypeT = StringFilter>
    AutomationRulesFindingFilters& AddResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType.emplace_back(std::forward<ResourceTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The identifier for the given resource type. For Amazon Web Services
     * resources that are identified by Amazon Resource Names (ARNs), this is the ARN.
     * For Amazon Web Services resources that lack ARNs, this is the identifier as
     * defined by the Amazon Web Services service that created the resource. For
     * non-Amazon Web Services resources, this is a unique identifier that is
     * associated with the resource. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 100 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::Vector<StringFilter>>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    template<typename ResourceIdT = StringFilter>
    AutomationRulesFindingFilters& AddResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId.emplace_back(std::forward<ResourceIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The partition in which the resource that the finding pertains to is located.
     * A partition is a group of Amazon Web Services Regions. Each Amazon Web Services
     * account is scoped to one partition. </p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourcePartition() const { return m_resourcePartition; }
    inline bool ResourcePartitionHasBeenSet() const { return m_resourcePartitionHasBeenSet; }
    template<typename ResourcePartitionT = Aws::Vector<StringFilter>>
    void SetResourcePartition(ResourcePartitionT&& value) { m_resourcePartitionHasBeenSet = true; m_resourcePartition = std::forward<ResourcePartitionT>(value); }
    template<typename ResourcePartitionT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithResourcePartition(ResourcePartitionT&& value) { SetResourcePartition(std::forward<ResourcePartitionT>(value)); return *this;}
    template<typename ResourcePartitionT = StringFilter>
    AutomationRulesFindingFilters& AddResourcePartition(ResourcePartitionT&& value) { m_resourcePartitionHasBeenSet = true; m_resourcePartition.emplace_back(std::forward<ResourcePartitionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Region where the resource that a finding pertains to
     * is located. </p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceRegion() const { return m_resourceRegion; }
    inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
    template<typename ResourceRegionT = Aws::Vector<StringFilter>>
    void SetResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion = std::forward<ResourceRegionT>(value); }
    template<typename ResourceRegionT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithResourceRegion(ResourceRegionT&& value) { SetResourceRegion(std::forward<ResourceRegionT>(value)); return *this;}
    template<typename ResourceRegionT = StringFilter>
    AutomationRulesFindingFilters& AddResourceRegion(ResourceRegionT&& value) { m_resourceRegionHasBeenSet = true; m_resourceRegion.emplace_back(std::forward<ResourceRegionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of Amazon Web Services tags associated with a resource at the time
     * the finding was processed. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<MapFilter>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<MapFilter>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<MapFilter>>
    AutomationRulesFindingFilters& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = MapFilter>
    AutomationRulesFindingFilters& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Custom fields and values about the resource that a finding pertains to. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<MapFilter>& GetResourceDetailsOther() const { return m_resourceDetailsOther; }
    inline bool ResourceDetailsOtherHasBeenSet() const { return m_resourceDetailsOtherHasBeenSet; }
    template<typename ResourceDetailsOtherT = Aws::Vector<MapFilter>>
    void SetResourceDetailsOther(ResourceDetailsOtherT&& value) { m_resourceDetailsOtherHasBeenSet = true; m_resourceDetailsOther = std::forward<ResourceDetailsOtherT>(value); }
    template<typename ResourceDetailsOtherT = Aws::Vector<MapFilter>>
    AutomationRulesFindingFilters& WithResourceDetailsOther(ResourceDetailsOtherT&& value) { SetResourceDetailsOther(std::forward<ResourceDetailsOtherT>(value)); return *this;}
    template<typename ResourceDetailsOtherT = MapFilter>
    AutomationRulesFindingFilters& AddResourceDetailsOther(ResourceDetailsOtherT&& value) { m_resourceDetailsOtherHasBeenSet = true; m_resourceDetailsOther.emplace_back(std::forward<ResourceDetailsOtherT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The result of a security check. This field is only used for findings
     * generated from controls. </p> <p> Array Members: Minimum number of 1 item.
     * Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetComplianceStatus() const { return m_complianceStatus; }
    inline bool ComplianceStatusHasBeenSet() const { return m_complianceStatusHasBeenSet; }
    template<typename ComplianceStatusT = Aws::Vector<StringFilter>>
    void SetComplianceStatus(ComplianceStatusT&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus = std::forward<ComplianceStatusT>(value); }
    template<typename ComplianceStatusT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithComplianceStatus(ComplianceStatusT&& value) { SetComplianceStatus(std::forward<ComplianceStatusT>(value)); return *this;}
    template<typename ComplianceStatusT = StringFilter>
    AutomationRulesFindingFilters& AddComplianceStatus(ComplianceStatusT&& value) { m_complianceStatusHasBeenSet = true; m_complianceStatus.emplace_back(std::forward<ComplianceStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The security control ID for which a finding was generated. Security control
     * IDs are the same across standards.</p> <p> Array Members: Minimum number of 1
     * item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetComplianceSecurityControlId() const { return m_complianceSecurityControlId; }
    inline bool ComplianceSecurityControlIdHasBeenSet() const { return m_complianceSecurityControlIdHasBeenSet; }
    template<typename ComplianceSecurityControlIdT = Aws::Vector<StringFilter>>
    void SetComplianceSecurityControlId(ComplianceSecurityControlIdT&& value) { m_complianceSecurityControlIdHasBeenSet = true; m_complianceSecurityControlId = std::forward<ComplianceSecurityControlIdT>(value); }
    template<typename ComplianceSecurityControlIdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithComplianceSecurityControlId(ComplianceSecurityControlIdT&& value) { SetComplianceSecurityControlId(std::forward<ComplianceSecurityControlIdT>(value)); return *this;}
    template<typename ComplianceSecurityControlIdT = StringFilter>
    AutomationRulesFindingFilters& AddComplianceSecurityControlId(ComplianceSecurityControlIdT&& value) { m_complianceSecurityControlIdHasBeenSet = true; m_complianceSecurityControlId.emplace_back(std::forward<ComplianceSecurityControlIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of a standard in which a control is enabled. This field
     * consists of the resource portion of the Amazon Resource Name (ARN) returned for
     * a standard in the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_DescribeStandards.html">DescribeStandards</a>
     * API response.</p> <p> Array Members: Minimum number of 1 item. Maximum number of
     * 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetComplianceAssociatedStandardsId() const { return m_complianceAssociatedStandardsId; }
    inline bool ComplianceAssociatedStandardsIdHasBeenSet() const { return m_complianceAssociatedStandardsIdHasBeenSet; }
    template<typename ComplianceAssociatedStandardsIdT = Aws::Vector<StringFilter>>
    void SetComplianceAssociatedStandardsId(ComplianceAssociatedStandardsIdT&& value) { m_complianceAssociatedStandardsIdHasBeenSet = true; m_complianceAssociatedStandardsId = std::forward<ComplianceAssociatedStandardsIdT>(value); }
    template<typename ComplianceAssociatedStandardsIdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithComplianceAssociatedStandardsId(ComplianceAssociatedStandardsIdT&& value) { SetComplianceAssociatedStandardsId(std::forward<ComplianceAssociatedStandardsIdT>(value)); return *this;}
    template<typename ComplianceAssociatedStandardsIdT = StringFilter>
    AutomationRulesFindingFilters& AddComplianceAssociatedStandardsId(ComplianceAssociatedStandardsIdT&& value) { m_complianceAssociatedStandardsIdHasBeenSet = true; m_complianceAssociatedStandardsId.emplace_back(std::forward<ComplianceAssociatedStandardsIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides the veracity of a finding. </p> <p> Array Members: Minimum number
     * of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    template<typename VerificationStateT = Aws::Vector<StringFilter>>
    void SetVerificationState(VerificationStateT&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::forward<VerificationStateT>(value); }
    template<typename VerificationStateT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithVerificationState(VerificationStateT&& value) { SetVerificationState(std::forward<VerificationStateT>(value)); return *this;}
    template<typename VerificationStateT = StringFilter>
    AutomationRulesFindingFilters& AddVerificationState(VerificationStateT&& value) { m_verificationStateHasBeenSet = true; m_verificationState.emplace_back(std::forward<VerificationStateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides information about the status of the investigation into a finding.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline const Aws::Vector<StringFilter>& GetWorkflowStatus() const { return m_workflowStatus; }
    inline bool WorkflowStatusHasBeenSet() const { return m_workflowStatusHasBeenSet; }
    template<typename WorkflowStatusT = Aws::Vector<StringFilter>>
    void SetWorkflowStatus(WorkflowStatusT&& value) { m_workflowStatusHasBeenSet = true; m_workflowStatus = std::forward<WorkflowStatusT>(value); }
    template<typename WorkflowStatusT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithWorkflowStatus(WorkflowStatusT&& value) { SetWorkflowStatus(std::forward<WorkflowStatusT>(value)); return *this;}
    template<typename WorkflowStatusT = StringFilter>
    AutomationRulesFindingFilters& AddWorkflowStatus(WorkflowStatusT&& value) { m_workflowStatusHasBeenSet = true; m_workflowStatus.emplace_back(std::forward<WorkflowStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Provides the current state of a finding. </p> <p> Array Members: Minimum
     * number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetRecordState() const { return m_recordState; }
    inline bool RecordStateHasBeenSet() const { return m_recordStateHasBeenSet; }
    template<typename RecordStateT = Aws::Vector<StringFilter>>
    void SetRecordState(RecordStateT&& value) { m_recordStateHasBeenSet = true; m_recordState = std::forward<RecordStateT>(value); }
    template<typename RecordStateT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithRecordState(RecordStateT&& value) { SetRecordState(std::forward<RecordStateT>(value)); return *this;}
    template<typename RecordStateT = StringFilter>
    AutomationRulesFindingFilters& AddRecordState(RecordStateT&& value) { m_recordStateHasBeenSet = true; m_recordState.emplace_back(std::forward<RecordStateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ARN for the product that generated a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetRelatedFindingsProductArn() const { return m_relatedFindingsProductArn; }
    inline bool RelatedFindingsProductArnHasBeenSet() const { return m_relatedFindingsProductArnHasBeenSet; }
    template<typename RelatedFindingsProductArnT = Aws::Vector<StringFilter>>
    void SetRelatedFindingsProductArn(RelatedFindingsProductArnT&& value) { m_relatedFindingsProductArnHasBeenSet = true; m_relatedFindingsProductArn = std::forward<RelatedFindingsProductArnT>(value); }
    template<typename RelatedFindingsProductArnT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithRelatedFindingsProductArn(RelatedFindingsProductArnT&& value) { SetRelatedFindingsProductArn(std::forward<RelatedFindingsProductArnT>(value)); return *this;}
    template<typename RelatedFindingsProductArnT = StringFilter>
    AutomationRulesFindingFilters& AddRelatedFindingsProductArn(RelatedFindingsProductArnT&& value) { m_relatedFindingsProductArnHasBeenSet = true; m_relatedFindingsProductArn.emplace_back(std::forward<RelatedFindingsProductArnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The product-generated identifier for a related finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetRelatedFindingsId() const { return m_relatedFindingsId; }
    inline bool RelatedFindingsIdHasBeenSet() const { return m_relatedFindingsIdHasBeenSet; }
    template<typename RelatedFindingsIdT = Aws::Vector<StringFilter>>
    void SetRelatedFindingsId(RelatedFindingsIdT&& value) { m_relatedFindingsIdHasBeenSet = true; m_relatedFindingsId = std::forward<RelatedFindingsIdT>(value); }
    template<typename RelatedFindingsIdT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithRelatedFindingsId(RelatedFindingsIdT&& value) { SetRelatedFindingsId(std::forward<RelatedFindingsIdT>(value)); return *this;}
    template<typename RelatedFindingsIdT = StringFilter>
    AutomationRulesFindingFilters& AddRelatedFindingsId(RelatedFindingsIdT&& value) { m_relatedFindingsIdHasBeenSet = true; m_relatedFindingsId.emplace_back(std::forward<RelatedFindingsIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The text of a user-defined note that's added to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetNoteText() const { return m_noteText; }
    inline bool NoteTextHasBeenSet() const { return m_noteTextHasBeenSet; }
    template<typename NoteTextT = Aws::Vector<StringFilter>>
    void SetNoteText(NoteTextT&& value) { m_noteTextHasBeenSet = true; m_noteText = std::forward<NoteTextT>(value); }
    template<typename NoteTextT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithNoteText(NoteTextT&& value) { SetNoteText(std::forward<NoteTextT>(value)); return *this;}
    template<typename NoteTextT = StringFilter>
    AutomationRulesFindingFilters& AddNoteText(NoteTextT&& value) { m_noteTextHasBeenSet = true; m_noteText.emplace_back(std::forward<NoteTextT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the note was updated.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<DateFilter>& GetNoteUpdatedAt() const { return m_noteUpdatedAt; }
    inline bool NoteUpdatedAtHasBeenSet() const { return m_noteUpdatedAtHasBeenSet; }
    template<typename NoteUpdatedAtT = Aws::Vector<DateFilter>>
    void SetNoteUpdatedAt(NoteUpdatedAtT&& value) { m_noteUpdatedAtHasBeenSet = true; m_noteUpdatedAt = std::forward<NoteUpdatedAtT>(value); }
    template<typename NoteUpdatedAtT = Aws::Vector<DateFilter>>
    AutomationRulesFindingFilters& WithNoteUpdatedAt(NoteUpdatedAtT&& value) { SetNoteUpdatedAt(std::forward<NoteUpdatedAtT>(value)); return *this;}
    template<typename NoteUpdatedAtT = DateFilter>
    AutomationRulesFindingFilters& AddNoteUpdatedAt(NoteUpdatedAtT&& value) { m_noteUpdatedAtHasBeenSet = true; m_noteUpdatedAt.emplace_back(std::forward<NoteUpdatedAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The principal that created a note. </p> <p> Array Members: Minimum number of
     * 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetNoteUpdatedBy() const { return m_noteUpdatedBy; }
    inline bool NoteUpdatedByHasBeenSet() const { return m_noteUpdatedByHasBeenSet; }
    template<typename NoteUpdatedByT = Aws::Vector<StringFilter>>
    void SetNoteUpdatedBy(NoteUpdatedByT&& value) { m_noteUpdatedByHasBeenSet = true; m_noteUpdatedBy = std::forward<NoteUpdatedByT>(value); }
    template<typename NoteUpdatedByT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithNoteUpdatedBy(NoteUpdatedByT&& value) { SetNoteUpdatedBy(std::forward<NoteUpdatedByT>(value)); return *this;}
    template<typename NoteUpdatedByT = StringFilter>
    AutomationRulesFindingFilters& AddNoteUpdatedBy(NoteUpdatedByT&& value) { m_noteUpdatedByHasBeenSet = true; m_noteUpdatedBy.emplace_back(std::forward<NoteUpdatedByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of user-defined name and value string pairs added to a finding. </p>
     * <p> Array Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<MapFilter>& GetUserDefinedFields() const { return m_userDefinedFields; }
    inline bool UserDefinedFieldsHasBeenSet() const { return m_userDefinedFieldsHasBeenSet; }
    template<typename UserDefinedFieldsT = Aws::Vector<MapFilter>>
    void SetUserDefinedFields(UserDefinedFieldsT&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields = std::forward<UserDefinedFieldsT>(value); }
    template<typename UserDefinedFieldsT = Aws::Vector<MapFilter>>
    AutomationRulesFindingFilters& WithUserDefinedFields(UserDefinedFieldsT&& value) { SetUserDefinedFields(std::forward<UserDefinedFieldsT>(value)); return *this;}
    template<typename UserDefinedFieldsT = MapFilter>
    AutomationRulesFindingFilters& AddUserDefinedFields(UserDefinedFieldsT&& value) { m_userDefinedFieldsHasBeenSet = true; m_userDefinedFields.emplace_back(std::forward<UserDefinedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the application that is related to a
     * finding. </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20
     * items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceApplicationArn() const { return m_resourceApplicationArn; }
    inline bool ResourceApplicationArnHasBeenSet() const { return m_resourceApplicationArnHasBeenSet; }
    template<typename ResourceApplicationArnT = Aws::Vector<StringFilter>>
    void SetResourceApplicationArn(ResourceApplicationArnT&& value) { m_resourceApplicationArnHasBeenSet = true; m_resourceApplicationArn = std::forward<ResourceApplicationArnT>(value); }
    template<typename ResourceApplicationArnT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithResourceApplicationArn(ResourceApplicationArnT&& value) { SetResourceApplicationArn(std::forward<ResourceApplicationArnT>(value)); return *this;}
    template<typename ResourceApplicationArnT = StringFilter>
    AutomationRulesFindingFilters& AddResourceApplicationArn(ResourceApplicationArnT&& value) { m_resourceApplicationArnHasBeenSet = true; m_resourceApplicationArn.emplace_back(std::forward<ResourceApplicationArnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the application that is related to a finding. </p> <p> Array
     * Members: Minimum number of 1 item. Maximum number of 20 items. </p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceApplicationName() const { return m_resourceApplicationName; }
    inline bool ResourceApplicationNameHasBeenSet() const { return m_resourceApplicationNameHasBeenSet; }
    template<typename ResourceApplicationNameT = Aws::Vector<StringFilter>>
    void SetResourceApplicationName(ResourceApplicationNameT&& value) { m_resourceApplicationNameHasBeenSet = true; m_resourceApplicationName = std::forward<ResourceApplicationNameT>(value); }
    template<typename ResourceApplicationNameT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithResourceApplicationName(ResourceApplicationNameT&& value) { SetResourceApplicationName(std::forward<ResourceApplicationNameT>(value)); return *this;}
    template<typename ResourceApplicationNameT = StringFilter>
    AutomationRulesFindingFilters& AddResourceApplicationName(ResourceApplicationNameT&& value) { m_resourceApplicationNameHasBeenSet = true; m_resourceApplicationName.emplace_back(std::forward<ResourceApplicationNameT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services account in which a finding was generated.
     * </p> <p> Array Members: Minimum number of 1 item. Maximum number of 20 items.
     * </p>
     */
    inline const Aws::Vector<StringFilter>& GetAwsAccountName() const { return m_awsAccountName; }
    inline bool AwsAccountNameHasBeenSet() const { return m_awsAccountNameHasBeenSet; }
    template<typename AwsAccountNameT = Aws::Vector<StringFilter>>
    void SetAwsAccountName(AwsAccountNameT&& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName = std::forward<AwsAccountNameT>(value); }
    template<typename AwsAccountNameT = Aws::Vector<StringFilter>>
    AutomationRulesFindingFilters& WithAwsAccountName(AwsAccountNameT&& value) { SetAwsAccountName(std::forward<AwsAccountNameT>(value)); return *this;}
    template<typename AwsAccountNameT = StringFilter>
    AutomationRulesFindingFilters& AddAwsAccountName(AwsAccountNameT&& value) { m_awsAccountNameHasBeenSet = true; m_awsAccountName.emplace_back(std::forward<AwsAccountNameT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringFilter> m_productArn;
    bool m_productArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<StringFilter> m_generatorId;
    bool m_generatorIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<DateFilter> m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<DateFilter> m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<NumberFilter> m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<NumberFilter> m_criticality;
    bool m_criticalityHasBeenSet = false;

    Aws::Vector<StringFilter> m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<StringFilter> m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<StringFilter> m_sourceUrl;
    bool m_sourceUrlHasBeenSet = false;

    Aws::Vector<StringFilter> m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_companyName;
    bool m_companyNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_severityLabel;
    bool m_severityLabelHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourcePartition;
    bool m_resourcePartitionHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceRegion;
    bool m_resourceRegionHasBeenSet = false;

    Aws::Vector<MapFilter> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::Vector<MapFilter> m_resourceDetailsOther;
    bool m_resourceDetailsOtherHasBeenSet = false;

    Aws::Vector<StringFilter> m_complianceStatus;
    bool m_complianceStatusHasBeenSet = false;

    Aws::Vector<StringFilter> m_complianceSecurityControlId;
    bool m_complianceSecurityControlIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_complianceAssociatedStandardsId;
    bool m_complianceAssociatedStandardsIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    Aws::Vector<StringFilter> m_workflowStatus;
    bool m_workflowStatusHasBeenSet = false;

    Aws::Vector<StringFilter> m_recordState;
    bool m_recordStateHasBeenSet = false;

    Aws::Vector<StringFilter> m_relatedFindingsProductArn;
    bool m_relatedFindingsProductArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_relatedFindingsId;
    bool m_relatedFindingsIdHasBeenSet = false;

    Aws::Vector<StringFilter> m_noteText;
    bool m_noteTextHasBeenSet = false;

    Aws::Vector<DateFilter> m_noteUpdatedAt;
    bool m_noteUpdatedAtHasBeenSet = false;

    Aws::Vector<StringFilter> m_noteUpdatedBy;
    bool m_noteUpdatedByHasBeenSet = false;

    Aws::Vector<MapFilter> m_userDefinedFields;
    bool m_userDefinedFieldsHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceApplicationArn;
    bool m_resourceApplicationArnHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceApplicationName;
    bool m_resourceApplicationNameHasBeenSet = false;

    Aws::Vector<StringFilter> m_awsAccountName;
    bool m_awsAccountNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
