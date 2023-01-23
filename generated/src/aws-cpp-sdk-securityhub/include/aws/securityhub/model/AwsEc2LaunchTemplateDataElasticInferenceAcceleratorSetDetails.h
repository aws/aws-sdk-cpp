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
   * <p> Provides details for an Amazon Elastic Inference accelerator. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of Elastic Inference accelerators to attach to the instance. </p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p> The number of Elastic Inference accelerators to attach to the instance. </p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p> The number of Elastic Inference accelerators to attach to the instance. </p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p> The number of Elastic Inference accelerators to attach to the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of Elastic Inference accelerator. </p>
     */
    inline AwsEc2LaunchTemplateDataElasticInferenceAcceleratorSetDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
