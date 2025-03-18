/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetMailboxDetailsResult
  {
  public:
    AWS_WORKMAIL_API GetMailboxDetailsResult() = default;
    AWS_WORKMAIL_API GetMailboxDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMailboxDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maximum allowed mailbox size, in MB, for the specified user.</p>
     */
    inline int GetMailboxQuota() const { return m_mailboxQuota; }
    inline void SetMailboxQuota(int value) { m_mailboxQuotaHasBeenSet = true; m_mailboxQuota = value; }
    inline GetMailboxDetailsResult& WithMailboxQuota(int value) { SetMailboxQuota(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current mailbox size, in MB, for the specified user.</p>
     */
    inline double GetMailboxSize() const { return m_mailboxSize; }
    inline void SetMailboxSize(double value) { m_mailboxSizeHasBeenSet = true; m_mailboxSize = value; }
    inline GetMailboxDetailsResult& WithMailboxSize(double value) { SetMailboxSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMailboxDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_mailboxQuota{0};
    bool m_mailboxQuotaHasBeenSet = false;

    double m_mailboxSize{0.0};
    bool m_mailboxSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
