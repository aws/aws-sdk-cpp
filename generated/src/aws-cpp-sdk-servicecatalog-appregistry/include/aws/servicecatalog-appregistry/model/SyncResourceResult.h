/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog-appregistry/model/SyncAction.h>
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
namespace AppRegistry
{
namespace Model
{
  class SyncResourceResult
  {
  public:
    AWS_APPREGISTRY_API SyncResourceResult();
    AWS_APPREGISTRY_API SyncResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPREGISTRY_API SyncResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline SyncResourceResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline SyncResourceResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline SyncResourceResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline SyncResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline SyncResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline SyncResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the output if an application is associated with an ARN value,
     * which could be <code>syncStarted</code> or None.</p>
     */
    inline const SyncAction& GetActionTaken() const{ return m_actionTaken; }
    inline void SetActionTaken(const SyncAction& value) { m_actionTaken = value; }
    inline void SetActionTaken(SyncAction&& value) { m_actionTaken = std::move(value); }
    inline SyncResourceResult& WithActionTaken(const SyncAction& value) { SetActionTaken(value); return *this;}
    inline SyncResourceResult& WithActionTaken(SyncAction&& value) { SetActionTaken(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SyncResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SyncResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SyncResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;

    Aws::String m_resourceArn;

    SyncAction m_actionTaken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
