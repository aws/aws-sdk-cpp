/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>

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
  class GetMailboxDetailsResult
  {
  public:
    AWS_WORKMAIL_API GetMailboxDetailsResult();
    AWS_WORKMAIL_API GetMailboxDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMailboxDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline int GetMailboxQuota() const{ return m_mailboxQuota; }

    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline void SetMailboxQuota(int value) { m_mailboxQuota = value; }

    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline GetMailboxDetailsResult& WithMailboxQuota(int value) { SetMailboxQuota(value); return *this;}


    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline double GetMailboxSize() const{ return m_mailboxSize; }

    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline void SetMailboxSize(double value) { m_mailboxSize = value; }

    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline GetMailboxDetailsResult& WithMailboxSize(double value) { SetMailboxSize(value); return *this;}

  private:

    int m_mailboxQuota;

    double m_mailboxSize;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
