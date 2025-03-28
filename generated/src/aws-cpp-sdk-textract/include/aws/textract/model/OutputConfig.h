﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Sets whether or not your output will go to a user created bucket. Used to set
   * the name of the bucket, and the prefix on the output file.</p> <p>
   * <code>OutputConfig</code> is an optional parameter which lets you adjust where
   * your output will be placed. By default, Amazon Textract will store the results
   * internally and can only be accessed by the Get API operations. With
   * <code>OutputConfig</code> enabled, you can set the name of the bucket the output
   * will be sent to the file prefix of the results where you can download your
   * results. Additionally, you can set the <code>KMSKeyID</code> parameter to a
   * customer master key (CMK) to encrypt your output. Without this parameter set
   * Amazon Textract will encrypt server-side using the AWS managed CMK for Amazon
   * S3.</p> <p>Decryption of Customer Content is necessary for processing of the
   * documents by Amazon Textract. If your account is opted out under an AI services
   * opt out policy then all unencrypted Customer Content is immediately and
   * permanently deleted after the Customer Content has been processed by the
   * service. No copy of of the output is retained by Amazon Textract. For
   * information about how to opt out, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">
   * Managing AI services opt-out policy. </a> </p> <p>For more information on data
   * privacy, see the <a
   * href="https://aws.amazon.com/compliance/data-privacy-faq/">Data Privacy
   * FAQ</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/OutputConfig">AWS
   * API Reference</a></p>
   */
  class OutputConfig
  {
  public:
    AWS_TEXTRACT_API OutputConfig() = default;
    AWS_TEXTRACT_API OutputConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the bucket your output will go to.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    OutputConfig& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix of the object key that the output will be saved to. When not
     * enabled, the prefix will be “textract_output".</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    OutputConfig& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
