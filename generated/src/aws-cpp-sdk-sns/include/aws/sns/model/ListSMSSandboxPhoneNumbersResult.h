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
    AWS_SNS_API ListSMSSandboxPhoneNumbersResult();
    AWS_SNS_API ListSMSSandboxPhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API ListSMSSandboxPhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline const Aws::Vector<SMSSandboxPhoneNumber>& GetPhoneNumbers() const{ return m_phoneNumbers; }

    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline void SetPhoneNumbers(const Aws::Vector<SMSSandboxPhoneNumber>& value) { m_phoneNumbers = value; }

    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline void SetPhoneNumbers(Aws::Vector<SMSSandboxPhoneNumber>&& value) { m_phoneNumbers = std::move(value); }

    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& WithPhoneNumbers(const Aws::Vector<SMSSandboxPhoneNumber>& value) { SetPhoneNumbers(value); return *this;}

    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& WithPhoneNumbers(Aws::Vector<SMSSandboxPhoneNumber>&& value) { SetPhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& AddPhoneNumbers(const SMSSandboxPhoneNumber& value) { m_phoneNumbers.push_back(value); return *this; }

    /**
     * <p>A list of the calling account's pending and verified phone numbers.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& AddPhoneNumbers(SMSSandboxPhoneNumber&& value) { m_phoneNumbers.push_back(std::move(value)); return *this; }


    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A <code>NextToken</code> string is returned when you call the
     * <code>ListSMSSandboxPhoneNumbersInput</code> operation if additional pages of
     * records are available.</p>
     */
    inline ListSMSSandboxPhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListSMSSandboxPhoneNumbersResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListSMSSandboxPhoneNumbersResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SMSSandboxPhoneNumber> m_phoneNumbers;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
