﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
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
  class GetBlockResult
  {
  public:
    AWS_QLDB_API GetBlockResult();
    AWS_QLDB_API GetBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API GetBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The block data object in Amazon Ion format.</p>
     */
    inline const ValueHolder& GetBlock() const{ return m_block; }
    inline void SetBlock(const ValueHolder& value) { m_block = value; }
    inline void SetBlock(ValueHolder&& value) { m_block = std::move(value); }
    inline GetBlockResult& WithBlock(const ValueHolder& value) { SetBlock(value); return *this;}
    inline GetBlockResult& WithBlock(ValueHolder&& value) { SetBlock(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proof object in Amazon Ion format returned by a <code>GetBlock</code>
     * request. A proof contains the list of hash values required to recalculate the
     * specified digest using a Merkle tree, starting with the specified block.</p>
     */
    inline const ValueHolder& GetProof() const{ return m_proof; }
    inline void SetProof(const ValueHolder& value) { m_proof = value; }
    inline void SetProof(ValueHolder&& value) { m_proof = std::move(value); }
    inline GetBlockResult& WithProof(const ValueHolder& value) { SetProof(value); return *this;}
    inline GetBlockResult& WithProof(ValueHolder&& value) { SetProof(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBlockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBlockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBlockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ValueHolder m_block;

    ValueHolder m_proof;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
