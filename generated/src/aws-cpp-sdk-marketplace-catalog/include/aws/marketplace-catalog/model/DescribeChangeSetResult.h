/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/Intent.h>
#include <aws/marketplace-catalog/model/ChangeStatus.h>
#include <aws/marketplace-catalog/model/FailureCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/ChangeSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MarketplaceCatalog
{
namespace Model
{
  class DescribeChangeSetResult
  {
  public:
    AWS_MARKETPLACECATALOG_API DescribeChangeSetResult() = default;
    AWS_MARKETPLACECATALOG_API DescribeChangeSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACECATALOG_API DescribeChangeSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Required. The unique identifier for the change set referenced in this
     * request.</p>
     */
    inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
    template<typename ChangeSetIdT = Aws::String>
    void SetChangeSetId(ChangeSetIdT&& value) { m_changeSetIdHasBeenSet = true; m_changeSetId = std::forward<ChangeSetIdT>(value); }
    template<typename ChangeSetIdT = Aws::String>
    DescribeChangeSetResult& WithChangeSetId(ChangeSetIdT&& value) { SetChangeSetId(std::forward<ChangeSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN associated with the unique identifier for the change set referenced
     * in this request.</p>
     */
    inline const Aws::String& GetChangeSetArn() const { return m_changeSetArn; }
    template<typename ChangeSetArnT = Aws::String>
    void SetChangeSetArn(ChangeSetArnT&& value) { m_changeSetArnHasBeenSet = true; m_changeSetArn = std::forward<ChangeSetArnT>(value); }
    template<typename ChangeSetArnT = Aws::String>
    DescribeChangeSetResult& WithChangeSetArn(ChangeSetArnT&& value) { SetChangeSetArn(std::forward<ChangeSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional name provided in the <code>StartChangeSet</code> request. If you
     * do not provide a name, one is set by default.</p>
     */
    inline const Aws::String& GetChangeSetName() const { return m_changeSetName; }
    template<typename ChangeSetNameT = Aws::String>
    void SetChangeSetName(ChangeSetNameT&& value) { m_changeSetNameHasBeenSet = true; m_changeSetName = std::forward<ChangeSetNameT>(value); }
    template<typename ChangeSetNameT = Aws::String>
    DescribeChangeSetResult& WithChangeSetName(ChangeSetNameT&& value) { SetChangeSetName(std::forward<ChangeSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional intent provided in the <code>StartChangeSet</code> request. If
     * you do not provide an intent, <code>APPLY</code> is set by default.</p>
     */
    inline Intent GetIntent() const { return m_intent; }
    inline void SetIntent(Intent value) { m_intentHasBeenSet = true; m_intent = value; }
    inline DescribeChangeSetResult& WithIntent(Intent value) { SetIntent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * started. </p>
     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    DescribeChangeSetResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format (2018-02-27T13:45:22Z), the request
     * transitioned to a terminal state. The change cannot transition to a different
     * state. Null if the request is not in a terminal state. </p>
     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    DescribeChangeSetResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the change request.</p>
     */
    inline ChangeStatus GetStatus() const { return m_status; }
    inline void SetStatus(ChangeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeChangeSetResult& WithStatus(ChangeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned if the change set is in <code>FAILED</code> status. Can be either
     * <code>CLIENT_ERROR</code>, which means that there are issues with the request
     * (see the <code>ErrorDetailList</code>), or <code>SERVER_FAULT</code>, which
     * means that there is a problem in the system, and you should retry your
     * request.</p>
     */
    inline FailureCode GetFailureCode() const { return m_failureCode; }
    inline void SetFailureCode(FailureCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline DescribeChangeSetResult& WithFailureCode(FailureCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned if there is a failure on the change set, but that failure is not
     * related to any of the changes in the request.</p>
     */
    inline const Aws::String& GetFailureDescription() const { return m_failureDescription; }
    template<typename FailureDescriptionT = Aws::String>
    void SetFailureDescription(FailureDescriptionT&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::forward<FailureDescriptionT>(value); }
    template<typename FailureDescriptionT = Aws::String>
    DescribeChangeSetResult& WithFailureDescription(FailureDescriptionT&& value) { SetFailureDescription(std::forward<FailureDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ChangeSummary</code> objects.</p>
     */
    inline const Aws::Vector<ChangeSummary>& GetChangeSet() const { return m_changeSet; }
    template<typename ChangeSetT = Aws::Vector<ChangeSummary>>
    void SetChangeSet(ChangeSetT&& value) { m_changeSetHasBeenSet = true; m_changeSet = std::forward<ChangeSetT>(value); }
    template<typename ChangeSetT = Aws::Vector<ChangeSummary>>
    DescribeChangeSetResult& WithChangeSet(ChangeSetT&& value) { SetChangeSet(std::forward<ChangeSetT>(value)); return *this;}
    template<typename ChangeSetT = ChangeSummary>
    DescribeChangeSetResult& AddChangeSet(ChangeSetT&& value) { m_changeSetHasBeenSet = true; m_changeSet.emplace_back(std::forward<ChangeSetT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeChangeSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_changeSetId;
    bool m_changeSetIdHasBeenSet = false;

    Aws::String m_changeSetArn;
    bool m_changeSetArnHasBeenSet = false;

    Aws::String m_changeSetName;
    bool m_changeSetNameHasBeenSet = false;

    Intent m_intent{Intent::NOT_SET};
    bool m_intentHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    ChangeStatus m_status{ChangeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    FailureCode m_failureCode{FailureCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;

    Aws::Vector<ChangeSummary> m_changeSet;
    bool m_changeSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
