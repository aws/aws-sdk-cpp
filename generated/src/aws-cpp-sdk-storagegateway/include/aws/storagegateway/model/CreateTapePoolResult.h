/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  class CreateTapePoolResult
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapePoolResult() = default;
    AWS_STORAGEGATEWAY_API CreateTapePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API CreateTapePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the custom tape pool.
     * Use the <a>ListTapePools</a> operation to return a list of tape pools for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetPoolARN() const { return m_poolARN; }
    template<typename PoolARNT = Aws::String>
    void SetPoolARN(PoolARNT&& value) { m_poolARNHasBeenSet = true; m_poolARN = std::forward<PoolARNT>(value); }
    template<typename PoolARNT = Aws::String>
    CreateTapePoolResult& WithPoolARN(PoolARNT&& value) { SetPoolARN(std::forward<PoolARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTapePoolResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolARN;
    bool m_poolARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
