/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/ResourceStatus.h>
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
   * <p>Dashboard version summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVersionSummary">AWS
   * API Reference</a></p>
   */
  class DashboardVersionSummary
  {
  public:
    AWS_QUICKSIGHT_API DashboardVersionSummary();
    AWS_QUICKSIGHT_API DashboardVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DashboardVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DashboardVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DashboardVersionSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that this dashboard version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline DashboardVersionSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DashboardVersionSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version number.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DashboardVersionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DashboardVersionSummary& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline DashboardVersionSummary& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source entity ARN.</p>
     */
    inline const Aws::String& GetSourceEntityArn() const{ return m_sourceEntityArn; }
    inline bool SourceEntityArnHasBeenSet() const { return m_sourceEntityArnHasBeenSet; }
    inline void SetSourceEntityArn(const Aws::String& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = value; }
    inline void SetSourceEntityArn(Aws::String&& value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn = std::move(value); }
    inline void SetSourceEntityArn(const char* value) { m_sourceEntityArnHasBeenSet = true; m_sourceEntityArn.assign(value); }
    inline DashboardVersionSummary& WithSourceEntityArn(const Aws::String& value) { SetSourceEntityArn(value); return *this;}
    inline DashboardVersionSummary& WithSourceEntityArn(Aws::String&& value) { SetSourceEntityArn(std::move(value)); return *this;}
    inline DashboardVersionSummary& WithSourceEntityArn(const char* value) { SetSourceEntityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DashboardVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DashboardVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DashboardVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sourceEntityArn;
    bool m_sourceEntityArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
