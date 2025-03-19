/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/model/FindingHistoryUpdateSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/FindingHistoryUpdate.h>
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
   * <p> A list of events that changed the specified finding during the specified
   * time period. Each record represents a single finding change event.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingHistoryRecord">AWS
   * API Reference</a></p>
   */
  class FindingHistoryRecord
  {
  public:
    AWS_SECURITYHUB_API FindingHistoryRecord() = default;
    AWS_SECURITYHUB_API FindingHistoryRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingHistoryRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AwsSecurityFindingIdentifier& GetFindingIdentifier() const { return m_findingIdentifier; }
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }
    template<typename FindingIdentifierT = AwsSecurityFindingIdentifier>
    void SetFindingIdentifier(FindingIdentifierT&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::forward<FindingIdentifierT>(value); }
    template<typename FindingIdentifierT = AwsSecurityFindingIdentifier>
    FindingHistoryRecord& WithFindingIdentifier(FindingIdentifierT&& value) { SetFindingIdentifier(std::forward<FindingIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A timestamp that indicates when Security Hub processed the updated finding
     * record.</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    FindingHistoryRecord& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies whether the event marks the creation of a new finding. A value of
     * <code>True</code> means that the finding is newly created. A value of
     * <code>False</code> means that the finding isn’t newly created. </p>
     */
    inline bool GetFindingCreated() const { return m_findingCreated; }
    inline bool FindingCreatedHasBeenSet() const { return m_findingCreatedHasBeenSet; }
    inline void SetFindingCreated(bool value) { m_findingCreatedHasBeenSet = true; m_findingCreated = value; }
    inline FindingHistoryRecord& WithFindingCreated(bool value) { SetFindingCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Services service or third-party partner integration may
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline const FindingHistoryUpdateSource& GetUpdateSource() const { return m_updateSource; }
    inline bool UpdateSourceHasBeenSet() const { return m_updateSourceHasBeenSet; }
    template<typename UpdateSourceT = FindingHistoryUpdateSource>
    void SetUpdateSource(UpdateSourceT&& value) { m_updateSourceHasBeenSet = true; m_updateSource = std::forward<UpdateSourceT>(value); }
    template<typename UpdateSourceT = FindingHistoryUpdateSource>
    FindingHistoryRecord& WithUpdateSource(UpdateSourceT&& value) { SetUpdateSource(std::forward<UpdateSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline const Aws::Vector<FindingHistoryUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<FindingHistoryUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<FindingHistoryUpdate>>
    FindingHistoryRecord& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = FindingHistoryUpdate>
    FindingHistoryRecord& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    FindingHistoryRecord& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    AwsSecurityFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    bool m_findingCreated{false};
    bool m_findingCreatedHasBeenSet = false;

    FindingHistoryUpdateSource m_updateSource;
    bool m_updateSourceHasBeenSet = false;

    Aws::Vector<FindingHistoryUpdate> m_updates;
    bool m_updatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
