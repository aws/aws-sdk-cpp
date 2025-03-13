/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/S3Configuration.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>The location to write error reports for records rejected, asynchronously,
   * during magnetic store writes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MagneticStoreRejectedDataLocation">AWS
   * API Reference</a></p>
   */
  class MagneticStoreRejectedDataLocation
  {
  public:
    AWS_TIMESTREAMWRITE_API MagneticStoreRejectedDataLocation() = default;
    AWS_TIMESTREAMWRITE_API MagneticStoreRejectedDataLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MagneticStoreRejectedDataLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration of an S3 location to write error reports for records rejected,
     * asynchronously, during magnetic store writes.</p>
     */
    inline const S3Configuration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3Configuration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3Configuration>
    MagneticStoreRejectedDataLocation& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}
  private:

    S3Configuration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
