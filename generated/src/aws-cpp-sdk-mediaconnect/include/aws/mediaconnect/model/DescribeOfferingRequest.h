/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class DescribeOfferingRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DescribeOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOffering"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline const Aws::String& GetOfferingArn() const{ return m_offeringArn; }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline void SetOfferingArn(const Aws::String& value) { m_offeringArnHasBeenSet = true; m_offeringArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline void SetOfferingArn(Aws::String&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline void SetOfferingArn(const char* value) { m_offeringArnHasBeenSet = true; m_offeringArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline DescribeOfferingRequest& WithOfferingArn(const Aws::String& value) { SetOfferingArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline DescribeOfferingRequest& WithOfferingArn(Aws::String&& value) { SetOfferingArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the offering.
     */
    inline DescribeOfferingRequest& WithOfferingArn(const char* value) { SetOfferingArn(value); return *this;}

  private:

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
