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
   * <p> Provides details for an Identity and Access Management (IAM) instance
   * profile, which is a container for an IAM role for your instance. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataIamInstanceProfileDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataIamInstanceProfileDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataIamInstanceProfileDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataIamInstanceProfileDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataIamInstanceProfileDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataIamInstanceProfileDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataIamInstanceProfileDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataIamInstanceProfileDetails& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The name of the instance profile. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the instance profile. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the instance profile. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the instance profile. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the instance profile. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataIamInstanceProfileDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataIamInstanceProfileDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the instance profile. </p>
     */
    inline AwsEc2LaunchTemplateDataIamInstanceProfileDetails& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
