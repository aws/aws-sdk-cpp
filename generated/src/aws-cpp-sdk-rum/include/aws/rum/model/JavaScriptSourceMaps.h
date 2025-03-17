/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/model/DeobfuscationStatus.h>
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
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p> A structure that contains the configuration for how an app monitor can
   * unminify JavaScript error stack traces using source maps. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/JavaScriptSourceMaps">AWS
   * API Reference</a></p>
   */
  class JavaScriptSourceMaps
  {
  public:
    AWS_CLOUDWATCHRUM_API JavaScriptSourceMaps();
    AWS_CLOUDWATCHRUM_API JavaScriptSourceMaps(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API JavaScriptSourceMaps& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The S3Uri of the bucket or folder that stores the source map files. It is
     * required if status is ENABLED. </p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline JavaScriptSourceMaps& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline JavaScriptSourceMaps& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline JavaScriptSourceMaps& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether JavaScript error stack traces should be unminified for
     * this app monitor. The default is for JavaScript error stack trace unminification
     * to be <code>DISABLED</code>. </p>
     */
    inline const DeobfuscationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DeobfuscationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DeobfuscationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JavaScriptSourceMaps& WithStatus(const DeobfuscationStatus& value) { SetStatus(value); return *this;}
    inline JavaScriptSourceMaps& WithStatus(DeobfuscationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    DeobfuscationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
