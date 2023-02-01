/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>VPC connection properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VpcConnectionProperties">AWS
   * API Reference</a></p>
   */
  class VpcConnectionProperties
  {
  public:
    AWS_QUICKSIGHT_API VpcConnectionProperties();
    AWS_QUICKSIGHT_API VpcConnectionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VpcConnectionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline bool VpcConnectionArnHasBeenSet() const { return m_vpcConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArnHasBeenSet = true; m_vpcConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline VpcConnectionProperties& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline VpcConnectionProperties& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the VPC connection.</p>
     */
    inline VpcConnectionProperties& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}

  private:

    Aws::String m_vpcConnectionArn;
    bool m_vpcConnectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
