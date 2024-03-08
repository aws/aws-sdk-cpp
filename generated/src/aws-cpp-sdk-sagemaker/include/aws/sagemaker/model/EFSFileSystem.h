/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A file system, created by you in Amazon EFS, that you assign to a user
   * profile or space for an Amazon SageMaker Domain. Permitted users can access this
   * file system in Amazon SageMaker Studio.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EFSFileSystem">AWS
   * API Reference</a></p>
   */
  class EFSFileSystem
  {
  public:
    AWS_SAGEMAKER_API EFSFileSystem();
    AWS_SAGEMAKER_API EFSFileSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EFSFileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline EFSFileSystem& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline EFSFileSystem& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of your Amazon EFS file system.</p>
     */
    inline EFSFileSystem& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
