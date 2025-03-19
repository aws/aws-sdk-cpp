/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Contains the Amazon S3 location of the training data you want to use to
   * create a new custom language model, and permissions to access this location.</p>
   * <p>When using <code>InputDataConfig</code>, you must include these
   * sub-parameters: <code>S3Uri</code> and <code>DataAccessRoleArn</code>. You can
   * optionally include <code>TuningDataS3Uri</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_TRANSCRIBESERVICE_API InputDataConfig() = default;
    AWS_TRANSCRIBESERVICE_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to train your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-training-data/</code> </p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    InputDataConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location (URI) of the text files you want to use to tune your
     * custom language model.</p> <p>Here's an example URI path:
     * <code>s3://DOC-EXAMPLE-BUCKET/my-model-tuning-data/</code> </p>
     */
    inline const Aws::String& GetTuningDataS3Uri() const { return m_tuningDataS3Uri; }
    inline bool TuningDataS3UriHasBeenSet() const { return m_tuningDataS3UriHasBeenSet; }
    template<typename TuningDataS3UriT = Aws::String>
    void SetTuningDataS3Uri(TuningDataS3UriT&& value) { m_tuningDataS3UriHasBeenSet = true; m_tuningDataS3Uri = std::forward<TuningDataS3UriT>(value); }
    template<typename TuningDataS3UriT = Aws::String>
    InputDataConfig& WithTuningDataS3Uri(TuningDataS3UriT&& value) { SetTuningDataS3Uri(std::forward<TuningDataS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    InputDataConfig& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_tuningDataS3Uri;
    bool m_tuningDataS3UriHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
