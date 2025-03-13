/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore/MediaStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore/model/CorsRule.h>
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
namespace MediaStore
{
namespace Model
{
  class GetCorsPolicyResult
  {
  public:
    AWS_MEDIASTORE_API GetCorsPolicyResult() = default;
    AWS_MEDIASTORE_API GetCorsPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTORE_API GetCorsPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The CORS policy assigned to the container.</p>
     */
    inline const Aws::Vector<CorsRule>& GetCorsPolicy() const { return m_corsPolicy; }
    template<typename CorsPolicyT = Aws::Vector<CorsRule>>
    void SetCorsPolicy(CorsPolicyT&& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy = std::forward<CorsPolicyT>(value); }
    template<typename CorsPolicyT = Aws::Vector<CorsRule>>
    GetCorsPolicyResult& WithCorsPolicy(CorsPolicyT&& value) { SetCorsPolicy(std::forward<CorsPolicyT>(value)); return *this;}
    template<typename CorsPolicyT = CorsRule>
    GetCorsPolicyResult& AddCorsPolicy(CorsPolicyT&& value) { m_corsPolicyHasBeenSet = true; m_corsPolicy.emplace_back(std::forward<CorsPolicyT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCorsPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CorsRule> m_corsPolicy;
    bool m_corsPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaStore
} // namespace Aws
