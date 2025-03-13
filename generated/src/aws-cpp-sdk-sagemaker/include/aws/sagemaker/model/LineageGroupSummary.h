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
    AWS_SAGEMAKER_API LineageGroupSummary() = default;
    AWS_SAGEMAKER_API LineageGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LineageGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group resource.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const { return m_lineageGroupArn; }
    inline bool LineageGroupArnHasBeenSet() const { return m_lineageGroupArnHasBeenSet; }
    template<typename LineageGroupArnT = Aws::String>
    void SetLineageGroupArn(LineageGroupArnT&& value) { m_lineageGroupArnHasBeenSet = true; m_lineageGroupArn = std::forward<LineageGroupArnT>(value); }
    template<typename LineageGroupArnT = Aws::String>
    LineageGroupSummary& WithLineageGroupArn(LineageGroupArnT&& value) { SetLineageGroupArn(std::forward<LineageGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupName() const { return m_lineageGroupName; }
    inline bool LineageGroupNameHasBeenSet() const { return m_lineageGroupNameHasBeenSet; }
    template<typename LineageGroupNameT = Aws::String>
    void SetLineageGroupName(LineageGroupNameT&& value) { m_lineageGroupNameHasBeenSet = true; m_lineageGroupName = std::forward<LineageGroupNameT>(value); }
    template<typename LineageGroupNameT = Aws::String>
    LineageGroupSummary& WithLineageGroupName(LineageGroupNameT&& value) { SetLineageGroupName(std::forward<LineageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the lineage group summary.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    LineageGroupSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the lineage group summary.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    LineageGroupSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of the lineage group summary.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    LineageGroupSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lineageGroupArn;
    bool m_lineageGroupArnHasBeenSet = false;

    Aws::String m_lineageGroupName;
    bool m_lineageGroupNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
