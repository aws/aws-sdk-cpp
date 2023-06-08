/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeySummary.h>
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
namespace PaymentCryptography
{
namespace Model
{
  class ListKeysResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ListKeysResult();
    AWS_PAYMENTCRYPTOGRAPHY_API ListKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API ListKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline const Aws::Vector<KeySummary>& GetKeys() const{ return m_keys; }

    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline void SetKeys(const Aws::Vector<KeySummary>& value) { m_keys = value; }

    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline void SetKeys(Aws::Vector<KeySummary>&& value) { m_keys = std::move(value); }

    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline ListKeysResult& WithKeys(const Aws::Vector<KeySummary>& value) { SetKeys(value); return *this;}

    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline ListKeysResult& WithKeys(Aws::Vector<KeySummary>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline ListKeysResult& AddKeys(const KeySummary& value) { m_keys.push_back(value); return *this; }

    /**
     * <p>The list of keys created within the caller's Amazon Web Services account and
     * Amazon Web Services Region.</p>
     */
    inline ListKeysResult& AddKeys(KeySummary&& value) { m_keys.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline ListKeysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline ListKeysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or an empty or null value if there are
     * no more results.</p>
     */
    inline ListKeysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KeySummary> m_keys;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
