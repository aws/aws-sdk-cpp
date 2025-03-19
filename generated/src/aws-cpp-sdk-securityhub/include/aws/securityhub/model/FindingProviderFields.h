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
   * <p>In a <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
   * <code>BatchImportFindings</code> </a> request, finding providers use
   * <code>FindingProviderFields</code> to provide and update values for the
   * following fields:</p> <ul> <li> <p> <code>Confidence</code> </p> </li> <li> <p>
   * <code>Criticality</code> </p> </li> <li> <p> <code>RelatedFindings</code> </p>
   * </li> <li> <p> <code>Severity</code> </p> </li> <li> <p> <code>Types</code> </p>
   * </li> </ul> <p>The preceding fields are nested under the
   * <code>FindingProviderFields</code> object, but also have analogues of the same
   * name as top-level ASFF fields. When a new finding is sent to Security Hub by a
   * finding provider, Security Hub populates the <code>FindingProviderFields</code>
   * object automatically, if it is empty, based on the corresponding top-level
   * fields.</p> <p>Finding providers can update <code>FindingProviderFields</code>
   * only by using the <code>BatchImportFindings</code> operation. Finding providers
   * can't update this object with the <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
   * <code>BatchUpdateFindings</code> </a> operation. Customers can update the
   * top-level fields by using the <code>BatchUpdateFindings</code> operation.
   * Customers can't update <code>FindingProviderFields</code>.</p> <p>For
   * information about how Security Hub handles updates from
   * <code>BatchImportFindings</code> to <code>FindingProviderFields</code> and to
   * the corresponding top-level attributes, see <a
   * href="https://docs.aws.amazon.com/securityhub/latest/userguide/finding-update-batchimportfindings.html#batchimportfindings-findingproviderfields">Using
   * <code>FindingProviderFields</code> </a> in the <i>Security Hub User
   * Guide</i>.</p> <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingProviderFields">AWS
   * API Reference</a></p>
   */
  class FindingProviderFields
  {
  public:
    AWS_SECURITYHUB_API FindingProviderFields() = default;
    AWS_SECURITYHUB_API FindingProviderFields(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingProviderFields& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A finding's confidence. Confidence is defined as the likelihood that a
     * finding accurately identifies the behavior or issue that it was intended to
     * identify.</p> <p>Confidence is scored on a 0-100 basis using a ratio scale,
     * where 0 means zero percent confidence and 100 means 100 percent confidence.</p>
     */
    inline int GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline FindingProviderFields& WithConfidence(int value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of importance assigned to the resources associated with the
     * finding.</p> <p>A score of 0 means that the underlying resources have no
     * criticality, and a score of 100 is reserved for the most critical resources.</p>
     */
    inline int GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline FindingProviderFields& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of findings that are related to the current finding.</p>
     */
    inline const Aws::Vector<RelatedFinding>& GetRelatedFindings() const { return m_relatedFindings; }
    inline bool RelatedFindingsHasBeenSet() const { return m_relatedFindingsHasBeenSet; }
    template<typename RelatedFindingsT = Aws::Vector<RelatedFinding>>
    void SetRelatedFindings(RelatedFindingsT&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings = std::forward<RelatedFindingsT>(value); }
    template<typename RelatedFindingsT = Aws::Vector<RelatedFinding>>
    FindingProviderFields& WithRelatedFindings(RelatedFindingsT&& value) { SetRelatedFindings(std::forward<RelatedFindingsT>(value)); return *this;}
    template<typename RelatedFindingsT = RelatedFinding>
    FindingProviderFields& AddRelatedFindings(RelatedFindingsT&& value) { m_relatedFindingsHasBeenSet = true; m_relatedFindings.emplace_back(std::forward<RelatedFindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The severity of a finding.</p>
     */
    inline const FindingProviderSeverity& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = FindingProviderSeverity>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = FindingProviderSeverity>
    FindingProviderFields& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more finding types in the format of
     * <code>namespace/category/classifier</code> that classify a finding.</p> <p>Valid
     * namespace values are: Software and Configuration Checks | TTPs | Effects |
     * Unusual Behaviors | Sensitive Data Identifications</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    FindingProviderFields& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    FindingProviderFields& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}
  private:

    int m_confidence{0};
    bool m_confidenceHasBeenSet = false;

    int m_criticality{0};
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
