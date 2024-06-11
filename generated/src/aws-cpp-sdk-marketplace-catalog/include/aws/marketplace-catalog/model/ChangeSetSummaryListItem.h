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
    AWS_MARKETPLACECATALOG_API ChangeSetSummaryListItem();
    AWS_MARKETPLACECATALOG_API ChangeSetSummaryListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API ChangeSetSummaryListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for a change set.</p>
     */
    inline const Aws::String& GetChangeSetId() const{ return m_changeSetId; }
    inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
    inline void SetChangeSetId(const Aws::String& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = value; }
    inline void SetChangeSetId(Aws::String&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::move(value); }
    inline void SetChangeSetId(const char* value) { m_changeSetIdHasBeenSet = true; m_changeSetId.assign(value); }
    inline ChangeSetSummaryListItem& WithChangeSetId(const Aws::String& value) { SetChangeSetId(value); return *this;}
    inline ChangeSetSummaryListItem& WithChangeSetId(Aws::String&& value) { SetChangeSetId(std::move(value)); return *this;}
    inline ChangeSetSummaryListItem& WithChangeSetId(const char* value) { SetChangeSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline const Aws::String& GetChangeSetArn() const{ return m_changeSetArn; }
    inline bool ChangeSetArnHasBeenSet() const { return m_changeSetArnHasBeenSet; }
    inline void SetChangeSetArn(const Aws::String& value) { m_changeSetArnHasBeenSet = true; m_changeSetArn = value; }
    inline void SetChangeSetArn(Aws::String&& value) { m_changeSetArnHasBeenSet = true; m_changeSetArn = std::move(value); }
    inline void SetChangeSetArn(const char* value) { m_changeSetArnHasBeenSet = true; m_changeSetArn.assign(value); }
    inline ChangeSetSummaryListItem& WithChangeSetArn(const Aws::String& value) { SetChangeSetArn(value); return *this;}
    inline ChangeSetSummaryListItem& WithChangeSetArn(Aws::String&& value) { SetChangeSetArn(std::move(value)); return *this;}
    inline ChangeSetSummaryListItem& WithChangeSetArn(const char* value) { SetChangeSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The non-unique name for the change set.</p>
     */
    inline const Aws::String& GetChangeSetName() const{ return m_changeSetName; }
    inline bool ChangeSetNameHasBeenSet() const { return m_changeSetNameHasBeenSet; }
    inline void SetChangeSetName(const Aws::String& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = value; }
    inline void SetChangeSetName(Aws::String&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::move(value); }
    inline void SetChangeSetName(const char* value) { m_changeSetNameHasBeenSet = true; m_changeSetName.assign(value); }
    inline ChangeSetSummaryListItem& WithChangeSetName(const Aws::String& value) { SetChangeSetName(value); return *this;}
    inline ChangeSetSummaryListItem& WithChangeSetName(Aws::String&& value) { SetChangeSetName(std::move(value)); return *this;}
    inline ChangeSetSummaryListItem& WithChangeSetName(const char* value) { SetChangeSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in ISO 8601 format (2018-02-27T13:45:22Z), when the change set was
     * started.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline ChangeSetSummaryListItem& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline ChangeSetSummaryListItem& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline ChangeSetSummaryListItem& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in ISO 8601 format (2018-02-27T13:45:22Z), when the change set was
     * finished.</p>
     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline ChangeSetSummaryListItem& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline ChangeSetSummaryListItem& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline ChangeSetSummaryListItem& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the change set.</p>
     */
    inline const ChangeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChangeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChangeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChangeSetSummaryListItem& WithStatus(const ChangeStatus& value) { SetStatus(value); return *this;}
    inline ChangeSetSummaryListItem& WithStatus(ChangeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This object is a list of entity IDs (string) that are a part of a change set.
     * The entity ID list is a maximum of 20 entities. It must contain at least one
     * entity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntityIdList() const{ return m_entityIdList; }
    inline bool EntityIdListHasBeenSet() const { return m_entityIdListHasBeenSet; }
    inline void SetEntityIdList(const Aws::Vector<Aws::String>& value) { m_entityIdListHasBeenSet = true; m_entityIdList = value; }
    inline void SetEntityIdList(Aws::Vector<Aws::String>&& value) { m_entityIdListHasBeenSet = true; m_entityIdList = std::move(value); }
    inline ChangeSetSummaryListItem& WithEntityIdList(const Aws::Vector<Aws::String>& value) { SetEntityIdList(value); return *this;}
    inline ChangeSetSummaryListItem& WithEntityIdList(Aws::Vector<Aws::String>&& value) { SetEntityIdList(std::move(value)); return *this;}
    inline ChangeSetSummaryListItem& AddEntityIdList(const Aws::String& value) { m_entityIdListHasBeenSet = true; m_entityIdList.push_back(value); return *this; }
    inline ChangeSetSummaryListItem& AddEntityIdList(Aws::String&& value) { m_entityIdListHasBeenSet = true; m_entityIdList.push_back(std::move(value)); return *this; }
    inline ChangeSetSummaryListItem& AddEntityIdList(const char* value) { m_entityIdListHasBeenSet = true; m_entityIdList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code> of <code>DescribeChangeSet</code>), or
     * <code>SERVER_FAULT</code>, which means that there is a problem in the system,
     * and you should retry your request.</p>
     */
    inline const FailureCode& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const FailureCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(FailureCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline ChangeSetSummaryListItem& WithFailureCode(const FailureCode& value) { SetFailureCode(value); return *this;}
    inline ChangeSetSummaryListItem& WithFailureCode(FailureCode&& value) { SetFailureCode(std::move(value)); return *this;}
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

    ChangeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_entityIdList;
    bool m_entityIdListHasBeenSet = false;

    FailureCode m_failureCode;
    bool m_failureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
