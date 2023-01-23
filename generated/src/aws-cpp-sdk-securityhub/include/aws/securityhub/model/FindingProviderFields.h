/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/FindingProviderSeverity.h>
#include <aws/securityhub/model/RelatedFinding.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>In a <code>BatchImportFindings</code> request, finding providers use
   * <code>FindingProviderFields</code> to provide and update values for confidence,
   * criticality, related findings, severity, and types.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingProviderFields">AWS
   * API Reference</a></p>
   */
  class FindingProviderFields
  {
  public:
    AWS_SECURITYHUB_API FindingProviderFields();
    AWS_SECURITYHUB_API FindingProviderFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingProviderFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline int GetConfidence() const{ return m_confidence; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline FindingProviderFields& WithConfidence(int value) { SetConfidence(value); return *this;}


    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline int GetCriticality() const{ return m_criticality; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }

    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline FindingProviderFields& WithCriticality(int value) { SetCriticality(value); return *this;}


    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const{ return m_relatedFindings; }

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline void SetRelatedFindings(const Aws::Vector<RelatedFinding>& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = value; }

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline void SetRelatedFindings(Aws::Vector<RelatedFinding>&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::move(value); }

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline FindingProviderFields& WithRelatedFindings(const Aws::Vector<RelatedFinding>& value) { SetRelatedFindings(value); return *this;}

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline FindingProviderFields& WithRelatedFindings(Aws::Vector<RelatedFinding>&& value) { SetRelatedFindings(std::move(value)); return *this;}

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline FindingProviderFields& AddRelatedFindings(const RelatedFinding& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(value); return *this; }

    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline FindingProviderFields& AddRelatedFindings(RelatedFinding&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.push_back(std::move(value)); return *this; }


    /**
     * <p>The severity of a finding.</p>
     */
    inline const FindingProviderSeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of a finding.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of a finding.</p>
     */
    inline void SetSeverity(const FindingProviderSeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of a finding.</p>
     */
    inline void SetSeverity(FindingProviderSeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of a finding.</p>
     */
    inline FindingProviderFields& WithSeverity(const FindingProviderSeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of a finding.</p>
     */
    inline FindingProviderFields& WithSeverity(FindingProviderSeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline FindingProviderFields& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline FindingProviderFields& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline FindingProviderFields& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline FindingProviderFields& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline FindingProviderFields& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

  private:

    int m_confidence;
    bool m_confidenceHasBeenSet = false;

    int m_criticality;
    bool m_criticalityHasBeenSet = false;

    Aws::Vector<RelatedFinding> m_relatedFindings;
    bool m_relatedFindingsHasBeenSet = false;

    FindingProviderSeverity m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
