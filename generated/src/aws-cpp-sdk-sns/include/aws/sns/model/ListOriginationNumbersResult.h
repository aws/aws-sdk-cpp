/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/sns/model/PhoneNumberInformation.h>
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
  class ListOriginationNumbersResult
  {
  public:
    AWS_SNS_API ListOriginationNumbersResult() = default;
    AWS_SNS_API ListOriginationNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListOriginationNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListOriginationNumbers</code> operation if additional pages of records are
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOriginationNumbersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the calling account's verified and pending origination numbers.</p>
     */
    inline const Aws::Vector<PhoneNumberInformation>& GetPhoneNumbers() const { return m_phoneNumbers; }
    template<typename PhoneNumbersT = Aws::Vector<PhoneNumberInformation>>
    void SetPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers = std::forward<PhoneNumbersT>(value); }
    template<typename PhoneNumbersT = Aws::Vector<PhoneNumberInformation>>
    ListOriginationNumbersResult& WithPhoneNumbers(PhoneNumbersT&& value) { SetPhoneNumbers(std::forward<PhoneNumbersT>(value)); return *this;}
    template<typename PhoneNumbersT = PhoneNumberInformation>
    ListOriginationNumbersResult& AddPhoneNumbers(PhoneNumbersT&& value) { m_phoneNumbersHasBeenSet = true; m_phoneNumbers.emplace_back(std::forward<PhoneNumbersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListOriginationNumbersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PhoneNumberInformation> m_phoneNumbers;
    bool m_phoneNumbersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
