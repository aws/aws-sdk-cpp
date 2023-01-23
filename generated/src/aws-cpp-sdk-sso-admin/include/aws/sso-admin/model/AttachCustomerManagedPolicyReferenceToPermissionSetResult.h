/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

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
  class AttachCustomerManagedPolicyReferenceToPermissionSetResult
  {
  public:
    AWS_SSOADMIN_API AttachCustomerManagedPolicyReferenceToPermissionSetResult();
    AWS_SSOADMIN_API AttachCustomerManagedPolicyReferenceToPermissionSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API AttachCustomerManagedPolicyReferenceToPermissionSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
