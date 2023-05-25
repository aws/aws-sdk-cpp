/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
  class UpdateTrustStoreResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateTrustStoreResult();
    AWS_WORKSPACESWEB_API UpdateTrustStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateTrustStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArn = value; }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArn = std::move(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArn.assign(value); }

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline UpdateTrustStoreResult& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline UpdateTrustStoreResult& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trust store.</p>
     */
    inline UpdateTrustStoreResult& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTrustStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTrustStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTrustStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_trustStoreArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
