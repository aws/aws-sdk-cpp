/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/ChangeStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/FailureCode.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>A summary of a change set returned in a list of change sets when the
   * <code>ListChangeSets</code> action is called.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ChangeSetSummaryListItem">AWS
   * API Reference</a></p>
   */
  class ChangeSetSummaryListItem
  {
  public:
    AWS_MARKETPLACECATALOG_API ChangeSetSummaryListItem() = default;
    AWS_MARKETPLACECATALOG_API ChangeSetSummaryListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ChangeSetSummaryListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    ChangeSetSummaryListItem& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline const Aws::String& GetChangeSetArn() const { return m_changeSetArn; }
    inline bool ChangeSetArnHasBeenSet() const { return m_changeSetArnHasBeenSet; }
    template<typename ChangeSetArnT = Aws::String>
    void SetChangeSetArn(ChangeSetArnT&& value) { m_changeSetArnHasBeenSet = true; m_changeSetArn = std::forward<ChangeSetArnT>(value); }
    template<typename ChangeSetArnT = Aws::String>
    ChangeSetSummaryListItem& WithChangeSetArn(ChangeSetArnT&& value) { SetChangeSetArn(std::forward<ChangeSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-unique name for the change set.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    ChangeSetSummaryListItem& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in ISO 8601 format (2018-02-27T13:45:22Z), when the change set was
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    ChangeSetSummaryListItem& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in ISO 8601 format (2018-02-27T13:45:22Z), when the change set was
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    ChangeSetSummaryListItem& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the change set.</p>
     */
    inline ChangeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ChangeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ChangeSetSummaryListItem& WithStatus(ChangeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object is a list of entity IDs (string) that are a part of a change set.
     * The entity ID list is a maximum of 20 entities. It must contain at least one
     * entity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityIdList() const { return m_entityIdList; }
    inline bool EntityIdListHasBeenSet() const { return m_entityIdListHasBeenSet; }
    template<typename EntityIdListT = Aws::Vector<Aws::String>>
    void SetEntityIdList(EntityIdListT&& value) { m_entityIdListHasBeenSet = true; m_entityIdList = std::forward<EntityIdListT>(value); }
    template<typename EntityIdListT = Aws::Vector<Aws::String>>
    ChangeSetSummaryListItem& WithEntityIdList(EntityIdListT&& value) { SetEntityIdList(std::forward<EntityIdListT>(value)); return *this;}
    template<typename EntityIdListT = Aws::String>
    ChangeSetSummaryListItem& AddEntityIdList(EntityIdListT&& value) { m_entityIdListHasBeenSet = true; m_entityIdList.emplace_back(std::forward<EntityIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code> of <code>DescribeChangeSet</code>), or
     * <code>SERVER_FAULT</code>, which means that there is a problem in the system,
     * and you should retry your request.</p>
     */
    inline FailureCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(FailureCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline ChangeSetSummaryListItem& WithFailureCode(FailureCode value) { SetFailureCode(value); return *this;}
    ///@}
  private:

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_changeSetArn;
    bool m_changeSetArnHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    ChangeStatus m_status{ChangeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityIdList;
    bool m_entityIdListHasBeenSet = false;

    FailureCode m_failureCode{FailureCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
