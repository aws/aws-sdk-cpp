/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/S3DestinationConfig.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The configuration for the destination where the harvested content will be
   * exported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_MEDIAPACKAGEV2_API Destination();
    AWS_MEDIAPACKAGEV2_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for exporting harvested content to an S3 bucket. This
     * includes details such as the bucket name and destination path within the
     * bucket.</p>
     */
    inline const S3DestinationConfig& GetS3Destination() const{ return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    inline void SetS3Destination(const S3DestinationConfig& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }
    inline void SetS3Destination(S3DestinationConfig&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }
    inline Destination& WithS3Destination(const S3DestinationConfig& value) { SetS3Destination(value); return *this;}
    inline Destination& WithS3Destination(S3DestinationConfig&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}
  private:

    S3DestinationConfig m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
