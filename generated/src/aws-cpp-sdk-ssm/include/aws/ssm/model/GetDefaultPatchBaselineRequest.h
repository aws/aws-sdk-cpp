﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/OperatingSystem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetDefaultPatchBaselineRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetDefaultPatchBaselineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDefaultPatchBaseline"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Returns the default patch baseline for the specified operating system.</p>
     */
    inline OperatingSystem GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(OperatingSystem value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline GetDefaultPatchBaselineRequest& WithOperatingSystem(OperatingSystem value) { SetOperatingSystem(value); return *this;}
    ///@}
  private:

    OperatingSystem m_operatingSystem{OperatingSystem::NOT_SET};
    bool m_operatingSystemHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
