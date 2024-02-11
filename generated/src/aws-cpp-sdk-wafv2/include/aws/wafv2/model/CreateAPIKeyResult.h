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
    AWS_WAFV2_API CreateAPIKeyResult();
    AWS_WAFV2_API CreateAPIKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CreateAPIKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline const Aws::String& GetAPIKey() const{ return m_aPIKey; }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline void SetAPIKey(const Aws::String& value) { m_aPIKey = value; }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline void SetAPIKey(Aws::String&& value) { m_aPIKey = std::move(value); }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline void SetAPIKey(const char* value) { m_aPIKey.assign(value); }

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline CreateAPIKeyResult& WithAPIKey(const Aws::String& value) { SetAPIKey(value); return *this;}

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline CreateAPIKeyResult& WithAPIKey(Aws::String&& value) { SetAPIKey(std::move(value)); return *this;}

    /**
     * <p>The generated, encrypted API key. You can copy this for use in your
     * JavaScript CAPTCHA integration. </p>
     */
    inline CreateAPIKeyResult& WithAPIKey(const char* value) { SetAPIKey(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAPIKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAPIKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAPIKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_aPIKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
