/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The configuration details of an Amazon S3 input or output
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/S3DataConfig">AWS
   * API Reference</a></p>
   */
  class S3DataConfig
  {
  public:
    AWS_PERSONALIZE_API S3DataConfig();
    AWS_PERSONALIZE_API S3DataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API S3DataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline S3DataConfig& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline S3DataConfig& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The file path of the Amazon S3 bucket.</p>
     */
    inline S3DataConfig& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline S3DataConfig& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline S3DataConfig& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key that
     * Amazon Personalize uses to encrypt or decrypt the input and output files.</p>
     */
    inline S3DataConfig& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
