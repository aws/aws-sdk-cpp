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
   * <p>The location of the Amazon S3 bucket that you specify to download your tax
   * documents to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/DestinationS3Location">AWS
   * API Reference</a></p>
   */
  class DestinationS3Location
  {
  public:
    AWS_TAXSETTINGS_API DestinationS3Location();
    AWS_TAXSETTINGS_API DestinationS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API DestinationS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your Amazon S3 bucket that you specify to download your tax
     * documents to.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline DestinationS3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline DestinationS3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline DestinationS3Location& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 object prefix that you specify for your tax document file.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline DestinationS3Location& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline DestinationS3Location& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline DestinationS3Location& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
