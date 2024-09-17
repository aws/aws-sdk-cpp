/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about the file paths that were affected by the threat.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FilePaths">AWS
   * API Reference</a></p>
   */
  class FilePaths
  {
  public:
    AWS_SECURITYHUB_API FilePaths();
    AWS_SECURITYHUB_API FilePaths(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FilePaths& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the infected or suspicious file on the resource it was detected on.
     * </p> <p>Length Constraints: Minimum of 1 length. Maximum of 128 length.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline FilePaths& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline FilePaths& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline FilePaths& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the infected or suspicious file corresponding to the hash. </p>
     * <p>Length Constraints: Minimum of 1 length. Maximum of 128 length.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline FilePaths& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline FilePaths& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline FilePaths& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource on which the threat was
     * detected. </p> <p>Length Constraints: Minimum of 1 length. Maximum of 128
     * length.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline FilePaths& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline FilePaths& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline FilePaths& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value for the infected or suspicious file. </p> <p>Length
     * Constraints: Minimum of 1 length. Maximum of 128 length.</p>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }
    inline FilePaths& WithHash(const Aws::String& value) { SetHash(value); return *this;}
    inline FilePaths& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}
    inline FilePaths& WithHash(const char* value) { SetHash(value); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
