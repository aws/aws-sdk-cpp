/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{
  class CreateAPIKeyResult
  {
  public:
    AWS_WAFV2_API CreateAPIKeyResult() = default;
    AWS_WAFV2_API CreateAPIKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CreateAPIKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline const Aws::String& GetAPIKey() const { return m_aPIKey; }
    template<typename APIKeyT = Aws::String>
    void SetAPIKey(APIKeyT&& value) { m_aPIKeyHasBeenSet = true; m_aPIKey = std::forward<APIKeyT>(value); }
    template<typename APIKeyT = Aws::String>
    CreateAPIKeyResult& WithAPIKey(APIKeyT&& value) { SetAPIKey(std::forward<APIKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAPIKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aPIKey;
    bool m_aPIKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
