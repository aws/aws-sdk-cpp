/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ResourcePath.h>
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
namespace WorkDocs
{
namespace Model
{
  class GetFolderPathResult
  {
  public:
    AWS_WORKDOCS_API GetFolderPathResult();
    AWS_WORKDOCS_API GetFolderPathResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API GetFolderPathResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The path information.</p>
     */
    inline const ResourcePath& GetPath() const{ return m_path; }

    /**
     * <p>The path information.</p>
     */
    inline void SetPath(const ResourcePath& value) { m_path = value; }

    /**
     * <p>The path information.</p>
     */
    inline void SetPath(ResourcePath&& value) { m_path = std::move(value); }

    /**
     * <p>The path information.</p>
     */
    inline GetFolderPathResult& WithPath(const ResourcePath& value) { SetPath(value); return *this;}

    /**
     * <p>The path information.</p>
     */
    inline GetFolderPathResult& WithPath(ResourcePath&& value) { SetPath(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFolderPathResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFolderPathResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFolderPathResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourcePath m_path;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
