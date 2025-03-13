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
    AWS_SECURITYHUB_API FilePaths() = default;
    AWS_SECURITYHUB_API FilePaths(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FilePaths& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the infected or suspicious file on the resource it was detected on.
     * </p> <p>Length Constraints: Minimum of 1 length. Maximum of 128 length.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    FilePaths& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the infected or suspicious file corresponding to the hash. </p>
     * <p>Length Constraints: Minimum of 1 length. Maximum of 128 length.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    FilePaths& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource on which the threat was
     * detected. </p> <p>Length Constraints: Minimum of 1 length. Maximum of 128
     * length.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    FilePaths& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value for the infected or suspicious file. </p> <p>Length
     * Constraints: Minimum of 1 length. Maximum of 128 length.</p>
     */
    inline const Aws::String& GetHash() const { return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    template<typename HashT = Aws::String>
    void SetHash(HashT&& value) { m_hashHasBeenSet = true; m_hash = std::forward<HashT>(value); }
    template<typename HashT = Aws::String>
    FilePaths& WithHash(HashT&& value) { SetHash(std::forward<HashT>(value)); return *this;}
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
