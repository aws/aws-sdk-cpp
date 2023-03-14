/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/model/Node.h>
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
  class GetNodeResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API GetNodeResult();
    AWS_MANAGEDBLOCKCHAIN_API GetNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API GetNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Properties of the node configuration.</p>
     */
    inline const Node& GetNode() const{ return m_node; }

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline void SetNode(const Node& value) { m_node = value; }

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline void SetNode(Node&& value) { m_node = std::move(value); }

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline GetNodeResult& WithNode(const Node& value) { SetNode(value); return *this;}

    /**
     * <p>Properties of the node configuration.</p>
     */
    inline GetNodeResult& WithNode(Node&& value) { SetNode(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetNodeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetNodeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetNodeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Node m_node;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
