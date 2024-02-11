/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
  class GetDecryptedAPIKeyResult
  {
  public:
    AWS_WAFV2_API GetDecryptedAPIKeyResult();
    AWS_WAFV2_API GetDecryptedAPIKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetDecryptedAPIKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const{ return m_tokenDomains; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline void SetTokenDomains(const Aws::Vector<Aws::String>& value) { m_tokenDomains = value; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline void SetTokenDomains(Aws::Vector<Aws::String>&& value) { m_tokenDomains = std::move(value); }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline GetDecryptedAPIKeyResult& WithTokenDomains(const Aws::Vector<Aws::String>& value) { SetTokenDomains(value); return *this;}

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline GetDecryptedAPIKeyResult& WithTokenDomains(Aws::Vector<Aws::String>&& value) { SetTokenDomains(std::move(value)); return *this;}

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline GetDecryptedAPIKeyResult& AddTokenDomains(const Aws::String& value) { m_tokenDomains.push_back(value); return *this; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline GetDecryptedAPIKeyResult& AddTokenDomains(Aws::String&& value) { m_tokenDomains.push_back(std::move(value)); return *this; }

    /**
     * <p>The token domains that are defined in this API key. </p>
     */
    inline GetDecryptedAPIKeyResult& AddTokenDomains(const char* value) { m_tokenDomains.push_back(value); return *this; }


    /**
     * <p>The date and time that the key was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline GetDecryptedAPIKeyResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the key was created. </p>
     */
    inline GetDecryptedAPIKeyResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDecryptedAPIKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDecryptedAPIKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDecryptedAPIKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_tokenDomains;

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
