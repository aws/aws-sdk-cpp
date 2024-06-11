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
    AWS_SSM_API SessionManagerOutputUrl();
    AWS_SSM_API SessionManagerOutputUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API SessionManagerOutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetS3OutputUrl() const{ return m_s3OutputUrl; }
    inline bool S3OutputUrlHasBeenSet() const { return m_s3OutputUrlHasBeenSet; }
    inline void SetS3OutputUrl(const Aws::String& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = value; }
    inline void SetS3OutputUrl(Aws::String&& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = std::move(value); }
    inline void SetS3OutputUrl(const char* value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl.assign(value); }
    inline SessionManagerOutputUrl& WithS3OutputUrl(const Aws::String& value) { SetS3OutputUrl(value); return *this;}
    inline SessionManagerOutputUrl& WithS3OutputUrl(Aws::String&& value) { SetS3OutputUrl(std::move(value)); return *this;}
    inline SessionManagerOutputUrl& WithS3OutputUrl(const char* value) { SetS3OutputUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetCloudWatchOutputUrl() const{ return m_cloudWatchOutputUrl; }
    inline bool CloudWatchOutputUrlHasBeenSet() const { return m_cloudWatchOutputUrlHasBeenSet; }
    inline void SetCloudWatchOutputUrl(const Aws::String& value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl = value; }
    inline void SetCloudWatchOutputUrl(Aws::String&& value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl = std::move(value); }
    inline void SetCloudWatchOutputUrl(const char* value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl.assign(value); }
    inline SessionManagerOutputUrl& WithCloudWatchOutputUrl(const Aws::String& value) { SetCloudWatchOutputUrl(value); return *this;}
    inline SessionManagerOutputUrl& WithCloudWatchOutputUrl(Aws::String&& value) { SetCloudWatchOutputUrl(std::move(value)); return *this;}
    inline SessionManagerOutputUrl& WithCloudWatchOutputUrl(const char* value) { SetCloudWatchOutputUrl(value); return *this;}
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
