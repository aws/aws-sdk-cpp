/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyOutputItem.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyErrorItem.h>
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
  class BatchGetPolicyResult
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyResult();
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VERIFIEDPERMISSIONS_API BatchGetPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the policies listed in the request that were successfully
     * returned. These results are returned in the order they were requested.</p>
     */
    inline const Aws::Vector<BatchGetPolicyOutputItem>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<BatchGetPolicyOutputItem>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<BatchGetPolicyOutputItem>&& value) { m_results = std::move(value); }
    inline BatchGetPolicyResult& WithResults(const Aws::Vector<BatchGetPolicyOutputItem>& value) { SetResults(value); return *this;}
    inline BatchGetPolicyResult& WithResults(Aws::Vector<BatchGetPolicyOutputItem>&& value) { SetResults(std::move(value)); return *this;}
    inline BatchGetPolicyResult& AddResults(const BatchGetPolicyOutputItem& value) { m_results.push_back(value); return *this; }
    inline BatchGetPolicyResult& AddResults(BatchGetPolicyOutputItem&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the policies from the request that resulted in an error.
     * These results are returned in the order they were requested.</p>
     */
    inline const Aws::Vector<BatchGetPolicyErrorItem>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetPolicyErrorItem>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetPolicyErrorItem>&& value) { m_errors = std::move(value); }
    inline BatchGetPolicyResult& WithErrors(const Aws::Vector<BatchGetPolicyErrorItem>& value) { SetErrors(value); return *this;}
    inline BatchGetPolicyResult& WithErrors(Aws::Vector<BatchGetPolicyErrorItem>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetPolicyResult& AddErrors(const BatchGetPolicyErrorItem& value) { m_errors.push_back(value); return *this; }
    inline BatchGetPolicyResult& AddErrors(BatchGetPolicyErrorItem&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetPolicyOutputItem> m_results;

    Aws::Vector<BatchGetPolicyErrorItem> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
