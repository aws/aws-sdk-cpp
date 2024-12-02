/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/AwsRegion.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/ImpactedAwsRegion">AWS
   * API Reference</a></p>
   */
  class ImpactedAwsRegion
  {
  public:
    AWS_SECURITYIR_API ImpactedAwsRegion();
    AWS_SECURITYIR_API ImpactedAwsRegion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API ImpactedAwsRegion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const AwsRegion& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const AwsRegion& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(AwsRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline ImpactedAwsRegion& WithRegion(const AwsRegion& value) { SetRegion(value); return *this;}
    inline ImpactedAwsRegion& WithRegion(AwsRegion&& value) { SetRegion(std::move(value)); return *this;}
    ///@}
  private:

    AwsRegion m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
