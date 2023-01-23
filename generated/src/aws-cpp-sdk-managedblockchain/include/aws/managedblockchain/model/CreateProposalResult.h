/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
  class CreateProposalResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateProposalResult();
    AWS_MANAGEDBLOCKCHAIN_API CreateProposalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API CreateProposalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline void SetProposalId(const Aws::String& value) { m_proposalId = value; }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline void SetProposalId(Aws::String&& value) { m_proposalId = std::move(value); }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline void SetProposalId(const char* value) { m_proposalId.assign(value); }

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline CreateProposalResult& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline CreateProposalResult& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the proposal.</p>
     */
    inline CreateProposalResult& WithProposalId(const char* value) { SetProposalId(value); return *this;}

  private:

    Aws::String m_proposalId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
