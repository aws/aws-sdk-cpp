/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for AccountConfiguration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AccountConfiguration">AWS
   * API Reference</a></p>
   */
  class AccountConfiguration
  {
  public:
    AWS_MEDIALIVE_API AccountConfiguration();
    AWS_MEDIALIVE_API AccountConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AccountConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline AccountConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline AccountConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * Specifies the KMS key to use for all features that use key encryption. Specify
     * the ARN of a KMS key that you have created. Or leave blank to use the key that
     * MediaLive creates and manages for you.
     */
    inline AccountConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
