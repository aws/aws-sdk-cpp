/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/DNSSECStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>A string repesenting the status of DNSSEC.</p>
     */
    inline const DNSSECStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A string repesenting the status of DNSSEC.</p>
     */
    inline void SetStatus(const DNSSECStatus& value) { m_status = value; }

    /**
     * <p>A string repesenting the status of DNSSEC.</p>
     */
    inline void SetStatus(DNSSECStatus&& value) { m_status = std::move(value); }

    /**
     * <p>A string repesenting the status of DNSSEC.</p>
     */
    inline GetDNSSECResult& WithStatus(const DNSSECStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A string repesenting the status of DNSSEC.</p>
     */
    inline GetDNSSECResult& WithStatus(DNSSECStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline const Aws::Vector<KeySigningKey>& GetKeySigningKeys() const{ return m_keySigningKeys; }

    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline void SetKeySigningKeys(const Aws::Vector<KeySigningKey>& value) { m_keySigningKeys = value; }

    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline void SetKeySigningKeys(Aws::Vector<KeySigningKey>&& value) { m_keySigningKeys = std::move(value); }

    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline GetDNSSECResult& WithKeySigningKeys(const Aws::Vector<KeySigningKey>& value) { SetKeySigningKeys(value); return *this;}

    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline GetDNSSECResult& WithKeySigningKeys(Aws::Vector<KeySigningKey>&& value) { SetKeySigningKeys(std::move(value)); return *this;}

    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline GetDNSSECResult& AddKeySigningKeys(const KeySigningKey& value) { m_keySigningKeys.push_back(value); return *this; }

    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline GetDNSSECResult& AddKeySigningKeys(KeySigningKey&& value) { m_keySigningKeys.push_back(std::move(value)); return *this; }

  private:

    DNSSECStatus m_status;

    Aws::Vector<KeySigningKey> m_keySigningKeys;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
