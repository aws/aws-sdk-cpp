/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>The name and prefix of the S3 bucket where code signing saves your signed
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_SIGNER_API S3Destination();
    AWS_SIGNER_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline S3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline S3Destination& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline S3Destination& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 prefix that you can use to limit responses to those that begin
     * with the specified prefix.</p>
     */
    inline S3Destination& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
