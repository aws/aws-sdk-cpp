/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/CreateAccountStatus.h>
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
namespace Organizations
{
namespace Model
{
  class ListCreateAccountStatusResult
  {
  public:
    AWS_ORGANIZATIONS_API ListCreateAccountStatusResult();
    AWS_ORGANIZATIONS_API ListCreateAccountStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListCreateAccountStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline const Aws::Vector<CreateAccountStatus>& GetCreateAccountStatuses() const{ return m_createAccountStatuses; }

    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline void SetCreateAccountStatuses(const Aws::Vector<CreateAccountStatus>& value) { m_createAccountStatuses = value; }

    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline void SetCreateAccountStatuses(Aws::Vector<CreateAccountStatus>&& value) { m_createAccountStatuses = std::move(value); }

    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline ListCreateAccountStatusResult& WithCreateAccountStatuses(const Aws::Vector<CreateAccountStatus>& value) { SetCreateAccountStatuses(value); return *this;}

    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline ListCreateAccountStatusResult& WithCreateAccountStatuses(Aws::Vector<CreateAccountStatus>&& value) { SetCreateAccountStatuses(std::move(value)); return *this;}

    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline ListCreateAccountStatusResult& AddCreateAccountStatuses(const CreateAccountStatus& value) { m_createAccountStatuses.push_back(value); return *this; }

    /**
     * <p>A list of objects with details about the requests. Certain elements, such as
     * the accountId number, are present in the output only after the account has been
     * successfully created.</p>
     */
    inline ListCreateAccountStatusResult& AddCreateAccountStatuses(CreateAccountStatus&& value) { m_createAccountStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListCreateAccountStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListCreateAccountStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListCreateAccountStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CreateAccountStatus> m_createAccountStatuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
