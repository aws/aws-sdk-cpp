﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/DNSSECStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/KeySigningKey.h>
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
  class GetDNSSECResult
  {
  public:
    AWS_ROUTE53_API GetDNSSECResult();
    AWS_ROUTE53_API GetDNSSECResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetDNSSECResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A string representing the status of DNSSEC.</p>
     */
    inline const DNSSECStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DNSSECStatus& value) { m_status = value; }
    inline void SetStatus(DNSSECStatus&& value) { m_status = std::move(value); }
    inline GetDNSSECResult& WithStatus(const DNSSECStatus& value) { SetStatus(value); return *this;}
    inline GetDNSSECResult& WithStatus(DNSSECStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline const Aws::Vector<KeySigningKey>& GetKeySigningKeys() const{ return m_keySigningKeys; }
    inline void SetKeySigningKeys(const Aws::Vector<KeySigningKey>& value) { m_keySigningKeys = value; }
    inline void SetKeySigningKeys(Aws::Vector<KeySigningKey>&& value) { m_keySigningKeys = std::move(value); }
    inline GetDNSSECResult& WithKeySigningKeys(const Aws::Vector<KeySigningKey>& value) { SetKeySigningKeys(value); return *this;}
    inline GetDNSSECResult& WithKeySigningKeys(Aws::Vector<KeySigningKey>&& value) { SetKeySigningKeys(std::move(value)); return *this;}
    inline GetDNSSECResult& AddKeySigningKeys(const KeySigningKey& value) { m_keySigningKeys.push_back(value); return *this; }
    inline GetDNSSECResult& AddKeySigningKeys(KeySigningKey&& value) { m_keySigningKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDNSSECResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDNSSECResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDNSSECResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DNSSECStatus m_status;

    Aws::Vector<KeySigningKey> m_keySigningKeys;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
