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
   * <p>A custom file system in Amazon FSx for Lustre.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FSxLustreFileSystem">AWS
   * API Reference</a></p>
   */
  class FSxLustreFileSystem
  {
  public:
    AWS_SAGEMAKER_API FSxLustreFileSystem();
    AWS_SAGEMAKER_API FSxLustreFileSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FSxLustreFileSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon FSx for Lustre file system ID.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline FSxLustreFileSystem& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline FSxLustreFileSystem& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline FSxLustreFileSystem& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
