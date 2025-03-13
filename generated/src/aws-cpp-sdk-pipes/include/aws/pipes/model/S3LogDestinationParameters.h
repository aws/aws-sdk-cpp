/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/S3OutputFormat.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The Amazon S3 logging configuration settings for the pipe.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/S3LogDestinationParameters">AWS
   * API Reference</a></p>
   */
  class S3LogDestinationParameters
  {
  public:
    AWS_PIPES_API S3LogDestinationParameters() = default;
    AWS_PIPES_API S3LogDestinationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API S3LogDestinationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    S3LogDestinationParameters& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline const Aws::String& GetBucketOwner() const { return m_bucketOwner; }
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }
    template<typename BucketOwnerT = Aws::String>
    void SetBucketOwner(BucketOwnerT&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::forward<BucketOwnerT>(value); }
    template<typename BucketOwnerT = Aws::String>
    S3LogDestinationParameters& WithBucketOwner(BucketOwnerT&& value) { SetBucketOwner(std::forward<BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How EventBridge should format the log records.</p> <p>EventBridge currently
     * only supports <code>json</code> formatting.</p>
     */
    inline S3OutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(S3OutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline S3LogDestinationParameters& WithOutputFormat(S3OutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies any prefix text with which to begin Amazon S3 log object names.</p>
     * <p>You can use prefixes to organize the data that you store in Amazon S3
     * buckets. A prefix is a string of characters at the beginning of the object key
     * name. A prefix can be any length, subject to the maximum length of the object
     * key name (1,024 bytes). For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3LogDestinationParameters& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;

    S3OutputFormat m_outputFormat{S3OutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
