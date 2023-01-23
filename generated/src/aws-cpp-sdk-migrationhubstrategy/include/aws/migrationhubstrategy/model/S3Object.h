/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Contains the S3 bucket name and the Amazon S3 key name. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API S3Object();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The S3 bucket name. </p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p> The S3 bucket name. </p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p> The S3 bucket name. </p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p> The S3 bucket name. </p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket name. </p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p> The S3 bucket name. </p>
     */
    inline S3Object& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket name. </p>
     */
    inline S3Object& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket name. </p>
     */
    inline S3Object& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline const Aws::String& GetS3key() const{ return m_s3key; }

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline bool S3keyHasBeenSet() const { return m_s3keyHasBeenSet; }

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline void SetS3key(const Aws::String& value) { m_s3keyHasBeenSet = true; m_s3key = value; }

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline void SetS3key(Aws::String&& value) { m_s3keyHasBeenSet = true; m_s3key = std::move(value); }

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline void SetS3key(const char* value) { m_s3keyHasBeenSet = true; m_s3key.assign(value); }

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline S3Object& WithS3key(const Aws::String& value) { SetS3key(value); return *this;}

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline S3Object& WithS3key(Aws::String&& value) { SetS3key(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name. </p>
     */
    inline S3Object& WithS3key(const char* value) { SetS3key(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3key;
    bool m_s3keyHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
