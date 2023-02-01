/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/ResourcePath.h>
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
  class GetDocumentPathResult
  {
  public:
    AWS_WORKDOCS_API GetDocumentPathResult();
    AWS_WORKDOCS_API GetDocumentPathResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API GetDocumentPathResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetDocumentPathResult& WithPath(const ResourcePath& value) { SetPath(value); return *this;}

    /**
     * <p>The path information.</p>
     */
    inline GetDocumentPathResult& WithPath(ResourcePath&& value) { SetPath(std::move(value)); return *this;}

  private:

    ResourcePath m_path;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
