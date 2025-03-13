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
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A name for the launch template. </p>
     */
    inline const Aws::String& GetLaunchTemplateName() const { return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    template<typename LaunchTemplateNameT = Aws::String>
    void SetLaunchTemplateName(LaunchTemplateNameT&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::forward<LaunchTemplateNameT>(value); }
    template<typename LaunchTemplateNameT = Aws::String>
    AwsEc2LaunchTemplateDetails& WithLaunchTemplateName(LaunchTemplateNameT&& value) { SetLaunchTemplateName(std::forward<LaunchTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An ID for the launch template. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AwsEc2LaunchTemplateDetails& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The information to include in the launch template. </p>
     */
    inline const AwsEc2LaunchTemplateDataDetails& GetLaunchTemplateData() const { return m_launchTemplateData; }
    inline bool LaunchTemplateDataHasBeenSet() const { return m_launchTemplateDataHasBeenSet; }
    template<typename LaunchTemplateDataT = AwsEc2LaunchTemplateDataDetails>
    void SetLaunchTemplateData(LaunchTemplateDataT&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::forward<LaunchTemplateDataT>(value); }
    template<typename LaunchTemplateDataT = AwsEc2LaunchTemplateDataDetails>
    AwsEc2LaunchTemplateDetails& WithLaunchTemplateData(LaunchTemplateDataT&& value) { SetLaunchTemplateData(std::forward<LaunchTemplateDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The default version of the launch template. </p>
     */
    inline long long GetDefaultVersionNumber() const { return m_defaultVersionNumber; }
    inline bool DefaultVersionNumberHasBeenSet() const { return m_defaultVersionNumberHasBeenSet; }
    inline void SetDefaultVersionNumber(long long value) { m_defaultVersionNumberHasBeenSet = true; m_defaultVersionNumber = value; }
    inline AwsEc2LaunchTemplateDetails& WithDefaultVersionNumber(long long value) { SetDefaultVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The latest version of the launch template. </p>
     */
    inline long long GetLatestVersionNumber() const { return m_latestVersionNumber; }
    inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }
    inline void SetLatestVersionNumber(long long value) { m_latestVersionNumberHasBeenSet = true; m_latestVersionNumber = value; }
    inline AwsEc2LaunchTemplateDetails& WithLatestVersionNumber(long long value) { SetLatestVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AwsEc2LaunchTemplateDataDetails m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet = false;

    long long m_defaultVersionNumber{0};
    bool m_defaultVersionNumberHasBeenSet = false;

    long long m_latestVersionNumber{0};
    bool m_latestVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
