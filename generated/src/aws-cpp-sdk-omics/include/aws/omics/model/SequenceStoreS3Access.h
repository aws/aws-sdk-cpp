/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>The S3 access metadata of the sequence store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SequenceStoreS3Access">AWS
   * API Reference</a></p>
   */
  class SequenceStoreS3Access
  {
  public:
    AWS_OMICS_API SequenceStoreS3Access();
    AWS_OMICS_API SequenceStoreS3Access(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceStoreS3Access& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URI of the sequence store.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline SequenceStoreS3Access& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline SequenceStoreS3Access& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline SequenceStoreS3Access& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is ARN of the access point associated with the S3 bucket storing read
     * sets.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const{ return m_s3AccessPointArn; }
    inline bool S3AccessPointArnHasBeenSet() const { return m_s3AccessPointArnHasBeenSet; }
    inline void SetS3AccessPointArn(const Aws::String& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = value; }
    inline void SetS3AccessPointArn(Aws::String&& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = std::move(value); }
    inline void SetS3AccessPointArn(const char* value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn.assign(value); }
    inline SequenceStoreS3Access& WithS3AccessPointArn(const Aws::String& value) { SetS3AccessPointArn(value); return *this;}
    inline SequenceStoreS3Access& WithS3AccessPointArn(Aws::String&& value) { SetS3AccessPointArn(std::move(value)); return *this;}
    inline SequenceStoreS3Access& WithS3AccessPointArn(const char* value) { SetS3AccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the access logs.</p>
     */
    inline const Aws::String& GetAccessLogLocation() const{ return m_accessLogLocation; }
    inline bool AccessLogLocationHasBeenSet() const { return m_accessLogLocationHasBeenSet; }
    inline void SetAccessLogLocation(const Aws::String& value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation = value; }
    inline void SetAccessLogLocation(Aws::String&& value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation = std::move(value); }
    inline void SetAccessLogLocation(const char* value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation.assign(value); }
    inline SequenceStoreS3Access& WithAccessLogLocation(const Aws::String& value) { SetAccessLogLocation(value); return *this;}
    inline SequenceStoreS3Access& WithAccessLogLocation(Aws::String&& value) { SetAccessLogLocation(std::move(value)); return *this;}
    inline SequenceStoreS3Access& WithAccessLogLocation(const char* value) { SetAccessLogLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    Aws::String m_s3AccessPointArn;
    bool m_s3AccessPointArnHasBeenSet = false;

    Aws::String m_accessLogLocation;
    bool m_accessLogLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
