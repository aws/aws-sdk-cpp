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
    AWS_ROUTE53_API TestDNSAnswerResult() = default;
    AWS_ROUTE53_API TestDNSAnswerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API TestDNSAnswerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Route 53 name server used to respond to the request.</p>
     */
    inline const Aws::String& GetNameserver() const { return m_nameserver; }
    template<typename NameserverT = Aws::String>
    void SetNameserver(NameserverT&& value) { m_nameserverHasBeenSet = true; m_nameserver = std::forward<NameserverT>(value); }
    template<typename NameserverT = Aws::String>
    TestDNSAnswerResult& WithNameserver(NameserverT&& value) { SetNameserver(std::forward<NameserverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource record set that you submitted a request for.</p>
     */
    inline const Aws::String& GetRecordName() const { return m_recordName; }
    template<typename RecordNameT = Aws::String>
    void SetRecordName(RecordNameT&& value) { m_recordNameHasBeenSet = true; m_recordName = std::forward<RecordNameT>(value); }
    template<typename RecordNameT = Aws::String>
    TestDNSAnswerResult& WithRecordName(RecordNameT&& value) { SetRecordName(std::forward<RecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource record set that you submitted a request for.</p>
     */
    inline RRType GetRecordType() const { return m_recordType; }
    inline void SetRecordType(RRType value) { m_recordTypeHasBeenSet = true; m_recordType = value; }
    inline TestDNSAnswerResult& WithRecordType(RRType value) { SetRecordType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list that contains values that Amazon Route 53 returned for this resource
     * record set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordData() const { return m_recordData; }
    template<typename RecordDataT = Aws::Vector<Aws::String>>
    void SetRecordData(RecordDataT&& value) { m_recordDataHasBeenSet = true; m_recordData = std::forward<RecordDataT>(value); }
    template<typename RecordDataT = Aws::Vector<Aws::String>>
    TestDNSAnswerResult& WithRecordData(RecordDataT&& value) { SetRecordData(std::forward<RecordDataT>(value)); return *this;}
    template<typename RecordDataT = Aws::String>
    TestDNSAnswerResult& AddRecordData(RecordDataT&& value) { m_recordDataHasBeenSet = true; m_recordData.emplace_back(std::forward<RecordDataT>(value)); return *this; }
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
    inline const Aws::String& GetResponseCode() const { return m_responseCode; }
    template<typename ResponseCodeT = Aws::String>
    void SetResponseCode(ResponseCodeT&& value) { m_responseCodeHasBeenSet = true; m_responseCode = std::forward<ResponseCodeT>(value); }
    template<typename ResponseCodeT = Aws::String>
    TestDNSAnswerResult& WithResponseCode(ResponseCodeT&& value) { SetResponseCode(std::forward<ResponseCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that Amazon Route 53 used to respond to the request, either
     * <code>UDP</code> or <code>TCP</code>. </p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    TestDNSAnswerResult& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestDNSAnswerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nameserver;
    bool m_nameserverHasBeenSet = false;

    Aws::String m_recordName;
    bool m_recordNameHasBeenSet = false;

    RRType m_recordType{RRType::NOT_SET};
    bool m_recordTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_recordData;
    bool m_recordDataHasBeenSet = false;

    Aws::String m_responseCode;
    bool m_responseCodeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
