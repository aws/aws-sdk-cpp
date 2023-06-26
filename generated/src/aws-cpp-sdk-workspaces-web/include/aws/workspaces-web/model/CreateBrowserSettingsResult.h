/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
  class CreateBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateBrowserSettingsResult();
    AWS_WORKSPACESWEB_API CreateBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline CreateBrowserSettingsResult& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline CreateBrowserSettingsResult& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline CreateBrowserSettingsResult& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateBrowserSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateBrowserSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateBrowserSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_browserSettingsArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
