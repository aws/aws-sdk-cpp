/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>An S3 bucket where you want to store the results of this
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/S3OutputLocation">AWS
   * API Reference</a></p>
   */
  class S3OutputLocation
  {
  public:
    AWS_SSM_API S3OutputLocation();
    AWS_SSM_API S3OutputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API S3OutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3Region() const{ return m_outputS3Region; }
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }
    inline void SetOutputS3Region(const Aws::String& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = value; }
    inline void SetOutputS3Region(Aws::String&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::move(value); }
    inline void SetOutputS3Region(const char* value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region.assign(value); }
    inline S3OutputLocation& WithOutputS3Region(const Aws::String& value) { SetOutputS3Region(value); return *this;}
    inline S3OutputLocation& WithOutputS3Region(Aws::String&& value) { SetOutputS3Region(std::move(value)); return *this;}
    inline S3OutputLocation& WithOutputS3Region(const char* value) { SetOutputS3Region(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }
    inline S3OutputLocation& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}
    inline S3OutputLocation& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}
    inline S3OutputLocation& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket subfolder.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }
    inline S3OutputLocation& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}
    inline S3OutputLocation& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}
    inline S3OutputLocation& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_outputS3Region;
    bool m_outputS3RegionHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
