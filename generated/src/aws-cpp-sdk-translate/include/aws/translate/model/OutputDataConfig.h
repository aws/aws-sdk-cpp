/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/EncryptionKey.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The output configuration properties for a batch translation
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class OutputDataConfig
  {
  public:
    AWS_TRANSLATE_API OutputDataConfig();
    AWS_TRANSLATE_API OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline OutputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline OutputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI of the S3 folder that contains a translation job's output file. The
     * folder must be in the same Region as the API endpoint that you are calling.</p>
     */
    inline OutputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    
    inline OutputDataConfig& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    
    inline OutputDataConfig& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
