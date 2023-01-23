/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/mobile/MobileRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Mobile
{
namespace Model
{

  /**
   * <p> Request structure to request the details of a specific bundle.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/DescribeBundleRequest">AWS
   * API Reference</a></p>
   */
  class DescribeBundleRequest : public MobileRequest
  {
  public:
    AWS_MOBILE_API DescribeBundleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBundle"; }

    AWS_MOBILE_API Aws::String SerializePayload() const override;


    /**
     * <p> Unique bundle identifier. </p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline DescribeBundleRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline DescribeBundleRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}

    /**
     * <p> Unique bundle identifier. </p>
     */
    inline DescribeBundleRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}

  private:

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
