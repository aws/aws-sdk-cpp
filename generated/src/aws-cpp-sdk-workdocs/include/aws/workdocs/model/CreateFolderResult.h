/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/FolderMetadata.h>
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
  class CreateFolderResult
  {
  public:
    AWS_WORKDOCS_API CreateFolderResult();
    AWS_WORKDOCS_API CreateFolderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API CreateFolderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata of the folder.</p>
     */
    inline const FolderMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The metadata of the folder.</p>
     */
    inline void SetMetadata(const FolderMetadata& value) { m_metadata = value; }

    /**
     * <p>The metadata of the folder.</p>
     */
    inline void SetMetadata(FolderMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>The metadata of the folder.</p>
     */
    inline CreateFolderResult& WithMetadata(const FolderMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>The metadata of the folder.</p>
     */
    inline CreateFolderResult& WithMetadata(FolderMetadata&& value) { SetMetadata(std::move(value)); return *this;}

  private:

    FolderMetadata m_metadata;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
