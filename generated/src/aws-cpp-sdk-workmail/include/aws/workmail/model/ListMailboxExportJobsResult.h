/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MailboxExportJob.h>
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
namespace WorkMail
{
namespace Model
{
  class ListMailboxExportJobsResult
  {
  public:
    AWS_WORKMAIL_API ListMailboxExportJobsResult();
    AWS_WORKMAIL_API ListMailboxExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListMailboxExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The mailbox export job details.</p>
     */
    inline const Aws::Vector<MailboxExportJob>& GetJobs() const{ return m_jobs; }

    /**
     * <p>The mailbox export job details.</p>
     */
    inline void SetJobs(const Aws::Vector<MailboxExportJob>& value) { m_jobs = value; }

    /**
     * <p>The mailbox export job details.</p>
     */
    inline void SetJobs(Aws::Vector<MailboxExportJob>&& value) { m_jobs = std::move(value); }

    /**
     * <p>The mailbox export job details.</p>
     */
    inline ListMailboxExportJobsResult& WithJobs(const Aws::Vector<MailboxExportJob>& value) { SetJobs(value); return *this;}

    /**
     * <p>The mailbox export job details.</p>
     */
    inline ListMailboxExportJobsResult& WithJobs(Aws::Vector<MailboxExportJob>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>The mailbox export job details.</p>
     */
    inline ListMailboxExportJobsResult& AddJobs(const MailboxExportJob& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>The mailbox export job details.</p>
     */
    inline ListMailboxExportJobsResult& AddJobs(MailboxExportJob&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListMailboxExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListMailboxExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListMailboxExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MailboxExportJob> m_jobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
