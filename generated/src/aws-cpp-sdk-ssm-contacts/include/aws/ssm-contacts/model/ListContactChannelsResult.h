/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/ContactChannel.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListContactChannelsResult
  {
  public:
    AWS_SSMCONTACTS_API ListContactChannelsResult() = default;
    AWS_SSMCONTACTS_API ListContactChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListContactChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContactChannelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contact channels related to the specified contact.</p>
     */
    inline const Aws::Vector<ContactChannel>& GetContactChannels() const { return m_contactChannels; }
    template<typename ContactChannelsT = Aws::Vector<ContactChannel>>
    void SetContactChannels(ContactChannelsT&& value) { m_contactChannelsHasBeenSet = true; m_contactChannels = std::forward<ContactChannelsT>(value); }
    template<typename ContactChannelsT = Aws::Vector<ContactChannel>>
    ListContactChannelsResult& WithContactChannels(ContactChannelsT&& value) { SetContactChannels(std::forward<ContactChannelsT>(value)); return *this;}
    template<typename ContactChannelsT = ContactChannel>
    ListContactChannelsResult& AddContactChannels(ContactChannelsT&& value) { m_contactChannelsHasBeenSet = true; m_contactChannels.emplace_back(std::forward<ContactChannelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListContactChannelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ContactChannel> m_contactChannels;
    bool m_contactChannelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
