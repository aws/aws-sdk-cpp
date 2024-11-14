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
  class UpdateBrandPublishedVersionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateBrandPublishedVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrandPublishedVersion"; }

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
    inline UpdateBrandPublishedVersionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateBrandPublishedVersionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateBrandPublishedVersionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
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
    inline UpdateBrandPublishedVersionRequest& WithBrandId(const Aws::String& value) { SetBrandId(value); return *this;}
    inline UpdateBrandPublishedVersionRequest& WithBrandId(Aws::String&& value) { SetBrandId(std::move(value)); return *this;}
    inline UpdateBrandPublishedVersionRequest& WithBrandId(const char* value) { SetBrandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the published version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline UpdateBrandPublishedVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline UpdateBrandPublishedVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline UpdateBrandPublishedVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_brandId;
    bool m_brandIdHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
