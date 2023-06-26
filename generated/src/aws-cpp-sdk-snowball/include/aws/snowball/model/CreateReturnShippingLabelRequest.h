/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ShippingOption.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CreateReturnShippingLabelRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CreateReturnShippingLabelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReturnShippingLabel"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CreateReturnShippingLabelRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CreateReturnShippingLabelRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for a job that you want to create the return shipping label for; for
     * example, <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CreateReturnShippingLabelRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * the device is returned to Amazon Web Services. This speed represents how quickly
     * it moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * the device is returned to Amazon Web Services. This speed represents how quickly
     * it moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p>
     */
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * the device is returned to Amazon Web Services. This speed represents how quickly
     * it moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * the device is returned to Amazon Web Services. This speed represents how quickly
     * it moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * the device is returned to Amazon Web Services. This speed represents how quickly
     * it moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p>
     */
    inline CreateReturnShippingLabelRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The shipping speed for a particular job. This speed doesn't dictate how soon
     * the device is returned to Amazon Web Services. This speed represents how quickly
     * it moves to its destination while in transit. Regional shipping speeds are as
     * follows:</p>
     */
    inline CreateReturnShippingLabelRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
