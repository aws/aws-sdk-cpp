/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AccountAssignmentOperationStatus.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeAccountAssignmentDeletionStatusResult
  {
  public:
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusResult();
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline const AccountAssignmentOperationStatus& GetAccountAssignmentDeletionStatus() const{ return m_accountAssignmentDeletionStatus; }

    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline void SetAccountAssignmentDeletionStatus(const AccountAssignmentOperationStatus& value) { m_accountAssignmentDeletionStatus = value; }

    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline void SetAccountAssignmentDeletionStatus(AccountAssignmentOperationStatus&& value) { m_accountAssignmentDeletionStatus = std::move(value); }

    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline DescribeAccountAssignmentDeletionStatusResult& WithAccountAssignmentDeletionStatus(const AccountAssignmentOperationStatus& value) { SetAccountAssignmentDeletionStatus(value); return *this;}

    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline DescribeAccountAssignmentDeletionStatusResult& WithAccountAssignmentDeletionStatus(AccountAssignmentOperationStatus&& value) { SetAccountAssignmentDeletionStatus(std::move(value)); return *this;}

  private:

    AccountAssignmentOperationStatus m_accountAssignmentDeletionStatus;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
