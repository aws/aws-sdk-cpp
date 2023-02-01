/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataDetails.h>
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
   * <p> Specifies the properties for creating an Amazon Elastic Compute Cloud
   * (Amazon EC2) launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A name for the launch template. </p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p> A name for the launch template. </p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p> A name for the launch template. </p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p> A name for the launch template. </p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p> A name for the launch template. </p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p> A name for the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p> A name for the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p> A name for the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p> An ID for the launch template. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> An ID for the launch template. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> An ID for the launch template. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> An ID for the launch template. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> An ID for the launch template. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> An ID for the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> An ID for the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> An ID for the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The information to include in the launch template. </p>
     */
    inline const AwsEc2LaunchTemplateDataDetails& GetLaunchTemplateData() const{ return m_launchTemplateData; }

    /**
     * <p> The information to include in the launch template. </p>
     */
    inline bool LaunchTemplateDataHasBeenSet() const { return m_launchTemplateDataHasBeenSet; }

    /**
     * <p> The information to include in the launch template. </p>
     */
    inline void SetLaunchTemplateData(const AwsEc2LaunchTemplateDataDetails& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = value; }

    /**
     * <p> The information to include in the launch template. </p>
     */
    inline void SetLaunchTemplateData(AwsEc2LaunchTemplateDataDetails&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::move(value); }

    /**
     * <p> The information to include in the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithLaunchTemplateData(const AwsEc2LaunchTemplateDataDetails& value) { SetLaunchTemplateData(value); return *this;}

    /**
     * <p> The information to include in the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithLaunchTemplateData(AwsEc2LaunchTemplateDataDetails&& value) { SetLaunchTemplateData(std::move(value)); return *this;}


    /**
     * <p> The default version of the launch template. </p>
     */
    inline long long GetDefaultVersionNumber() const{ return m_defaultVersionNumber; }

    /**
     * <p> The default version of the launch template. </p>
     */
    inline bool DefaultVersionNumberHasBeenSet() const { return m_defaultVersionNumberHasBeenSet; }

    /**
     * <p> The default version of the launch template. </p>
     */
    inline void SetDefaultVersionNumber(long long value) { m_defaultVersionNumberHasBeenSet = true; m_defaultVersionNumber = value; }

    /**
     * <p> The default version of the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithDefaultVersionNumber(long long value) { SetDefaultVersionNumber(value); return *this;}


    /**
     * <p> The latest version of the launch template. </p>
     */
    inline long long GetLatestVersionNumber() const{ return m_latestVersionNumber; }

    /**
     * <p> The latest version of the launch template. </p>
     */
    inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }

    /**
     * <p> The latest version of the launch template. </p>
     */
    inline void SetLatestVersionNumber(long long value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }

    /**
     * <p> The latest version of the launch template. </p>
     */
    inline AwsEc2LaunchTemplateDetails& WithLatestVersionNumber(long long value) { SetLatestVersionNumber(value); return *this;}

  private:

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AwsEc2LaunchTemplateDataDetails m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet = false;

    long long m_defaultVersionNumber;
    bool m_defaultVersionNumberHasBeenSet = false;

    long long m_latestVersionNumber;
    bool m_latestVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
