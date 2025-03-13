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
    AWS_SSM_API S3OutputLocation() = default;
    AWS_SSM_API S3OutputLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API S3OutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3Region() const { return m_outputS3Region; }
    inline bool OutputS3RegionHasBeenSet() const { return m_outputS3RegionHasBeenSet; }
    template<typename OutputS3RegionT = Aws::String>
    void SetOutputS3Region(OutputS3RegionT&& value) { m_outputS3RegionHasBeenSet = true; m_outputS3Region = std::forward<OutputS3RegionT>(value); }
    template<typename OutputS3RegionT = Aws::String>
    S3OutputLocation& WithOutputS3Region(OutputS3RegionT&& value) { SetOutputS3Region(std::forward<OutputS3RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    S3OutputLocation& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket subfolder.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const { return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    template<typename OutputS3KeyPrefixT = Aws::String>
    void SetOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::forward<OutputS3KeyPrefixT>(value); }
    template<typename OutputS3KeyPrefixT = Aws::String>
    S3OutputLocation& WithOutputS3KeyPrefix(OutputS3KeyPrefixT&& value) { SetOutputS3KeyPrefix(std::forward<OutputS3KeyPrefixT>(value)); return *this;}
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
