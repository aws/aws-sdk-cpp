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
   * <p> An object that contains information on the status of S3 data event logs as a
   * data source for the detector. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDataSourcesS3LogsDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDataSourcesS3LogsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesS3LogsDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesS3LogsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesS3LogsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesS3LogsDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesS3LogsDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> A value that describes whether S3 data event logs are automatically enabled
     * for new members of an organization. </p>
     */
    inline AwsGuardDutyDetectorDataSourcesS3LogsDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
