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
    AWS_OMICS_API SequenceStoreS3Access() = default;
    AWS_OMICS_API SequenceStoreS3Access(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceStoreS3Access& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 URI of the sequence store.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    SequenceStoreS3Access& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is ARN of the access point associated with the S3 bucket storing read
     * sets.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const { return m_s3AccessPointArn; }
    inline bool S3AccessPointArnHasBeenSet() const { return m_s3AccessPointArnHasBeenSet; }
    template<typename S3AccessPointArnT = Aws::String>
    void SetS3AccessPointArn(S3AccessPointArnT&& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = std::forward<S3AccessPointArnT>(value); }
    template<typename S3AccessPointArnT = Aws::String>
    SequenceStoreS3Access& WithS3AccessPointArn(S3AccessPointArnT&& value) { SetS3AccessPointArn(std::forward<S3AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location of the access logs.</p>
     */
    inline const Aws::String& GetAccessLogLocation() const { return m_accessLogLocation; }
    inline bool AccessLogLocationHasBeenSet() const { return m_accessLogLocationHasBeenSet; }
    template<typename AccessLogLocationT = Aws::String>
    void SetAccessLogLocation(AccessLogLocationT&& value) { m_accessLogLocationHasBeenSet = true; m_accessLogLocation = std::forward<AccessLogLocationT>(value); }
    template<typename AccessLogLocationT = Aws::String>
    SequenceStoreS3Access& WithAccessLogLocation(AccessLogLocationT&& value) { SetAccessLogLocation(std::forward<AccessLogLocationT>(value)); return *this;}
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
