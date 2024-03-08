/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The parameters for an IAM Identity Center configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/IdentityCenterConfiguration">AWS
   * API Reference</a></p>
   */
  class IdentityCenterConfiguration
  {
  public:
    AWS_QUICKSIGHT_API IdentityCenterConfiguration();
    AWS_QUICKSIGHT_API IdentityCenterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API IdentityCenterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Boolean option that controls whether Trusted Identity Propagation should be
     * used.</p>
     */
    inline bool GetEnableIdentityPropagation() const{ return m_enableIdentityPropagation; }

    /**
     * <p>A Boolean option that controls whether Trusted Identity Propagation should be
     * used.</p>
     */
    inline bool EnableIdentityPropagationHasBeenSet() const { return m_enableIdentityPropagationHasBeenSet; }

    /**
     * <p>A Boolean option that controls whether Trusted Identity Propagation should be
     * used.</p>
     */
    inline void SetEnableIdentityPropagation(bool value) { m_enableIdentityPropagationHasBeenSet = true; m_enableIdentityPropagation = value; }

    /**
     * <p>A Boolean option that controls whether Trusted Identity Propagation should be
     * used.</p>
     */
    inline IdentityCenterConfiguration& WithEnableIdentityPropagation(bool value) { SetEnableIdentityPropagation(value); return *this;}

  private:

    bool m_enableIdentityPropagation;
    bool m_enableIdentityPropagationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
