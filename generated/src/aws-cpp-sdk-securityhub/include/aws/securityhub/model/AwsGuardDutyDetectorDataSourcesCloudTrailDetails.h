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
   * <p> An object that contains information on the status of CloudTrail as a data
   * source for the detector. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsGuardDutyDetectorDataSourcesCloudTrailDetails">AWS
   * API Reference</a></p>
   */
  class AwsGuardDutyDetectorDataSourcesCloudTrailDetails
  {
  public:
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesCloudTrailDetails();
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesCloudTrailDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsGuardDutyDetectorDataSourcesCloudTrailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline AwsGuardDutyDetectorDataSourcesCloudTrailDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline AwsGuardDutyDetectorDataSourcesCloudTrailDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> Specifies whether CloudTrail is activated as a data source for the detector.
     * </p>
     */
    inline AwsGuardDutyDetectorDataSourcesCloudTrailDetails& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
