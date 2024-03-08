/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedOutputItem.h>
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
  class BatchIsAuthorizedResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedResult();
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline const Aws::Vector<BatchIsAuthorizedOutputItem>& GetResults() const{ return m_results; }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline void SetResults(const Aws::Vector<BatchIsAuthorizedOutputItem>& value) { m_results = value; }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline void SetResults(Aws::Vector<BatchIsAuthorizedOutputItem>&& value) { m_results = std::move(value); }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedResult& WithResults(const Aws::Vector<BatchIsAuthorizedOutputItem>& value) { SetResults(value); return *this;}

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedResult& WithResults(Aws::Vector<BatchIsAuthorizedOutputItem>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedResult& AddResults(const BatchIsAuthorizedOutputItem& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A series of <code>Allow</code> or <code>Deny</code> decisions for each
     * request, and the policies that produced them.</p>
     */
    inline BatchIsAuthorizedResult& AddResults(BatchIsAuthorizedOutputItem&& value) { m_results.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchIsAuthorizedResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchIsAuthorizedResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchIsAuthorizedResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchIsAuthorizedOutputItem> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
