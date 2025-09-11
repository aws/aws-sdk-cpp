/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/BrandStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/BrandVersionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Logo.h>
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
   * <p>The details of the brand.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BrandDetail">AWS
   * API Reference</a></p>
   */
  class BrandDetail
  {
  public:
    AWS_QUICKSIGHT_API BrandDetail() = default;
    AWS_QUICKSIGHT_API BrandDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the QuickSight brand.</p>
     */
    inline const Aws::String& GetBrandId() const { return m_brandId; }
    inline bool BrandIdHasBeenSet() const { return m_brandIdHasBeenSet; }
    template<typename BrandIdT = Aws::String>
    void SetBrandId(BrandIdT&& value) { m_brandIdHasBeenSet = true; m_brandId = std::forward<BrandIdT>(value); }
    template<typename BrandIdT = Aws::String>
    BrandDetail& WithBrandId(BrandIdT&& value) { SetBrandId(std::forward<BrandIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BrandDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the brand.</p>
     */
    inline BrandStatus GetBrandStatus() const { return m_brandStatus; }
    inline bool BrandStatusHasBeenSet() const { return m_brandStatusHasBeenSet; }
    inline void SetBrandStatus(BrandStatus value) { m_brandStatusHasBeenSet = true; m_brandStatus = value; }
    inline BrandDetail& WithBrandStatus(BrandStatus value) { SetBrandStatus(value); return *this;}
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
    BrandDetail& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the brand was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    BrandDetail& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    BrandDetail& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the version.</p>
     */
    inline BrandVersionStatus GetVersionStatus() const { return m_versionStatus; }
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }
    inline void SetVersionStatus(BrandVersionStatus value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }
    inline BrandDetail& WithVersionStatus(BrandVersionStatus value) { SetVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors that occurred during the most recent brand operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<Aws::String>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<Aws::String>>
    BrandDetail& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = Aws::String>
    BrandDetail& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logo details.</p>
     */
    inline const Logo& GetLogo() const { return m_logo; }
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
    template<typename LogoT = Logo>
    void SetLogo(LogoT&& value) { m_logoHasBeenSet = true; m_logo = std::forward<LogoT>(value); }
    template<typename LogoT = Logo>
    BrandDetail& WithLogo(LogoT&& value) { SetLogo(std::forward<LogoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_brandId;
    bool m_brandIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    BrandStatus m_brandStatus{BrandStatus::NOT_SET};
    bool m_brandStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    BrandVersionStatus m_versionStatus{BrandVersionStatus::NOT_SET};
    bool m_versionStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet = false;

    Logo m_logo;
    bool m_logoHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
