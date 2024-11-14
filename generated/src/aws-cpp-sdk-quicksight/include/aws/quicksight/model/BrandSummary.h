/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/BrandStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

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
   * <p>A summary of the brand.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BrandSummary">AWS
   * API Reference</a></p>
   */
  class BrandSummary
  {
  public:
    AWS_QUICKSIGHT_API BrandSummary();
    AWS_QUICKSIGHT_API BrandSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BrandSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BrandSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BrandSummary& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline BrandSummary& WithBrandId(const Aws::String& value) { SetBrandId(value); return *this;}
    inline BrandSummary& WithBrandId(Aws::String&& value) { SetBrandId(std::move(value)); return *this;}
    inline BrandSummary& WithBrandId(const char* value) { SetBrandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the brand.</p>
     */
    inline const Aws::String& GetBrandName() const{ return m_brandName; }
    inline bool BrandNameHasBeenSet() const { return m_brandNameHasBeenSet; }
    inline void SetBrandName(const Aws::String& value) { m_brandNameHasBeenSet = true; m_brandName = value; }
    inline void SetBrandName(Aws::String&& value) { m_brandNameHasBeenSet = true; m_brandName = std::move(value); }
    inline void SetBrandName(const char* value) { m_brandNameHasBeenSet = true; m_brandName.assign(value); }
    inline BrandSummary& WithBrandName(const Aws::String& value) { SetBrandName(value); return *this;}
    inline BrandSummary& WithBrandName(Aws::String&& value) { SetBrandName(std::move(value)); return *this;}
    inline BrandSummary& WithBrandName(const char* value) { SetBrandName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the brand.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline BrandSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BrandSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BrandSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the brand.</p>
     */
    inline const BrandStatus& GetBrandStatus() const{ return m_brandStatus; }
    inline bool BrandStatusHasBeenSet() const { return m_brandStatusHasBeenSet; }
    inline void SetBrandStatus(const BrandStatus& value) { m_brandStatusHasBeenSet = true; m_brandStatus = value; }
    inline void SetBrandStatus(BrandStatus&& value) { m_brandStatusHasBeenSet = true; m_brandStatus = std::move(value); }
    inline BrandSummary& WithBrandStatus(const BrandStatus& value) { SetBrandStatus(value); return *this;}
    inline BrandSummary& WithBrandStatus(BrandStatus&& value) { SetBrandStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the brand was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline BrandSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline BrandSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the brand was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline BrandSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline BrandSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_brandId;
    bool m_brandIdHasBeenSet = false;

    Aws::String m_brandName;
    bool m_brandNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BrandStatus m_brandStatus;
    bool m_brandStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
