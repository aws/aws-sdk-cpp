/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/mediaconvert/model/Policy.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class PutPolicyRequest : public MediaConvertRequest
  {
  public:
    AWS_MEDIACONVERT_API PutPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPolicy"; }

    AWS_MEDIACONVERT_API Aws::String SerializePayload() const override;


    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetPolicy(const Policy& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline void SetPolicy(Policy&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline PutPolicyRequest& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * A policy configures behavior that you allow or disallow for your account. For
     * information about MediaConvert policies, see the user guide at
     * http://docs.aws.amazon.com/mediaconvert/latest/ug/what-is.html
     */
    inline PutPolicyRequest& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    Policy m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
