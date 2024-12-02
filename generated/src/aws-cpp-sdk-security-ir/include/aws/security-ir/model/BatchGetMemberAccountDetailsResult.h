/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/model/GetMembershipAccountDetailItem.h>
#include <aws/security-ir/model/GetMembershipAccountDetailError.h>
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
namespace SecurityIR
{
namespace Model
{
  class BatchGetMemberAccountDetailsResult
  {
  public:
    AWS_SECURITYIR_API BatchGetMemberAccountDetailsResult();
    AWS_SECURITYIR_API BatchGetMemberAccountDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYIR_API BatchGetMemberAccountDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response element providing responses for requests to
     * GetMembershipAccountDetails.</p>
     */
    inline const Aws::Vector<GetMembershipAccountDetailItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<GetMembershipAccountDetailItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<GetMembershipAccountDetailItem>&& value) { m_items = std::move(value); }
    inline BatchGetMemberAccountDetailsResult& WithItems(const Aws::Vector<GetMembershipAccountDetailItem>& value) { SetItems(value); return *this;}
    inline BatchGetMemberAccountDetailsResult& WithItems(Aws::Vector<GetMembershipAccountDetailItem>&& value) { SetItems(std::move(value)); return *this;}
    inline BatchGetMemberAccountDetailsResult& AddItems(const GetMembershipAccountDetailItem& value) { m_items.push_back(value); return *this; }
    inline BatchGetMemberAccountDetailsResult& AddItems(GetMembershipAccountDetailItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response element providing errors messages for requests to
     * GetMembershipAccountDetails.</p>
     */
    inline const Aws::Vector<GetMembershipAccountDetailError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<GetMembershipAccountDetailError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<GetMembershipAccountDetailError>&& value) { m_errors = std::move(value); }
    inline BatchGetMemberAccountDetailsResult& WithErrors(const Aws::Vector<GetMembershipAccountDetailError>& value) { SetErrors(value); return *this;}
    inline BatchGetMemberAccountDetailsResult& WithErrors(Aws::Vector<GetMembershipAccountDetailError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetMemberAccountDetailsResult& AddErrors(const GetMembershipAccountDetailError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetMemberAccountDetailsResult& AddErrors(GetMembershipAccountDetailError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetMemberAccountDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetMemberAccountDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetMemberAccountDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GetMembershipAccountDetailItem> m_items;

    Aws::Vector<GetMembershipAccountDetailError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
