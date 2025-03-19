/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>
#include <aws/route53/model/KeySigningKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateKeySigningKeyResult
  {
  public:
    AWS_ROUTE53_API CreateKeySigningKeyResult() = default;
    AWS_ROUTE53_API CreateKeySigningKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateKeySigningKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ChangeInfo& GetChangeInfo() const { return m_changeInfo; }
    template<typename ChangeInfoT = ChangeInfo>
    void SetChangeInfo(ChangeInfoT&& value) { m_changeInfoHasBeenSet = true; m_changeInfo = std::forward<ChangeInfoT>(value); }
    template<typename ChangeInfoT = ChangeInfo>
    CreateKeySigningKeyResult& WithChangeInfo(ChangeInfoT&& value) { SetChangeInfo(std::forward<ChangeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-signing key (KSK) that the request creates.</p>
     */
    inline const KeySigningKey& GetKeySigningKey() const { return m_keySigningKey; }
    template<typename KeySigningKeyT = KeySigningKey>
    void SetKeySigningKey(KeySigningKeyT&& value) { m_keySigningKeyHasBeenSet = true; m_keySigningKey = std::forward<KeySigningKeyT>(value); }
    template<typename KeySigningKeyT = KeySigningKey>
    CreateKeySigningKeyResult& WithKeySigningKey(KeySigningKeyT&& value) { SetKeySigningKey(std::forward<KeySigningKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique URL representing the new key-signing key (KSK).</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateKeySigningKeyResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateKeySigningKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChangeInfo m_changeInfo;
    bool m_changeInfoHasBeenSet = false;

    KeySigningKey m_keySigningKey;
    bool m_keySigningKeyHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
