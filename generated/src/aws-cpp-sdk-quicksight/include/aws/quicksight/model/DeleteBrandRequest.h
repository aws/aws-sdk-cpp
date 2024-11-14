/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteBrandRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteBrandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBrand"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the brand.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline DeleteBrandRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DeleteBrandRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DeleteBrandRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon QuickSight brand.</p>
     */
    inline const Aws::String& GetBrandId() const{ return m_brandId; }
    inline bool BrandIdHasBeenSet() const { return m_brandIdHasBeenSet; }
    inline void SetBrandId(const Aws::String& value) { m_brandIdHasBeenSet = true; m_brandId = value; }
    inline void SetBrandId(Aws::String&& value) { m_brandIdHasBeenSet = true; m_brandId = std::move(value); }
    inline void SetBrandId(const char* value) { m_brandIdHasBeenSet = true; m_brandId.assign(value); }
    inline DeleteBrandRequest& WithBrandId(const Aws::String& value) { SetBrandId(value); return *this;}
    inline DeleteBrandRequest& WithBrandId(Aws::String&& value) { SetBrandId(std::move(value)); return *this;}
    inline DeleteBrandRequest& WithBrandId(const char* value) { SetBrandId(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_brandId;
    bool m_brandIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
