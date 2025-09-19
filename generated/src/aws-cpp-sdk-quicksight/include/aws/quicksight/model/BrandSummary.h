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
    AWS_QUICKSIGHT_API BrandSummary() = default;
    AWS_QUICKSIGHT_API BrandSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BrandSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the QuickSight brand.</p>
     */
    inline const Aws::String& GetBrandId() const { return m_brandId; }
    inline bool BrandIdHasBeenSet() const { return m_brandIdHasBeenSet; }
    template<typename BrandIdT = Aws::String>
    void SetBrandId(BrandIdT&& value) { m_brandIdHasBeenSet = true; m_brandId = std::forward<BrandIdT>(value); }
    template<typename BrandIdT = Aws::String>
    BrandSummary& WithBrandId(BrandIdT&& value) { SetBrandId(std::forward<BrandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the brand.</p>
     */
    inline const Aws::String& GetBrandName() const { return m_brandName; }
    inline bool BrandNameHasBeenSet() const { return m_brandNameHasBeenSet; }
    template<typename BrandNameT = Aws::String>
    void SetBrandName(BrandNameT&& value) { m_brandNameHasBeenSet = true; m_brandName = std::forward<BrandNameT>(value); }
    template<typename BrandNameT = Aws::String>
    BrandSummary& WithBrandName(BrandNameT&& value) { SetBrandName(std::forward<BrandNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the brand.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BrandSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the brand.</p>
     */
    inline BrandStatus GetBrandStatus() const { return m_brandStatus; }
    inline bool BrandStatusHasBeenSet() const { return m_brandStatusHasBeenSet; }
    inline void SetBrandStatus(BrandStatus value) { m_brandStatusHasBeenSet = true; m_brandStatus = value; }
    inline BrandSummary& WithBrandStatus(BrandStatus value) { SetBrandStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the brand was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    BrandSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the brand was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    BrandSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
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

    BrandStatus m_brandStatus{BrandStatus::NOT_SET};
    bool m_brandStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
