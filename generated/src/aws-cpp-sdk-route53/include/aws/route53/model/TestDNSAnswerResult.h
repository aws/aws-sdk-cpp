/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response to a <code>TestDNSAnswer</code>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TestDNSAnswerResponse">AWS
   * API Reference</a></p>
   */
  class TestDNSAnswerResult
  {
  public:
    AWS_ROUTE53_API TestDNSAnswerResult();
    AWS_ROUTE53_API TestDNSAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API TestDNSAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline const Aws::String& GetNameserver() const{ return m_nameserver; }
    inline void SetNameserver(const Aws::String& value) { m_nameserver = value; }
    inline void SetNameserver(Aws::String&& value) { m_nameserver = std::move(value); }
    inline void SetNameserver(const char* value) { m_nameserver.assign(value); }
    inline TestDNSAnswerResult& WithNameserver(const Aws::String& value) { SetNameserver(value); return *this;}
    inline TestDNSAnswerResult& WithNameserver(Aws::String&& value) { SetNameserver(std::move(value)); return *this;}
    inline TestDNSAnswerResult& WithNameserver(const char* value) { SetNameserver(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline const Aws::String& GetRecordName() const{ return m_recordName; }
    inline void SetRecordName(const Aws::String& value) { m_recordName = value; }
    inline void SetRecordName(Aws::String&& value) { m_recordName = std::move(value); }
    inline void SetRecordName(const char* value) { m_recordName.assign(value); }
    inline TestDNSAnswerResult& WithRecordName(const Aws::String& value) { SetRecordName(value); return *this;}
    inline TestDNSAnswerResult& WithRecordName(Aws::String&& value) { SetRecordName(std::move(value)); return *this;}
    inline TestDNSAnswerResult& WithRecordName(const char* value) { SetRecordName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline const RRType& GetRecordType() const{ return m_recordType; }
    inline void SetRecordType(const RRType& value) { m_recordType = value; }
    inline void SetRecordType(RRType&& value) { m_recordType = std::move(value); }
    inline TestDNSAnswerResult& WithRecordType(const RRType& value) { SetRecordType(value); return *this;}
    inline TestDNSAnswerResult& WithRecordType(RRType&& value) { SetRecordType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordData() const{ return m_recordData; }
    inline void SetRecordData(const Aws::Vector<Aws::String>& value) { m_recordData = value; }
    inline void SetRecordData(Aws::Vector<Aws::String>&& value) { m_recordData = std::move(value); }
    inline TestDNSAnswerResult& WithRecordData(const Aws::Vector<Aws::String>& value) { SetRecordData(value); return *this;}
    inline TestDNSAnswerResult& WithRecordData(Aws::Vector<Aws::String>&& value) { SetRecordData(std::move(value)); return *this;}
    inline TestDNSAnswerResult& AddRecordData(const Aws::String& value) { m_recordData.push_back(value); return *this; }
    inline TestDNSAnswerResult& AddRecordData(Aws::String&& value) { m_recordData.push_back(std::move(value)); return *this; }
    inline TestDNSAnswerResult& AddRecordData(const char* value) { m_recordData.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A code that indicates whether the request is valid or not. The most common
     * response code is <code>NOERROR</code>, meaning that the request is valid. If the
     * response is not valid, Amazon Route 53 returns a response code that describes
     * the error. For a list of possible response codes, see <a
     * href="http://www.iana.org/assignments/dns-parameters/dns-parameters.xhtml#dns-parameters-6">DNS
     * RCODES</a> on the IANA website. </p>
     */
    inline const Aws::String& GetResponseCode() const{ return m_responseCode; }
    inline void SetResponseCode(const Aws::String& value) { m_responseCode = value; }
    inline void SetResponseCode(Aws::String&& value) { m_responseCode = std::move(value); }
    inline void SetResponseCode(const char* value) { m_responseCode.assign(value); }
    inline TestDNSAnswerResult& WithResponseCode(const Aws::String& value) { SetResponseCode(value); return *this;}
    inline TestDNSAnswerResult& WithResponseCode(Aws::String&& value) { SetResponseCode(std::move(value)); return *this;}
    inline TestDNSAnswerResult& WithResponseCode(const char* value) { SetResponseCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline void SetProtocol(const Aws::String& value) { m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocol.assign(value); }
    inline TestDNSAnswerResult& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline TestDNSAnswerResult& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline TestDNSAnswerResult& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline TestDNSAnswerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TestDNSAnswerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TestDNSAnswerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nameserver;

    Aws::String m_recordName;

    RRType m_recordType;

    Aws::Vector<Aws::String> m_recordData;

    Aws::String m_responseCode;

    Aws::String m_protocol;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
