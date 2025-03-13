/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/UpgradeStep.h>
#include <aws/opensearch/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Represents a single step of an upgrade or upgrade eligibility check
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeStepItem">AWS
   * API Reference</a></p>
   */
  class UpgradeStepItem
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpgradeStepItem() = default;
    AWS_OPENSEARCHSERVICE_API UpgradeStepItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API UpgradeStepItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> One of three steps that an upgrade or upgrade eligibility check goes
     * through: </p> <ul> <li> <p>PreUpgradeCheck</p> </li> <li> <p>Snapshot</p> </li>
     * <li> <p>Upgrade</p> </li> </ul>
     */
    inline UpgradeStep GetUpgradeStep() const { return m_upgradeStep; }
    inline bool UpgradeStepHasBeenSet() const { return m_upgradeStepHasBeenSet; }
    inline void SetUpgradeStep(UpgradeStep value) { m_upgradeStepHasBeenSet = true; m_upgradeStep = value; }
    inline UpgradeStepItem& WithUpgradeStep(UpgradeStep value) { SetUpgradeStep(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: </p> <ul> <li> <p>In Progress</p> </li> <li> <p>Succeeded</p> </li> <li>
     * <p>Succeeded with Issues</p> </li> <li> <p>Failed</p> </li> </ul>
     */
    inline UpgradeStatus GetUpgradeStepStatus() const { return m_upgradeStepStatus; }
    inline bool UpgradeStepStatusHasBeenSet() const { return m_upgradeStepStatusHasBeenSet; }
    inline void SetUpgradeStepStatus(UpgradeStatus value) { m_upgradeStepStatusHasBeenSet = true; m_upgradeStepStatus = value; }
    inline UpgradeStepItem& WithUpgradeStepStatus(UpgradeStatus value) { SetUpgradeStepStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings containing detailed information about the errors
     * encountered in a particular step.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIssues() const { return m_issues; }
    inline bool IssuesHasBeenSet() const { return m_issuesHasBeenSet; }
    template<typename IssuesT = Aws::Vector<Aws::String>>
    void SetIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues = std::forward<IssuesT>(value); }
    template<typename IssuesT = Aws::Vector<Aws::String>>
    UpgradeStepItem& WithIssues(IssuesT&& value) { SetIssues(std::forward<IssuesT>(value)); return *this;}
    template<typename IssuesT = Aws::String>
    UpgradeStepItem& AddIssues(IssuesT&& value) { m_issuesHasBeenSet = true; m_issues.emplace_back(std::forward<IssuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The floating point value representing the progress percentage of a particular
     * step.</p>
     */
    inline double GetProgressPercent() const { return m_progressPercent; }
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline UpgradeStepItem& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}
    ///@}
  private:

    UpgradeStep m_upgradeStep{UpgradeStep::NOT_SET};
    bool m_upgradeStepHasBeenSet = false;

    UpgradeStatus m_upgradeStepStatus{UpgradeStatus::NOT_SET};
    bool m_upgradeStepStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_issues;
    bool m_issuesHasBeenSet = false;

    double m_progressPercent{0.0};
    bool m_progressPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
