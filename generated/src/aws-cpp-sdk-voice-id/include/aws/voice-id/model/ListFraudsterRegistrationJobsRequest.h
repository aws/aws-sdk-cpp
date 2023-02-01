/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FraudsterRegistrationJobStatus.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class ListFraudsterRegistrationJobsRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API ListFraudsterRegistrationJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFraudsterRegistrationJobs"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain containing the fraudster registration Jobs.</p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Provides the status of your fraudster registration job.</p>
     */
    inline const FraudsterRegistrationJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Provides the status of your fraudster registration job.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>Provides the status of your fraudster registration job.</p>
     */
    inline void SetJobStatus(const FraudsterRegistrationJobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>Provides the status of your fraudster registration job.</p>
     */
    inline void SetJobStatus(FraudsterRegistrationJobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>Provides the status of your fraudster registration job.</p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithJobStatus(const FraudsterRegistrationJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Provides the status of your fraudster registration job.</p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithJobStatus(FraudsterRegistrationJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>NextToken</code> to obtain further pages of results. The default is 100;
     * the maximum allowed page size is also 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>NextToken</code> to obtain further pages of results. The default is 100;
     * the maximum allowed page size is also 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>NextToken</code> to obtain further pages of results. The default is 100;
     * the maximum allowed page size is also 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>NextToken</code> to obtain further pages of results. The default is 100;
     * the maximum allowed page size is also 100. </p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudsterRegistrationJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    FraudsterRegistrationJobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
