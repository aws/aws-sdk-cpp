/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/Instance.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters for ListInstances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/ListInstancesResponse">AWS
   * API Reference</a></p>
   */
  class ListInstancesResult
  {
  public:
    AWS_SUPPLYCHAIN_API ListInstancesResult();
    AWS_SUPPLYCHAIN_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of instances resource data details.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const{ return m_instances; }
    inline void SetInstances(const Aws::Vector<Instance>& value) { m_instances = value; }
    inline void SetInstances(Aws::Vector<Instance>&& value) { m_instances = std::move(value); }
    inline ListInstancesResult& WithInstances(const Aws::Vector<Instance>& value) { SetInstances(value); return *this;}
    inline ListInstancesResult& WithInstances(Aws::Vector<Instance>&& value) { SetInstances(std::move(value)); return *this;}
    inline ListInstancesResult& AddInstances(const Instance& value) { m_instances.push_back(value); return *this; }
    inline ListInstancesResult& AddInstances(Instance&& value) { m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to fetch the next page of instances.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Instance> m_instances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
