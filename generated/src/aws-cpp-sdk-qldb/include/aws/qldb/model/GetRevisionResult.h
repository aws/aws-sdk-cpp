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
  class GetRevisionResult
  {
  public:
    AWS_QLDB_API GetRevisionResult() = default;
    AWS_QLDB_API GetRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QLDB_API GetRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The proof object in Amazon Ion format returned by a <code>GetRevision</code>
     * request. A proof contains the list of hash values that are required to
     * recalculate the specified digest using a Merkle tree, starting with the
     * specified document revision.</p>
     */
    inline const ValueHolder& GetProof() const { return m_proof; }
    template<typename ProofT = ValueHolder>
    void SetProof(ProofT&& value) { m_proofHasBeenSet = true; m_proof = std::forward<ProofT>(value); }
    template<typename ProofT = ValueHolder>
    GetRevisionResult& WithProof(ProofT&& value) { SetProof(std::forward<ProofT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document revision data object in Amazon Ion format.</p>
     */
    inline const ValueHolder& GetRevision() const { return m_revision; }
    template<typename RevisionT = ValueHolder>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = ValueHolder>
    GetRevisionResult& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRevisionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ValueHolder m_proof;
    bool m_proofHasBeenSet = false;

    ValueHolder m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
