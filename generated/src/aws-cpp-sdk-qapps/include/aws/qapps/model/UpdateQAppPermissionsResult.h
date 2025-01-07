/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/PermissionOutput.h>
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
namespace QApps
{
namespace Model
{
  class UpdateQAppPermissionsResult
  {
  public:
    AWS_QAPPS_API UpdateQAppPermissionsResult();
    AWS_QAPPS_API UpdateQAppPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API UpdateQAppPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q App for which permissions were
     * updated.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline UpdateQAppPermissionsResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline UpdateQAppPermissionsResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline UpdateQAppPermissionsResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q App for which permissions were
     * updated.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline void SetAppId(const Aws::String& value) { m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appId.assign(value); }
    inline UpdateQAppPermissionsResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateQAppPermissionsResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateQAppPermissionsResult& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated list of permissions for the Amazon Q App.</p>
     */
    inline const Aws::Vector<PermissionOutput>& GetPermissions() const{ return m_permissions; }
    inline void SetPermissions(const Aws::Vector<PermissionOutput>& value) { m_permissions = value; }
    inline void SetPermissions(Aws::Vector<PermissionOutput>&& value) { m_permissions = std::move(value); }
    inline UpdateQAppPermissionsResult& WithPermissions(const Aws::Vector<PermissionOutput>& value) { SetPermissions(value); return *this;}
    inline UpdateQAppPermissionsResult& WithPermissions(Aws::Vector<PermissionOutput>&& value) { SetPermissions(std::move(value)); return *this;}
    inline UpdateQAppPermissionsResult& AddPermissions(const PermissionOutput& value) { m_permissions.push_back(value); return *this; }
    inline UpdateQAppPermissionsResult& AddPermissions(PermissionOutput&& value) { m_permissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateQAppPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateQAppPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateQAppPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;

    Aws::String m_appId;

    Aws::Vector<PermissionOutput> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
