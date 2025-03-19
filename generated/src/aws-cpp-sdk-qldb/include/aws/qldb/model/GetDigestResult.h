/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/qldb/model/ValueHolder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QLDB
{
namespace Model
{
  class GetDigestResult
  {
  public:
    AWS_QLDB_API GetDigestResult() = default;
    AWS_QLDB_API GetDigestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API GetDigestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The 256-bit hash value representing the digest returned by a
     * <code>GetDigest</code> request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetDigest() const { return m_digest; }
    template<typename DigestT = Aws::Utils::ByteBuffer>
    void SetDigest(DigestT&& value) { m_digestHasBeenSet = true; m_digest = std::forward<DigestT>(value); }
    template<typename DigestT = Aws::Utils::ByteBuffer>
    GetDigestResult& WithDigest(DigestT&& value) { SetDigest(std::forward<DigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest block location covered by the digest that you requested. An
     * address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p>
     */
    inline const ValueHolder& GetDigestTipAddress() const { return m_digestTipAddress; }
    template<typename DigestTipAddressT = ValueHolder>
    void SetDigestTipAddress(DigestTipAddressT&& value) { m_digestTipAddressHasBeenSet = true; m_digestTipAddress = std::forward<DigestTipAddressT>(value); }
    template<typename DigestTipAddressT = ValueHolder>
    GetDigestResult& WithDigestTipAddress(DigestTipAddressT&& value) { SetDigestTipAddress(std::forward<DigestTipAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDigestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_digest{};
    bool m_digestHasBeenSet = false;

    ValueHolder m_digestTipAddress;
    bool m_digestTipAddressHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
