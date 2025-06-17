/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class CreateTicketV2Result
  {
  public:
    AWS_SECURITYHUB_API CreateTicketV2Result() = default;
    AWS_SECURITYHUB_API CreateTicketV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateTicketV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the ticketv2.</p>
     */
    inline const Aws::String& GetTicketId() const { return m_ticketId; }
    template<typename TicketIdT = Aws::String>
    void SetTicketId(TicketIdT&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::forward<TicketIdT>(value); }
    template<typename TicketIdT = Aws::String>
    CreateTicketV2Result& WithTicketId(TicketIdT&& value) { SetTicketId(std::forward<TicketIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The url to the created ticket.</p>
     */
    inline const Aws::String& GetTicketSrcUrl() const { return m_ticketSrcUrl; }
    template<typename TicketSrcUrlT = Aws::String>
    void SetTicketSrcUrl(TicketSrcUrlT&& value) { m_ticketSrcUrlHasBeenSet = true; m_ticketSrcUrl = std::forward<TicketSrcUrlT>(value); }
    template<typename TicketSrcUrlT = Aws::String>
    CreateTicketV2Result& WithTicketSrcUrl(TicketSrcUrlT&& value) { SetTicketSrcUrl(std::forward<TicketSrcUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTicketV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;

    Aws::String m_ticketSrcUrl;
    bool m_ticketSrcUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
