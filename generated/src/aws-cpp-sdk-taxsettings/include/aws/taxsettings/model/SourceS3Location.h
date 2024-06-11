/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>The Amazon S3 bucket in your account where your tax document is
   * located.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SourceS3Location">AWS
   * API Reference</a></p>
   */
  class SourceS3Location
  {
  public:
    AWS_TAXSETTINGS_API SourceS3Location();
    AWS_TAXSETTINGS_API SourceS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SourceS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your Amazon S3 bucket that your tax document is located.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline SourceS3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline SourceS3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline SourceS3Location& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key of your tax document object in Amazon S3.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline SourceS3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline SourceS3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline SourceS3Location& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
