/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Proposal.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class GetProposalResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API GetProposalResult();
    AWS_MANAGEDBLOCKCHAIN_API GetProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API GetProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a proposal.</p>
     */
    inline const Proposal& GetProposal() const{ return m_proposal; }

    /**
     * <p>Information about a proposal.</p>
     */
    inline void SetProposal(const Proposal& value) { m_proposal = value; }

    /**
     * <p>Information about a proposal.</p>
     */
    inline void SetProposal(Proposal&& value) { m_proposal = std::move(value); }

    /**
     * <p>Information about a proposal.</p>
     */
    inline GetProposalResult& WithProposal(const Proposal& value) { SetProposal(value); return *this;}

    /**
     * <p>Information about a proposal.</p>
     */
    inline GetProposalResult& WithProposal(Proposal&& value) { SetProposal(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetProposalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetProposalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetProposalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Proposal m_proposal;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
