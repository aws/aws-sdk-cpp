/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/TrustStore.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetTrustStoreResult
  {
  public:
    AWS_WORKSPACESWEB_API GetTrustStoreResult();
    AWS_WORKSPACESWEB_API GetTrustStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetTrustStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The trust store.</p>
     */
    inline const TrustStore& GetTrustStore() const{ return m_trustStore; }

    /**
     * <p>The trust store.</p>
     */
    inline void SetTrustStore(const TrustStore& value) { m_trustStore = value; }

    /**
     * <p>The trust store.</p>
     */
    inline void SetTrustStore(TrustStore&& value) { m_trustStore = std::move(value); }

    /**
     * <p>The trust store.</p>
     */
    inline GetTrustStoreResult& WithTrustStore(const TrustStore& value) { SetTrustStore(value); return *this;}

    /**
     * <p>The trust store.</p>
     */
    inline GetTrustStoreResult& WithTrustStore(TrustStore&& value) { SetTrustStore(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrustStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrustStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrustStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TrustStore m_trustStore;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
