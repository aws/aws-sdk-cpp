/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetFindingHistoryRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetFindingHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingHistory"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const AwsSecurityFindingIdentifier& GetFindingIdentifier() const { return m_findingIdentifier; }
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }
    template<typename FindingIdentifierT = AwsSecurityFindingIdentifier>
    void SetFindingIdentifier(FindingIdentifierT&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::forward<FindingIdentifierT>(value); }
    template<typename FindingIdentifierT = AwsSecurityFindingIdentifier>
    GetFindingHistoryRequest& WithFindingIdentifier(FindingIdentifierT&& value) { SetFindingIdentifier(std::forward<FindingIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates the start time of the requested finding
     * history.</p> <p>If you provide values for both <code>StartTime</code> and
     * <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the <code>CreatedAt</code> timestamp of the finding to the time at
     * which the API is called. In all of these scenarios, the response is limited to
     * 100 results.</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetFindingHistoryRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An ISO 8601-formatted timestamp that indicates the end time of the requested
     * finding history.</p> <p>If you provide values for both <code>StartTime</code>
     * and <code>EndTime</code>, Security Hub returns finding history for the specified
     * time period. If you provide a value for <code>StartTime</code> but not for
     * <code>EndTime</code>, Security Hub returns finding history from the
     * <code>StartTime</code> to the time at which the API is called. If you provide a
     * value for <code>EndTime</code> but not for <code>StartTime</code>, Security Hub
     * returns finding history from the <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_AwsSecurityFindingFilters.html#securityhub-Type-AwsSecurityFindingFilters-CreatedAt">CreatedAt</a>
     * timestamp of the finding to the <code>EndTime</code>. If you provide neither
     * <code>StartTime</code> nor <code>EndTime</code>, Security Hub returns finding
     * history from the <code>CreatedAt</code> timestamp of the finding to the time at
     * which the API is called. In all of these scenarios, the response is limited to
     * 100 results.</p> <p>For more information about the validation and formatting of
     * timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetFindingHistoryRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A token for pagination purposes. Provide <code>NULL</code> as the initial
     * value. In subsequent requests, provide the token included in the response to get
     * up to an additional 100 results of finding history. If you don’t provide
     * <code>NextToken</code>, Security Hub returns up to 100 results of finding
     * history for each request. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFindingHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to be returned. If you don’t provide it,
     * Security Hub returns up to 100 results of finding history. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetFindingHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    AwsSecurityFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
