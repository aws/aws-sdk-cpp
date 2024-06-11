/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about logs built to an S3 bucket for a build
   * project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectLogsConfigS3LogsDetails">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectLogsConfigS3LogsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigS3LogsDetails();
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigS3LogsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectLogsConfigS3LogsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to disable encryption of the S3 build log output.</p>
     */
    inline bool GetEncryptionDisabled() const{ return m_encryptionDisabled; }
    inline bool EncryptionDisabledHasBeenSet() const { return m_encryptionDisabledHasBeenSet; }
    inline void SetEncryptionDisabled(bool value) { m_encryptionDisabledHasBeenSet = true; m_encryptionDisabled = value; }
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithEncryptionDisabled(bool value) { SetEncryptionDisabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the S3 bucket and the path prefix for S3 logs.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the S3 build logs.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsCodeBuildProjectLogsConfigS3LogsDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    bool m_encryptionDisabled;
    bool m_encryptionDisabledHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
