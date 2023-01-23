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
   * Specify the details for each additional Microsoft Smooth Streaming manifest that
   * you want the service to generate for this output group. Each manifest can
   * reference a different subset of outputs in the group.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MsSmoothAdditionalManifest">AWS
   * API Reference</a></p>
   */
  class MsSmoothAdditionalManifest
  {
  public:
    AWS_MEDIACONVERT_API MsSmoothAdditionalManifest();
    AWS_MEDIACONVERT_API MsSmoothAdditionalManifest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API MsSmoothAdditionalManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline const Aws::String& GetManifestNameModifier() const{ return m_manifestNameModifier; }

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline bool ManifestNameModifierHasBeenSet() const { return m_manifestNameModifierHasBeenSet; }

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline void SetManifestNameModifier(const Aws::String& value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier = value; }

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline void SetManifestNameModifier(Aws::String&& value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier = std::move(value); }

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline void SetManifestNameModifier(const char* value) { m_manifestNameModifierHasBeenSet = true; m_manifestNameModifier.assign(value); }

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline MsSmoothAdditionalManifest& WithManifestNameModifier(const Aws::String& value) { SetManifestNameModifier(value); return *this;}

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline MsSmoothAdditionalManifest& WithManifestNameModifier(Aws::String&& value) { SetManifestNameModifier(std::move(value)); return *this;}

    /**
     * Specify a name modifier that the service adds to the name of this manifest to
     * make it different from the file names of the other main manifests in the output
     * group. For example, say that the default main manifest for your Microsoft Smooth
     * group is film-name.ismv. If you enter "-no-premium" for this setting, then the
     * file name the service generates for this top-level manifest is
     * film-name-no-premium.ismv.
     */
    inline MsSmoothAdditionalManifest& WithManifestNameModifier(const char* value) { SetManifestNameModifier(value); return *this;}


    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline const Aws::Vector<Aws::String>& GetSelectedOutputs() const{ return m_selectedOutputs; }

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline bool SelectedOutputsHasBeenSet() const { return m_selectedOutputsHasBeenSet; }

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline void SetSelectedOutputs(const Aws::Vector<Aws::String>& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs = value; }

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline void SetSelectedOutputs(Aws::Vector<Aws::String>&& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs = std::move(value); }

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline MsSmoothAdditionalManifest& WithSelectedOutputs(const Aws::Vector<Aws::String>& value) { SetSelectedOutputs(value); return *this;}

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline MsSmoothAdditionalManifest& WithSelectedOutputs(Aws::Vector<Aws::String>&& value) { SetSelectedOutputs(std::move(value)); return *this;}

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline MsSmoothAdditionalManifest& AddSelectedOutputs(const Aws::String& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.push_back(value); return *this; }

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline MsSmoothAdditionalManifest& AddSelectedOutputs(Aws::String&& value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.push_back(std::move(value)); return *this; }

    /**
     * Specify the outputs that you want this additional top-level manifest to
     * reference.
     */
    inline MsSmoothAdditionalManifest& AddSelectedOutputs(const char* value) { m_selectedOutputsHasBeenSet = true; m_selectedOutputs.push_back(value); return *this; }

  private:

    Aws::String m_manifestNameModifier;
    bool m_manifestNameModifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedOutputs;
    bool m_selectedOutputsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
