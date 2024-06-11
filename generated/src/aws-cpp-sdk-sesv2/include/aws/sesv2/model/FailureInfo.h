﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains the failure details about a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/FailureInfo">AWS
   * API Reference</a></p>
   */
  class FailureInfo
  {
  public:
    AWS_SESV2_API FailureInfo();
    AWS_SESV2_API FailureInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API FailureInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 pre-signed URL that contains all the failed records and related
     * information.</p>
     */
    inline const Aws::String& GetFailedRecordsS3Url() const{ return m_failedRecordsS3Url; }
    inline bool FailedRecordsS3UrlHasBeenSet() const { return m_failedRecordsS3UrlHasBeenSet; }
    inline void SetFailedRecordsS3Url(const Aws::String& value) { m_failedRecordsS3UrlHasBeenSet = true; m_failedRecordsS3Url = value; }
    inline void SetFailedRecordsS3Url(Aws::String&& value) { m_failedRecordsS3UrlHasBeenSet = true; m_failedRecordsS3Url = std::move(value); }
    inline void SetFailedRecordsS3Url(const char* value) { m_failedRecordsS3UrlHasBeenSet = true; m_failedRecordsS3Url.assign(value); }
    inline FailureInfo& WithFailedRecordsS3Url(const Aws::String& value) { SetFailedRecordsS3Url(value); return *this;}
    inline FailureInfo& WithFailedRecordsS3Url(Aws::String&& value) { SetFailedRecordsS3Url(std::move(value)); return *this;}
    inline FailureInfo& WithFailedRecordsS3Url(const char* value) { SetFailedRecordsS3Url(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about why the job failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline FailureInfo& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline FailureInfo& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline FailureInfo& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_failedRecordsS3Url;
    bool m_failedRecordsS3UrlHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
