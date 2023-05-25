/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class StopCanaryRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API StopCanaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopCanary"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline StopCanaryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline StopCanaryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the canary that you want to stop. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">ListCanaries</a>.</p>
     */
    inline StopCanaryRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
