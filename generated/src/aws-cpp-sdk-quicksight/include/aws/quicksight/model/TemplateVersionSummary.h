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
   * <p>The template version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TemplateVersionSummary">AWS
   * API Reference</a></p>
   */
  class TemplateVersionSummary
  {
  public:
    AWS_QUICKSIGHT_API TemplateVersionSummary();
    AWS_QUICKSIGHT_API TemplateVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TemplateVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline TemplateVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline TemplateVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template version.</p>
     */
    inline TemplateVersionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The version number of the template version.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the template version.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number of the template version.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number of the template version.</p>
     */
    inline TemplateVersionSummary& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The time that this template version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that this template version was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that this template version was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that this template version was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that this template version was created.</p>
     */
    inline TemplateVersionSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that this template version was created.</p>
     */
    inline TemplateVersionSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the template version.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the template version.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the template version.</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the template version.</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the template version.</p>
     */
    inline TemplateVersionSummary& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the template version.</p>
     */
    inline TemplateVersionSummary& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the template version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the template version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the template version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the template version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the template version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the template version.</p>
     */
    inline TemplateVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the template version.</p>
     */
    inline TemplateVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the template version.</p>
     */
    inline TemplateVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
