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
    AWS_QUICKSIGHT_API BrandDetail();
    AWS_QUICKSIGHT_API BrandDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon QuickSight brand.</p>
     */
    inline const Aws::String& GetBrandId() const{ return m_brandId; }
    inline bool BrandIdHasBeenSet() const { return m_brandIdHasBeenSet; }
    inline void SetBrandId(const Aws::String& value) { m_brandIdHasBeenSet = true; m_brandId = value; }
    inline void SetBrandId(Aws::String&& value) { m_brandIdHasBeenSet = true; m_brandId = std::move(value); }
    inline void SetBrandId(const char* value) { m_brandIdHasBeenSet = true; m_brandId.assign(value); }
    inline BrandDetail& WithBrandId(const Aws::String& value) { SetBrandId(value); return *this;}
    inline BrandDetail& WithBrandId(Aws::String&& value) { SetBrandId(std::move(value)); return *this;}
    inline BrandDetail& WithBrandId(const char* value) { SetBrandId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BrandDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BrandDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BrandDetail& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the brand.</p>
     */
    inline const BrandStatus& GetBrandStatus() const{ return m_brandStatus; }
    inline bool BrandStatusHasBeenSet() const { return m_brandStatusHasBeenSet; }
    inline void SetBrandStatus(const BrandStatus& value) { m_brandStatusHasBeenSet = true; m_brandStatus = value; }
    inline void SetBrandStatus(BrandStatus&& value) { m_brandStatusHasBeenSet = true; m_brandStatus = std::move(value); }
    inline BrandDetail& WithBrandStatus(const BrandStatus& value) { SetBrandStatus(value); return *this;}
    inline BrandDetail& WithBrandStatus(BrandStatus&& value) { SetBrandStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the brand was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline BrandDetail& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline BrandDetail& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the brand was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline BrandDetail& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline BrandDetail& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline BrandDetail& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline BrandDetail& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline BrandDetail& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the version.</p>
     */
    inline const BrandVersionStatus& GetVersionStatus() const{ return m_versionStatus; }
    inline bool VersionStatusHasBeenSet() const { return m_versionStatusHasBeenSet; }
    inline void SetVersionStatus(const BrandVersionStatus& value) { m_versionStatusHasBeenSet = true; m_versionStatus = value; }
    inline void SetVersionStatus(BrandVersionStatus&& value) { m_versionStatusHasBeenSet = true; m_versionStatus = std::move(value); }
    inline BrandDetail& WithVersionStatus(const BrandVersionStatus& value) { SetVersionStatus(value); return *this;}
    inline BrandDetail& WithVersionStatus(BrandVersionStatus&& value) { SetVersionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors that occurred during the most recent brand operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetErrors() const{ return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    inline void SetErrors(const Aws::Vector<Aws::String>& value) { m_errorsHasBeenSet = true; m_errors = value; }
    inline void SetErrors(Aws::Vector<Aws::String>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }
    inline BrandDetail& WithErrors(const Aws::Vector<Aws::String>& value) { SetErrors(value); return *this;}
    inline BrandDetail& WithErrors(Aws::Vector<Aws::String>&& value) { SetErrors(std::move(value)); return *this;}
    inline BrandDetail& AddErrors(const Aws::String& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }
    inline BrandDetail& AddErrors(Aws::String&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }
    inline BrandDetail& AddErrors(const char* value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logo details.</p>
     */
    inline const Logo& GetLogo() const{ return m_logo; }
    inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
    inline void SetLogo(const Logo& value) { m_logoHasBeenSet = true; m_logo = value; }
    inline void SetLogo(Logo&& value) { m_logoHasBeenSet = true; m_logo = std::move(value); }
    inline BrandDetail& WithLogo(const Logo& value) { SetLogo(value); return *this;}
    inline BrandDetail& WithLogo(Logo&& value) { SetLogo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_brandId;
    bool m_brandIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    BrandStatus m_brandStatus;
    bool m_brandStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    BrandVersionStatus m_versionStatus;
    bool m_versionStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet = false;

    Logo m_logo;
    bool m_logoHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
