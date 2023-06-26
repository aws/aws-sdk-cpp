/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>The configuration containing output file information for a batch
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class OutputDataConfig
  {
  public:
    AWS_VOICEID_API OutputDataConfig();
    AWS_VOICEID_API OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline OutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline OutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS key you want Voice ID to use to encrypt the output
     * file of a speaker enrollment job/fraudster registration job. </p>
     */
    inline OutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline OutputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline OutputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 path of the folder where Voice ID writes the job output file. It has a
     * <code>*.out</code> extension. For example, if the input file name is
     * <code>input-file.json</code> and the output folder path is
     * <code>s3://output-bucket/output-folder</code>, the full output file path is
     * <code>s3://output-bucket/output-folder/job-Id/input-file.json.out</code>.</p>
     */
    inline OutputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
