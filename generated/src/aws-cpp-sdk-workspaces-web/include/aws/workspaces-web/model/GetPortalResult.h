/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/Portal.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class GetPortalResult
  {
  public:
    AWS_WORKSPACESWEB_API GetPortalResult();
    AWS_WORKSPACESWEB_API GetPortalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetPortalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The web portal.</p>
     */
    inline const Portal& GetPortal() const{ return m_portal; }

    /**
     * <p>The web portal.</p>
     */
    inline void SetPortal(const Portal& value) { m_portal = value; }

    /**
     * <p>The web portal.</p>
     */
    inline void SetPortal(Portal&& value) { m_portal = std::move(value); }

    /**
     * <p>The web portal.</p>
     */
    inline GetPortalResult& WithPortal(const Portal& value) { SetPortal(value); return *this;}

    /**
     * <p>The web portal.</p>
     */
    inline GetPortalResult& WithPortal(Portal&& value) { SetPortal(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPortalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPortalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPortalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Portal m_portal;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
