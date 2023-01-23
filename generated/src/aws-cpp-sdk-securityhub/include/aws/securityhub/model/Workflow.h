/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/WorkflowStatus.h>
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
   * <p>Provides information about the status of the investigation into a
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Workflow">AWS
   * API Reference</a></p>
   */
  class Workflow
  {
  public:
    AWS_SECURITYHUB_API Workflow();
    AWS_SECURITYHUB_API Workflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Workflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets the workflow status from <code>NOTIFIED</code> or <code>RESOLVED</code>
     * to <code>NEW</code> in the following cases:</p> <ul> <li> <p>
     * <code>RecordState</code> changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p> <code>ComplianceStatus</code> changes
     * from <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>SUPPRESSED</code> - Indicates that
     * you reviewed the finding and do not believe that any action is needed. The
     * finding is no longer updated.</p> </li> <li> <p> <code>RESOLVED</code> - The
     * finding was reviewed and remediated and is now considered resolved. </p> </li>
     * </ul>
     */
    inline const WorkflowStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets the workflow status from <code>NOTIFIED</code> or <code>RESOLVED</code>
     * to <code>NEW</code> in the following cases:</p> <ul> <li> <p>
     * <code>RecordState</code> changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p> <code>ComplianceStatus</code> changes
     * from <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>SUPPRESSED</code> - Indicates that
     * you reviewed the finding and do not believe that any action is needed. The
     * finding is no longer updated.</p> </li> <li> <p> <code>RESOLVED</code> - The
     * finding was reviewed and remediated and is now considered resolved. </p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets the workflow status from <code>NOTIFIED</code> or <code>RESOLVED</code>
     * to <code>NEW</code> in the following cases:</p> <ul> <li> <p>
     * <code>RecordState</code> changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p> <code>ComplianceStatus</code> changes
     * from <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>SUPPRESSED</code> - Indicates that
     * you reviewed the finding and do not believe that any action is needed. The
     * finding is no longer updated.</p> </li> <li> <p> <code>RESOLVED</code> - The
     * finding was reviewed and remediated and is now considered resolved. </p> </li>
     * </ul>
     */
    inline void SetStatus(const WorkflowStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets the workflow status from <code>NOTIFIED</code> or <code>RESOLVED</code>
     * to <code>NEW</code> in the following cases:</p> <ul> <li> <p>
     * <code>RecordState</code> changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p> <code>ComplianceStatus</code> changes
     * from <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>SUPPRESSED</code> - Indicates that
     * you reviewed the finding and do not believe that any action is needed. The
     * finding is no longer updated.</p> </li> <li> <p> <code>RESOLVED</code> - The
     * finding was reviewed and remediated and is now considered resolved. </p> </li>
     * </ul>
     */
    inline void SetStatus(WorkflowStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets the workflow status from <code>NOTIFIED</code> or <code>RESOLVED</code>
     * to <code>NEW</code> in the following cases:</p> <ul> <li> <p>
     * <code>RecordState</code> changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p> <code>ComplianceStatus</code> changes
     * from <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>SUPPRESSED</code> - Indicates that
     * you reviewed the finding and do not believe that any action is needed. The
     * finding is no longer updated.</p> </li> <li> <p> <code>RESOLVED</code> - The
     * finding was reviewed and remediated and is now considered resolved. </p> </li>
     * </ul>
     */
    inline Workflow& WithStatus(const WorkflowStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the investigation into the finding. The workflow status is
     * specific to an individual finding. It does not affect the generation of new
     * findings. For example, setting the workflow status to <code>SUPPRESSED</code> or
     * <code>RESOLVED</code> does not prevent a new finding for the same issue.</p>
     * <p>The allowed values are the following.</p> <ul> <li> <p> <code>NEW</code> -
     * The initial state of a finding, before it is reviewed.</p> <p>Security Hub also
     * resets the workflow status from <code>NOTIFIED</code> or <code>RESOLVED</code>
     * to <code>NEW</code> in the following cases:</p> <ul> <li> <p>
     * <code>RecordState</code> changes from <code>ARCHIVED</code> to
     * <code>ACTIVE</code>.</p> </li> <li> <p> <code>ComplianceStatus</code> changes
     * from <code>PASSED</code> to either <code>WARNING</code>, <code>FAILED</code>, or
     * <code>NOT_AVAILABLE</code>.</p> </li> </ul> </li> <li> <p> <code>NOTIFIED</code>
     * - Indicates that you notified the resource owner about the security issue. Used
     * when the initial reviewer is not the resource owner, and needs intervention from
     * the resource owner.</p> </li> <li> <p> <code>SUPPRESSED</code> - Indicates that
     * you reviewed the finding and do not believe that any action is needed. The
     * finding is no longer updated.</p> </li> <li> <p> <code>RESOLVED</code> - The
     * finding was reviewed and remediated and is now considered resolved. </p> </li>
     * </ul>
     */
    inline Workflow& WithStatus(WorkflowStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    WorkflowStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
