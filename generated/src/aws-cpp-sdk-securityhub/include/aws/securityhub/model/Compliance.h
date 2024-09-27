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
    AWS_SECURITYHUB_API Compliance();
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
    inline const ComplianceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComplianceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComplianceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Compliance& WithStatus(const ComplianceStatus& value) { SetStatus(value); return *this;}
    inline Compliance& WithStatus(ComplianceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically provides the industry or regulatory framework requirements that are
     * related to a control. The check for that control is aligned with these
     * requirements.</p> <p>Array Members: Maximum number of 32 items.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedRequirements() const{ return m_relatedRequirements; }
    inline bool RelatedRequirementsHasBeenSet() const { return m_relatedRequirementsHasBeenSet; }
    inline void SetRelatedRequirements(const Aws::Vector<Aws::String>& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = value; }
    inline void SetRelatedRequirements(Aws::Vector<Aws::String>&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements = std::move(value); }
    inline Compliance& WithRelatedRequirements(const Aws::Vector<Aws::String>& value) { SetRelatedRequirements(value); return *this;}
    inline Compliance& WithRelatedRequirements(Aws::Vector<Aws::String>&& value) { SetRelatedRequirements(std::move(value)); return *this;}
    inline Compliance& AddRelatedRequirements(const Aws::String& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }
    inline Compliance& AddRelatedRequirements(Aws::String&& value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(std::move(value)); return *this; }
    inline Compliance& AddRelatedRequirements(const char* value) { m_relatedRequirementsHasBeenSet = true; m_relatedRequirements.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Typically used to provide a list of reasons for the value of
     * <code>Status</code>.</p>
     */
    inline const Aws::Vector<StatusReason>& GetStatusReasons() const{ return m_statusReasons; }
    inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
    inline void SetStatusReasons(const Aws::Vector<StatusReason>& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = value; }
    inline void SetStatusReasons(Aws::Vector<StatusReason>&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::move(value); }
    inline Compliance& WithStatusReasons(const Aws::Vector<StatusReason>& value) { SetStatusReasons(value); return *this;}
    inline Compliance& WithStatusReasons(Aws::Vector<StatusReason>&& value) { SetStatusReasons(std::move(value)); return *this;}
    inline Compliance& AddStatusReasons(const StatusReason& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.push_back(value); return *this; }
    inline Compliance& AddStatusReasons(StatusReason&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Typically provides the unique identifier of a control across standards. For
     * Security Hub controls, this field consists of an Amazon Web Services service and
     * a unique number, such as <code>APIGateway.5</code>. </p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }
    inline Compliance& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}
    inline Compliance& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}
    inline Compliance& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically provides an array of enabled security standards in which a security
     * control is currently enabled. </p>
     */
    inline const Aws::Vector<AssociatedStandard>& GetAssociatedStandards() const{ return m_associatedStandards; }
    inline bool AssociatedStandardsHasBeenSet() const { return m_associatedStandardsHasBeenSet; }
    inline void SetAssociatedStandards(const Aws::Vector<AssociatedStandard>& value) { m_associatedStandardsHasBeenSet = true; m_associatedStandards = value; }
    inline void SetAssociatedStandards(Aws::Vector<AssociatedStandard>&& value) { m_associatedStandardsHasBeenSet = true; m_associatedStandards = std::move(value); }
    inline Compliance& WithAssociatedStandards(const Aws::Vector<AssociatedStandard>& value) { SetAssociatedStandards(value); return *this;}
    inline Compliance& WithAssociatedStandards(Aws::Vector<AssociatedStandard>&& value) { SetAssociatedStandards(std::move(value)); return *this;}
    inline Compliance& AddAssociatedStandards(const AssociatedStandard& value) { m_associatedStandardsHasBeenSet = true; m_associatedStandards.push_back(value); return *this; }
    inline Compliance& AddAssociatedStandards(AssociatedStandard&& value) { m_associatedStandardsHasBeenSet = true; m_associatedStandards.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Typically an object that includes security control parameter names and
     * values. </p>
     */
    inline const Aws::Vector<SecurityControlParameter>& GetSecurityControlParameters() const{ return m_securityControlParameters; }
    inline bool SecurityControlParametersHasBeenSet() const { return m_securityControlParametersHasBeenSet; }
    inline void SetSecurityControlParameters(const Aws::Vector<SecurityControlParameter>& value) { m_securityControlParametersHasBeenSet = true; m_securityControlParameters = value; }
    inline void SetSecurityControlParameters(Aws::Vector<SecurityControlParameter>&& value) { m_securityControlParametersHasBeenSet = true; m_securityControlParameters = std::move(value); }
    inline Compliance& WithSecurityControlParameters(const Aws::Vector<SecurityControlParameter>& value) { SetSecurityControlParameters(value); return *this;}
    inline Compliance& WithSecurityControlParameters(Aws::Vector<SecurityControlParameter>&& value) { SetSecurityControlParameters(std::move(value)); return *this;}
    inline Compliance& AddSecurityControlParameters(const SecurityControlParameter& value) { m_securityControlParametersHasBeenSet = true; m_securityControlParameters.push_back(value); return *this; }
    inline Compliance& AddSecurityControlParameters(SecurityControlParameter&& value) { m_securityControlParametersHasBeenSet = true; m_securityControlParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ComplianceStatus m_status;
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
