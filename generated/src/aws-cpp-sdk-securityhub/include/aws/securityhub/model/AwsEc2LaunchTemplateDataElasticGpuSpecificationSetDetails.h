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
   * <p> Provides details about an Elastic Graphics specification for an Amazon EC2
   * launch template. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of Elastic Graphics accelerator. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticGpuSpecificationSetDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
