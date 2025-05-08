/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_SSOADMIN_API DescribeInstanceResult() = default;
    AWS_SSOADMIN_API DescribeInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the instance of IAM Identity Center under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DescribeInstanceResult& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the identity store that is connected to the instance of IAM
     * Identity Center.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    DescribeInstanceResult& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account for which the instance was
     * created.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    DescribeInstanceResult& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the instance name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeInstanceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DescribeInstanceResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the instance. </p>
     */
    inline InstanceStatus GetStatus() const { return m_status; }
    inline void SetStatus(InstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeInstanceResult& WithStatus(InstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    InstanceStatus m_status{InstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
