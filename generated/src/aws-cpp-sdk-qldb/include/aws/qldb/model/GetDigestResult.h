/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/qldb/model/ValueHolder.h>
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
    AWS_QLDB_API GetDigestResult();
    AWS_QLDB_API GetDigestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API GetDigestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The 256-bit hash value representing the digest returned by a
     * <code>GetDigest</code> request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetDigest() const{ return m_digest; }

    /**
     * <p>The 256-bit hash value representing the digest returned by a
     * <code>GetDigest</code> request.</p>
     */
    inline void SetDigest(const Aws::Utils::ByteBuffer& value) { m_digest = value; }

    /**
     * <p>The 256-bit hash value representing the digest returned by a
     * <code>GetDigest</code> request.</p>
     */
    inline void SetDigest(Aws::Utils::ByteBuffer&& value) { m_digest = std::move(value); }

    /**
     * <p>The 256-bit hash value representing the digest returned by a
     * <code>GetDigest</code> request.</p>
     */
    inline GetDigestResult& WithDigest(const Aws::Utils::ByteBuffer& value) { SetDigest(value); return *this;}

    /**
     * <p>The 256-bit hash value representing the digest returned by a
     * <code>GetDigest</code> request.</p>
     */
    inline GetDigestResult& WithDigest(Aws::Utils::ByteBuffer&& value) { SetDigest(std::move(value)); return *this;}


    /**
     * <p>The latest block location covered by the digest that you requested. An
     * address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p>
     */
    inline const ValueHolder& GetDigestTipAddress() const{ return m_digestTipAddress; }

    /**
     * <p>The latest block location covered by the digest that you requested. An
     * address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p>
     */
    inline void SetDigestTipAddress(const ValueHolder& value) { m_digestTipAddress = value; }

    /**
     * <p>The latest block location covered by the digest that you requested. An
     * address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p>
     */
    inline void SetDigestTipAddress(ValueHolder&& value) { m_digestTipAddress = std::move(value); }

    /**
     * <p>The latest block location covered by the digest that you requested. An
     * address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p>
     */
    inline GetDigestResult& WithDigestTipAddress(const ValueHolder& value) { SetDigestTipAddress(value); return *this;}

    /**
     * <p>The latest block location covered by the digest that you requested. An
     * address is an Amazon Ion structure that has two fields: <code>strandId</code>
     * and <code>sequenceNo</code>.</p>
     */
    inline GetDigestResult& WithDigestTipAddress(ValueHolder&& value) { SetDigestTipAddress(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_digest;

    ValueHolder m_digestTipAddress;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
