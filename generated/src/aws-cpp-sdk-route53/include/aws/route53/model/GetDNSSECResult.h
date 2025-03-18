/**
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
    AWS_ROUTE53_API GetDNSSECResult() = default;
    AWS_ROUTE53_API GetDNSSECResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetDNSSECResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A string representing the status of DNSSEC.</p>
     */
    inline const DNSSECStatus& GetStatus() const { return m_status; }
    template<typename StatusT = DNSSECStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = DNSSECStatus>
    GetDNSSECResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-signing keys (KSKs) in your account.</p>
     */
    inline const Aws::Vector<KeySigningKey>& GetKeySigningKeys() const { return m_keySigningKeys; }
    template<typename KeySigningKeysT = Aws::Vector<KeySigningKey>>
    void SetKeySigningKeys(KeySigningKeysT&& value) { m_keySigningKeysHasBeenSet = true; m_keySigningKeys = std::forward<KeySigningKeysT>(value); }
    template<typename KeySigningKeysT = Aws::Vector<KeySigningKey>>
    GetDNSSECResult& WithKeySigningKeys(KeySigningKeysT&& value) { SetKeySigningKeys(std::forward<KeySigningKeysT>(value)); return *this;}
    template<typename KeySigningKeysT = KeySigningKey>
    GetDNSSECResult& AddKeySigningKeys(KeySigningKeysT&& value) { m_keySigningKeysHasBeenSet = true; m_keySigningKeys.emplace_back(std::forward<KeySigningKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDNSSECResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DNSSECStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<KeySigningKey> m_keySigningKeys;
    bool m_keySigningKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
