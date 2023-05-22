/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The override parameters for a single analysis that is being
   * imported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AssetBundleImportJobAnalysisOverrideParameters">AWS
   * API Reference</a></p>
   */
  class AssetBundleImportJobAnalysisOverrideParameters
  {
  public:
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideParameters();
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AssetBundleImportJobAnalysisOverrideParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideParameters& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideParameters& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis that you ant to apply overrides to.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideParameters& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>A new name for the analysis.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A new name for the analysis.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A new name for the analysis.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A new name for the analysis.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A new name for the analysis.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A new name for the analysis.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideParameters& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A new name for the analysis.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideParameters& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A new name for the analysis.</p>
     */
    inline AssetBundleImportJobAnalysisOverrideParameters& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
