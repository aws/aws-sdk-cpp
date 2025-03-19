/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SessionManagerOutputUrl">AWS
   * API Reference</a></p>
   */
  class SessionManagerOutputUrl
  {
  public:
    AWS_SSM_API SessionManagerOutputUrl() = default;
    AWS_SSM_API SessionManagerOutputUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API SessionManagerOutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetS3OutputUrl() const { return m_s3OutputUrl; }
    inline bool S3OutputUrlHasBeenSet() const { return m_s3OutputUrlHasBeenSet; }
    template<typename S3OutputUrlT = Aws::String>
    void SetS3OutputUrl(S3OutputUrlT&& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = std::forward<S3OutputUrlT>(value); }
    template<typename S3OutputUrlT = Aws::String>
    SessionManagerOutputUrl& WithS3OutputUrl(S3OutputUrlT&& value) { SetS3OutputUrl(std::forward<S3OutputUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetCloudWatchOutputUrl() const { return m_cloudWatchOutputUrl; }
    inline bool CloudWatchOutputUrlHasBeenSet() const { return m_cloudWatchOutputUrlHasBeenSet; }
    template<typename CloudWatchOutputUrlT = Aws::String>
    void SetCloudWatchOutputUrl(CloudWatchOutputUrlT&& value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl = std::forward<CloudWatchOutputUrlT>(value); }
    template<typename CloudWatchOutputUrlT = Aws::String>
    SessionManagerOutputUrl& WithCloudWatchOutputUrl(CloudWatchOutputUrlT&& value) { SetCloudWatchOutputUrl(std::forward<CloudWatchOutputUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3OutputUrl;
    bool m_s3OutputUrlHasBeenSet = false;

    Aws::String m_cloudWatchOutputUrl;
    bool m_cloudWatchOutputUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
