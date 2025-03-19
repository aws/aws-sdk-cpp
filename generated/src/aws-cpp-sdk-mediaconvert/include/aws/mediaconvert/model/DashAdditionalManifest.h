/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Specify the details for each additional DASH manifest that you want the service
   * to generate for this output group. Each manifest can reference a different
   * subset of outputs in the group.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DashAdditionalManifest">AWS
   * API Reference</a></p>
   */
  class DashAdditionalManifest
  {
  public:
    AWS_MEDIACONVERT_API DashAdditionalManifest() = default;
    AWS_MEDIACONVERT_API DashAdditionalManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DashAdditionalManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your DASH group is
     * film-name.mpd. If you enter "-no-premium" for this setting, then the file name
     * the service generates for this top-level manifest is film-name-no-premium.mpd.
     */
    inline const Aws::String& GetManifestNameModifier() const { return m_manifestNameModifier; }
    inline bool ManifestNameModifierHasBeenSet() const { return m_manifestNameModifierHasBeenSet; }
    template<typename ManifestNameModifierT = Aws::String>
    void SetManifestNameModifier(ManifestNameModifierT&& value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier = std::forward<ManifestNameModifierT>(value); }
    template<typename ManifestNameModifierT = Aws::String>
    DashAdditionalManifest& WithManifestNameModifier(ManifestNameModifierT&& value) { SetManifestNameModifier(std::forward<ManifestNameModifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline const Aws::Vector<Aws::String>& GetSelectedOutputs() const { return m_selectedOutputs; }
    inline bool SelectedOutputsHasBeenSet() const { return m_selectedOutputsHasBeenSet; }
    template<typename SelectedOutputsT = Aws::Vector<Aws::String>>
    void SetSelectedOutputs(SelectedOutputsT&& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs = std::forward<SelectedOutputsT>(value); }
    template<typename SelectedOutputsT = Aws::Vector<Aws::String>>
    DashAdditionalManifest& WithSelectedOutputs(SelectedOutputsT&& value) { SetSelectedOutputs(std::forward<SelectedOutputsT>(value)); return *this;}
    template<typename SelectedOutputsT = Aws::String>
    DashAdditionalManifest& AddSelectedOutputs(SelectedOutputsT&& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.emplace_back(std::forward<SelectedOutputsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_manifestNameModifier;
    bool m_manifestNameModifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedOutputs;
    bool m_selectedOutputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
