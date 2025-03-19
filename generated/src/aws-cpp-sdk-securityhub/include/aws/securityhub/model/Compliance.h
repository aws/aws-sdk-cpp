/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ComplianceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/StatusReason.h>
#include <aws/securityhub/model/AssociatedStandard.h>
#include <aws/securityhub/model/SecurityControlParameter.h>
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
   * <p>This object typically provides details about a control finding, such as
   * applicable standards and the status of control checks. While finding providers
   * can add custom content in <code>Compliance</code> object fields, they are
   * typically used to review details of Security Hub control findings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Compliance">AWS
   * API Reference</a></p>
   */
  class Compliance
  {
  public:
    AWS_SECURITYHUB_API Compliance() = default;
    AWS_SECURITYHUB_API Compliance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Compliance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Typically summarizes the result of a control check.</p> <p>For Security Hub
     * controls, valid values for <code>Status</code> are as follows.</p> <ul> <li>
     * <ul> <li> <p> <code>PASSED</code> - Standards check passed for all evaluated
     * resources.</p> </li> <li> <p> <code>WARNING</code> - Some information is missing
     * or this check is not supported for your configuration.</p> </li> <li> <p>
     * <code>FAILED</code> - Standards check failed for at least one evaluated
     * resource.</p> </li> <li> <p> <code>NOT_AVAILABLE</code> - Check could not be
     * performed due to a service outage, API error, or because the result of the
     * Config evaluation was <code>NOT_APPLICABLE</code>. If the Config evaluation
     * result was <code>NOT_APPLICABLE</code> for a Security Hub control, Security Hub
     * automatically archives the finding after 3 days.</p> </li> </ul> </li> </ul>
     */
    inline ComplianceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComplianceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Compliance& WithStatus(ComplianceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically provides the industry or regulatory framework requirements that are
     * related to a control. The check for that control is aligned with these
     * requirements.</p> <p>Array Members: Maximum number of 32 items.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const { return m_relatedRequirements; }
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }
    template<typename RelatedRequirementsT = Aws::Vector<Aws::String>>
    void SetRelatedRequirements(RelatedRequirementsT&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::forward<RelatedRequirementsT>(value); }
    template<typename RelatedRequirementsT = Aws::Vector<Aws::String>>
    Compliance& WithRelatedRequirements(RelatedRequirementsT&& value) { SetRelatedRequirements(std::forward<RelatedRequirementsT>(value)); return *this;}
    template<typename RelatedRequirementsT = Aws::String>
    Compliance& AddRelatedRequirements(RelatedRequirementsT&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.emplace_back(std::forward<RelatedRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Typically used to provide a list of reasons for the value of
     * <code>Status</code>.</p>
     */
    inline const Aws::Vector<StatusReason>& GetStatusReasons() const { return m_statusReasons; }
    inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
    template<typename StatusReasonsT = Aws::Vector<StatusReason>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<StatusReason>>
    Compliance& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    template<typename StatusReasonsT = StatusReason>
    Compliance& AddStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Typically provides the unique identifier of a control across standards. For
     * Security Hub controls, this field consists of an Amazon Web Services service and
     * a unique number, such as <code>APIGateway.5</code>. </p>
     */
    inline const Aws::String& GetSecurityControlId() const { return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    template<typename SecurityControlIdT = Aws::String>
    void SetSecurityControlId(SecurityControlIdT&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::forward<SecurityControlIdT>(value); }
    template<typename SecurityControlIdT = Aws::String>
    Compliance& WithSecurityControlId(SecurityControlIdT&& value) { SetSecurityControlId(std::forward<SecurityControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically provides an array of enabled security standards in which a security
     * control is currently enabled. </p>
     */
    inline const Aws::Vector<AssociatedStandard>& GetAssociatedStandards() const { return m_associatedStandards; }
    inline bool AssociatedStandardsHasBeenSet() const { return m_associatedStandardsHasBeenSet; }
    template<typename AssociatedStandardsT = Aws::Vector<AssociatedStandard>>
    void SetAssociatedStandards(AssociatedStandardsT&& value) { m_associatedStandardsHasBeenSet = true; m_associatedStandards = std::forward<AssociatedStandardsT>(value); }
    template<typename AssociatedStandardsT = Aws::Vector<AssociatedStandard>>
    Compliance& WithAssociatedStandards(AssociatedStandardsT&& value) { SetAssociatedStandards(std::forward<AssociatedStandardsT>(value)); return *this;}
    template<typename AssociatedStandardsT = AssociatedStandard>
    Compliance& AddAssociatedStandards(AssociatedStandardsT&& value) { m_associatedStandardsHasBeenSet = true; m_associatedStandards.emplace_back(std::forward<AssociatedStandardsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Typically an object that includes security control parameter names and
     * values. </p>
     */
    inline const Aws::Vector<SecurityControlParameter>& GetSecurityControlParameters() const { return m_securityControlParameters; }
    inline bool SecurityControlParametersHasBeenSet() const { return m_securityControlParametersHasBeenSet; }
    template<typename SecurityControlParametersT = Aws::Vector<SecurityControlParameter>>
    void SetSecurityControlParameters(SecurityControlParametersT&& value) { m_securityControlParametersHasBeenSet = true; m_securityControlParameters = std::forward<SecurityControlParametersT>(value); }
    template<typename SecurityControlParametersT = Aws::Vector<SecurityControlParameter>>
    Compliance& WithSecurityControlParameters(SecurityControlParametersT&& value) { SetSecurityControlParameters(std::forward<SecurityControlParametersT>(value)); return *this;}
    template<typename SecurityControlParametersT = SecurityControlParameter>
    Compliance& AddSecurityControlParameters(SecurityControlParametersT&& value) { m_securityControlParametersHasBeenSet = true; m_securityControlParameters.emplace_back(std::forward<SecurityControlParametersT>(value)); return *this; }
    ///@}
  private:

    ComplianceStatus m_status{ComplianceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedRequirements;
    bool m_relatedRequirementsHasBeenSet = false;

    Aws::Vector<StatusReason> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    Aws::Vector<AssociatedStandard> m_associatedStandards;
    bool m_associatedStandardsHasBeenSet = false;

    Aws::Vector<SecurityControlParameter> m_securityControlParameters;
    bool m_securityControlParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
