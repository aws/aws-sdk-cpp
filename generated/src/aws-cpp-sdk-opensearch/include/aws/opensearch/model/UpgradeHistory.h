/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/opensearch/model/UpgradeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/UpgradeStepItem.h>
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
   * <p>History of the last 10 upgrades and upgrade eligibility checks for an Amazon
   * OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpgradeHistory">AWS
   * API Reference</a></p>
   */
  class UpgradeHistory
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpgradeHistory() = default;
    AWS_OPENSEARCHSERVICE_API UpgradeHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API UpgradeHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that describes the upgrade.</p>
     */
    inline const Aws::String& GetUpgradeName() const { return m_upgradeName; }
    inline bool UpgradeNameHasBeenSet() const { return m_upgradeNameHasBeenSet; }
    template<typename UpgradeNameT = Aws::String>
    void SetUpgradeName(UpgradeNameT&& value) { m_upgradeNameHasBeenSet = true; m_upgradeName = std::forward<UpgradeNameT>(value); }
    template<typename UpgradeNameT = Aws::String>
    UpgradeHistory& WithUpgradeName(UpgradeNameT&& value) { SetUpgradeName(std::forward<UpgradeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UTC timestamp at which the upgrade API call was made, in the format
     * <code>yyyy-MM-ddTHH:mm:ssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    UpgradeHistory& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the upgrade. The status can take one of the following
     * values: </p> <ul> <li> <p>In Progress</p> </li> <li> <p>Succeeded</p> </li> <li>
     * <p>Succeeded with Issues</p> </li> <li> <p>Failed</p> </li> </ul>
     */
    inline UpgradeStatus GetUpgradeStatus() const { return m_upgradeStatus; }
    inline bool UpgradeStatusHasBeenSet() const { return m_upgradeStatusHasBeenSet; }
    inline void SetUpgradeStatus(UpgradeStatus value) { m_upgradeStatusHasBeenSet = true; m_upgradeStatus = value; }
    inline UpgradeHistory& WithUpgradeStatus(UpgradeStatus value) { SetUpgradeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of each step performed as part of a specific upgrade or upgrade
     * eligibility check.</p>
     */
    inline const Aws::Vector<UpgradeStepItem>& GetStepsList() const { return m_stepsList; }
    inline bool StepsListHasBeenSet() const { return m_stepsListHasBeenSet; }
    template<typename StepsListT = Aws::Vector<UpgradeStepItem>>
    void SetStepsList(StepsListT&& value) { m_stepsListHasBeenSet = true; m_stepsList = std::forward<StepsListT>(value); }
    template<typename StepsListT = Aws::Vector<UpgradeStepItem>>
    UpgradeHistory& WithStepsList(StepsListT&& value) { SetStepsList(std::forward<StepsListT>(value)); return *this;}
    template<typename StepsListT = UpgradeStepItem>
    UpgradeHistory& AddStepsList(StepsListT&& value) { m_stepsListHasBeenSet = true; m_stepsList.emplace_back(std::forward<StepsListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_upgradeName;
    bool m_upgradeNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    UpgradeStatus m_upgradeStatus{UpgradeStatus::NOT_SET};
    bool m_upgradeStatusHasBeenSet = false;

    Aws::Vector<UpgradeStepItem> m_stepsList;
    bool m_stepsListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
