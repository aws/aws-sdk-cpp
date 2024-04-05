/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedWithTokenOutputItem.h>
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
namespace VerifiedPermissions
{
namespace Model
{
  class BatchIsAuthorizedWithTokenResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenResult();
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the principal in the ID or access token.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The identifier of the principal in the ID or access token.</p>
     */
    inline void SetPrincipal(const EntityIdentifier& value) { m_principal = value; }

    /**
     * <p>The identifier of the principal in the ID or access token.</p>
     */
    inline void SetPrincipal(EntityIdentifier&& value) { m_principal = std::move(value); }

    /**
     * <p>The identifier of the principal in the ID or access token.</p>
     */
    inline BatchIsAuthorizedWithTokenResult& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The identifier of the principal in the ID or access token.</p>
     */
    inline BatchIsAuthorizedWithTokenResult& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedWithTokenOutputItem>& GetResults() const{ return m_results; }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline void SetResults(const Aws::Vector<BatchIsAuthorizedWithTokenOutputItem>& value) { m_results = value; }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline void SetResults(Aws::Vector<BatchIsAuthorizedWithTokenOutputItem>&& value) { m_results = std::move(value); }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedWithTokenResult& WithResults(const Aws::Vector<BatchIsAuthorizedWithTokenOutputItem>& value) { SetResults(value); return *this;}

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedWithTokenResult& WithResults(Aws::Vector<BatchIsAuthorizedWithTokenOutputItem>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedWithTokenResult& AddResults(const BatchIsAuthorizedWithTokenOutputItem& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedWithTokenResult& AddResults(BatchIsAuthorizedWithTokenOutputItem&& value) { m_results.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchIsAuthorizedWithTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchIsAuthorizedWithTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchIsAuthorizedWithTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EntityIdentifier m_principal;

    Aws::Vector<BatchIsAuthorizedWithTokenOutputItem> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
