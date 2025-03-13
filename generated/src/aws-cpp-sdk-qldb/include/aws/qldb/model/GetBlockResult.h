/**
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
    AWS_QLDB_API GetBlockResult() = default;
    AWS_QLDB_API GetBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API GetBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The block data object in Amazon Ion format.</p>
     */
    inline const ValueHolder& GetBlock() const { return m_block; }
    template<typename BlockT = ValueHolder>
    void SetBlock(BlockT&& value) { m_blockHasBeenSet = true; m_block = std::forward<BlockT>(value); }
    template<typename BlockT = ValueHolder>
    GetBlockResult& WithBlock(BlockT&& value) { SetBlock(std::forward<BlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proof object in Amazon Ion format returned by a <code>GetBlock</code>
     * request. A proof contains the list of hash values required to recalculate the
     * specified digest using a Merkle tree, starting with the specified block.</p>
     */
    inline const ValueHolder& GetProof() const { return m_proof; }
    template<typename ProofT = ValueHolder>
    void SetProof(ProofT&& value) { m_proofHasBeenSet = true; m_proof = std::forward<ProofT>(value); }
    template<typename ProofT = ValueHolder>
    GetBlockResult& WithProof(ProofT&& value) { SetProof(std::forward<ProofT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBlockResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ValueHolder m_block;
    bool m_blockHasBeenSet = false;

    ValueHolder m_proof;
    bool m_proofHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
