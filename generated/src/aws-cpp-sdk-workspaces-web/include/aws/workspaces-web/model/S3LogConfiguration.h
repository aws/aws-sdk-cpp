/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/LogFileFormat.h>
#include <aws/workspaces-web/model/FolderStructure.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The S3 log configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/S3LogConfiguration">AWS
   * API Reference</a></p>
   */
  class S3LogConfiguration
  {
  public:
    AWS_WORKSPACESWEB_API S3LogConfiguration() = default;
    AWS_WORKSPACESWEB_API S3LogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API S3LogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 bucket name where logs are delivered.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3LogConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path prefix that determines where log files are stored.</p>
     */
    inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    template<typename KeyPrefixT = Aws::String>
    void SetKeyPrefix(KeyPrefixT&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::forward<KeyPrefixT>(value); }
    template<typename KeyPrefixT = Aws::String>
    S3LogConfiguration& WithKeyPrefix(KeyPrefixT&& value) { SetKeyPrefix(std::forward<KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected bucket owner of the target S3 bucket. The caller must have
     * permissions to write to the target bucket.</p>
     */
    inline const Aws::String& GetBucketOwner() const { return m_bucketOwner; }
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }
    template<typename BucketOwnerT = Aws::String>
    void SetBucketOwner(BucketOwnerT&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::forward<BucketOwnerT>(value); }
    template<typename BucketOwnerT = Aws::String>
    S3LogConfiguration& WithBucketOwner(BucketOwnerT&& value) { SetBucketOwner(std::forward<BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the LogFile that is written to S3.</p>
     */
    inline LogFileFormat GetLogFileFormat() const { return m_logFileFormat; }
    inline bool LogFileFormatHasBeenSet() const { return m_logFileFormatHasBeenSet; }
    inline void SetLogFileFormat(LogFileFormat value) { m_logFileFormatHasBeenSet = true; m_logFileFormat = value; }
    inline S3LogConfiguration& WithLogFileFormat(LogFileFormat value) { SetLogFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The folder structure that defines the organizational structure for log files
     * in S3.</p>
     */
    inline FolderStructure GetFolderStructure() const { return m_folderStructure; }
    inline bool FolderStructureHasBeenSet() const { return m_folderStructureHasBeenSet; }
    inline void SetFolderStructure(FolderStructure value) { m_folderStructureHasBeenSet = true; m_folderStructure = value; }
    inline S3LogConfiguration& WithFolderStructure(FolderStructure value) { SetFolderStructure(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;

    LogFileFormat m_logFileFormat{LogFileFormat::NOT_SET};
    bool m_logFileFormatHasBeenSet = false;

    FolderStructure m_folderStructure{FolderStructure::NOT_SET};
    bool m_folderStructureHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
