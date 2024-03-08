/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/InstanceStatus.h>
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
  class DescribeInstanceResult
  {
  public:
    AWS_SSOADMIN_API DescribeInstanceResult();
    AWS_SSOADMIN_API DescribeInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the instance was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date the instance was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date the instance was created.</p>
     */
    inline DescribeInstanceResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the instance was created.</p>
     */
    inline DescribeInstanceResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreId = value; }

    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreId = std::move(value); }

    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreId.assign(value); }

    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline DescribeInstanceResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline DescribeInstanceResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline DescribeInstanceResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArn = value; }

    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeInstanceResult& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeInstanceResult& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeInstanceResult& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>Specifies the instance name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the instance name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Specifies the instance name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Specifies the instance name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Specifies the instance name.</p>
     */
    inline DescribeInstanceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the instance name.</p>
     */
    inline DescribeInstanceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the instance name.</p>
     */
    inline DescribeInstanceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline DescribeInstanceResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline DescribeInstanceResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline DescribeInstanceResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The status of the instance. </p>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the instance. </p>
     */
    inline void SetStatus(const InstanceStatus& value) { m_status = value; }

    /**
     * <p>The status of the instance. </p>
     */
    inline void SetStatus(InstanceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the instance. </p>
     */
    inline DescribeInstanceResult& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the instance. </p>
     */
    inline DescribeInstanceResult& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_identityStoreId;

    Aws::String m_instanceArn;

    Aws::String m_name;

    Aws::String m_ownerAccountId;

    InstanceStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
