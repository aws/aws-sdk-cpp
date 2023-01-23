/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Lists a summary of the properties of a lineage group. A lineage group
   * provides a group of shareable lineage entity resources.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LineageGroupSummary">AWS
   * API Reference</a></p>
   */
  class LineageGroupSummary
  {
  public:
    AWS_SAGEMAKER_API LineageGroupSummary();
    AWS_SAGEMAKER_API LineageGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LineageGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline bool LineageGroupArnHasBeenSet() const { return m_lineageGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline LineageGroupSummary& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline LineageGroupSummary& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline LineageGroupSummary& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupName() const{ return m_lineageGroupName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline bool LineageGroupNameHasBeenSet() const { return m_lineageGroupNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupName(const Aws::String& value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupName(Aws::String&& value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline void SetLineageGroupName(const char* value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline LineageGroupSummary& WithLineageGroupName(const Aws::String& value) { SetLineageGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline LineageGroupSummary& WithLineageGroupName(Aws::String&& value) { SetLineageGroupName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline LineageGroupSummary& WithLineageGroupName(const char* value) { SetLineageGroupName(value); return *this;}


    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline LineageGroupSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_lineageGroupArn;
    bool m_lineageGroupArnHasBeenSet = false;

    Aws::String m_lineageGroupName;
    bool m_lineageGroupNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
