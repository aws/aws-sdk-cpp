/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/BrandDefinition.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateBrandRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateBrandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrand"; }

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
    inline UpdateBrandRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateBrandRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateBrandRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
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
    inline UpdateBrandRequest& WithBrandId(const Aws::String& value) { SetBrandId(value); return *this;}
    inline UpdateBrandRequest& WithBrandId(Aws::String&& value) { SetBrandId(std::move(value)); return *this;}
    inline UpdateBrandRequest& WithBrandId(const char* value) { SetBrandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the brand.</p>
     */
    inline const BrandDefinition& GetBrandDefinition() const{ return m_brandDefinition; }
    inline bool BrandDefinitionHasBeenSet() const { return m_brandDefinitionHasBeenSet; }
    inline void SetBrandDefinition(const BrandDefinition& value) { m_brandDefinitionHasBeenSet = true; m_brandDefinition = value; }
    inline void SetBrandDefinition(BrandDefinition&& value) { m_brandDefinitionHasBeenSet = true; m_brandDefinition = std::move(value); }
    inline UpdateBrandRequest& WithBrandDefinition(const BrandDefinition& value) { SetBrandDefinition(value); return *this;}
    inline UpdateBrandRequest& WithBrandDefinition(BrandDefinition&& value) { SetBrandDefinition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_brandId;
    bool m_brandIdHasBeenSet = false;

    BrandDefinition m_brandDefinition;
    bool m_brandDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
