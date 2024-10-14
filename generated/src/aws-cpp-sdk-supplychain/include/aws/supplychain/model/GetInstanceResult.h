/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/Instance.h>
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
namespace SupplyChain
{
namespace Model
{
  /**
   * <p>The response parameters for GetInstance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetInstanceResponse">AWS
   * API Reference</a></p>
   */
  class GetInstanceResult
  {
  public:
    AWS_SUPPLYCHAIN_API GetInstanceResult();
    AWS_SUPPLYCHAIN_API GetInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPLYCHAIN_API GetInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The instance resource data details.</p>
     */
    inline const Instance& GetInstance() const{ return m_instance; }
    inline void SetInstance(const Instance& value) { m_instance = value; }
    inline void SetInstance(Instance&& value) { m_instance = std::move(value); }
    inline GetInstanceResult& WithInstance(const Instance& value) { SetInstance(value); return *this;}
    inline GetInstanceResult& WithInstance(Instance&& value) { SetInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Instance m_instance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
