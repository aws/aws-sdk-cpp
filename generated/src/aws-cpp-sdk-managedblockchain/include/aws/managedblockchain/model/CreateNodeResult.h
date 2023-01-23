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
  class CreateNodeResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateNodeResult();
    AWS_MANAGEDBLOCKCHAIN_API CreateNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API CreateNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeId = value; }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeId = std::move(value); }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeId.assign(value); }

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline CreateNodeResult& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline CreateNodeResult& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the node.</p>
     */
    inline CreateNodeResult& WithNodeId(const char* value) { SetNodeId(value); return *this;}

  private:

    Aws::String m_nodeId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
