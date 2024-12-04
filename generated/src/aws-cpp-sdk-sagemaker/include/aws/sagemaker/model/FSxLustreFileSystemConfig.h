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
   * <p>The settings for assigning a custom Amazon FSx for Lustre file system to a
   * user profile or space for an Amazon SageMaker Domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FSxLustreFileSystemConfig">AWS
   * API Reference</a></p>
   */
  class FSxLustreFileSystemConfig
  {
  public:
    AWS_SAGEMAKER_API FSxLustreFileSystemConfig();
    AWS_SAGEMAKER_API FSxLustreFileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FSxLustreFileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The globally unique, 17-digit, ID of the file system, assigned by Amazon FSx
     * for Lustre.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }
    inline FSxLustreFileSystemConfig& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}
    inline FSxLustreFileSystemConfig& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}
    inline FSxLustreFileSystemConfig& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the file system directory that is accessible in Amazon SageMaker
     * Studio. Permitted users can access only this directory and below.</p>
     */
    inline const Aws::String& GetFileSystemPath() const{ return m_fileSystemPath; }
    inline bool FileSystemPathHasBeenSet() const { return m_fileSystemPathHasBeenSet; }
    inline void SetFileSystemPath(const Aws::String& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = value; }
    inline void SetFileSystemPath(Aws::String&& value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath = std::move(value); }
    inline void SetFileSystemPath(const char* value) { m_fileSystemPathHasBeenSet = true; m_fileSystemPath.assign(value); }
    inline FSxLustreFileSystemConfig& WithFileSystemPath(const Aws::String& value) { SetFileSystemPath(value); return *this;}
    inline FSxLustreFileSystemConfig& WithFileSystemPath(Aws::String&& value) { SetFileSystemPath(std::move(value)); return *this;}
    inline FSxLustreFileSystemConfig& WithFileSystemPath(const char* value) { SetFileSystemPath(value); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_fileSystemPath;
    bool m_fileSystemPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
