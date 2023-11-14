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
    AWS_PIPES_API S3LogDestinationParameters();
    AWS_PIPES_API S3LogDestinationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API S3LogDestinationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline S3LogDestinationParameters& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline S3LogDestinationParameters& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the Amazon S3 bucket to which EventBridge delivers the
     * log records for the pipe.</p>
     */
    inline S3LogDestinationParameters& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline const Aws::String& GetBucketOwner() const{ return m_bucketOwner; }

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline void SetBucketOwner(const Aws::String& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = value; }

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline void SetBucketOwner(Aws::String&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::move(value); }

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline void SetBucketOwner(const char* value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner.assign(value); }

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline S3LogDestinationParameters& WithBucketOwner(const Aws::String& value) { SetBucketOwner(value); return *this;}

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline S3LogDestinationParameters& WithBucketOwner(Aws::String&& value) { SetBucketOwner(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Web Services account that owns the Amazon S3 bucket to
     * which EventBridge delivers the log records for the pipe.</p>
     */
    inline S3LogDestinationParameters& WithBucketOwner(const char* value) { SetBucketOwner(value); return *this;}


    /**
     * <p>How EventBridge should format the log records.</p> <ul> <li> <p>
     * <code>json</code>: JSON </p> </li> <li> <p> <code>plain</code>: Plain text</p>
     * </li> <li> <p> <code>w3c</code>: <a href="https://www.w3.org/TR/WD-logfile">W3C
     * extended logging file format</a> </p> </li> </ul>
     */
    inline const S3OutputFormat& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>How EventBridge should format the log records.</p> <ul> <li> <p>
     * <code>json</code>: JSON </p> </li> <li> <p> <code>plain</code>: Plain text</p>
     * </li> <li> <p> <code>w3c</code>: <a href="https://www.w3.org/TR/WD-logfile">W3C
     * extended logging file format</a> </p> </li> </ul>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>How EventBridge should format the log records.</p> <ul> <li> <p>
     * <code>json</code>: JSON </p> </li> <li> <p> <code>plain</code>: Plain text</p>
     * </li> <li> <p> <code>w3c</code>: <a href="https://www.w3.org/TR/WD-logfile">W3C
     * extended logging file format</a> </p> </li> </ul>
     */
    inline void SetOutputFormat(const S3OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>How EventBridge should format the log records.</p> <ul> <li> <p>
     * <code>json</code>: JSON </p> </li> <li> <p> <code>plain</code>: Plain text</p>
     * </li> <li> <p> <code>w3c</code>: <a href="https://www.w3.org/TR/WD-logfile">W3C
     * extended logging file format</a> </p> </li> </ul>
     */
    inline void SetOutputFormat(S3OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>How EventBridge should format the log records.</p> <ul> <li> <p>
     * <code>json</code>: JSON </p> </li> <li> <p> <code>plain</code>: Plain text</p>
     * </li> <li> <p> <code>w3c</code>: <a href="https://www.w3.org/TR/WD-logfile">W3C
     * extended logging file format</a> </p> </li> </ul>
     */
    inline S3LogDestinationParameters& WithOutputFormat(const S3OutputFormat& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>How EventBridge should format the log records.</p> <ul> <li> <p>
     * <code>json</code>: JSON </p> </li> <li> <p> <code>plain</code>: Plain text</p>
     * </li> <li> <p> <code>w3c</code>: <a href="https://www.w3.org/TR/WD-logfile">W3C
     * extended logging file format</a> </p> </li> </ul>
     */
    inline S3LogDestinationParameters& WithOutputFormat(S3OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}


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
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

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
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

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
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

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
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

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
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

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
    inline S3LogDestinationParameters& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

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
    inline S3LogDestinationParameters& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

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
    inline S3LogDestinationParameters& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;

    S3OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
