/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/SMSSandboxPhoneNumber.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  class ListSMSSandboxPhoneNumbersResult
  {
  public:
    AWS_SNS_API ListSMSSandboxPhoneNumbersResult() = default;
    AWS_SNS_API ListSMSSandboxPhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListSMSSandboxPhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline const Aws::Vector<SMSSandboxPhoneNumber>& GetPhoneNumbers() const { return m_phoneNumbers; }
    template<typename PhoneNumbersT = Aws::Vector<SMSSandboxPhoneNumber>>
    void SetPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::forward<PhoneNumbersT>(value); }
    template<typename PhoneNumbersT = Aws::Vector<SMSSandboxPhoneNumber>>
    ListSMSSandboxPhoneNumbersResult& WithPhoneNumbers(PhoneNumbersT&& value) { SetPhoneNumbers(std::forward<PhoneNumbersT>(value)); return *this;}
    template<typename PhoneNumbersT = SMSSandboxPhoneNumber>
    ListSMSSandboxPhoneNumbersResult& AddPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.emplace_back(std::forward<PhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSMSSandboxPhoneNumbersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListSMSSandboxPhoneNumbersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SMSSandboxPhoneNumber> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
